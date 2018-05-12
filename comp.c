#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "y.tab.h"

static int lbl;
int leftType;
int rightType;
int last = 0;
int l=0;
int counter = -1;
int br = 0;
int permit;
char* oprType;
int base;


int ex(nodeType *p) {
	
    int lbl1, lbl2;
    int type1;
	int type2;
	int i,j;
	
    if (!p) return 0;
    switch(p->type) 
	{
	case typeCon: 
		//{ Integer, Float, Char, String, Bool, ConstIntger, ConstFloat, ConstChar, ConstString, ConstBool} 
		rightType = p->con.type;
		
		if(
			( leftType == 5 && ( rightType != 5 && rightType != 0 )) || 											//integer
			( leftType == 6 && ( rightType != 6 && rightType != 1 && rightType != 5 && rightType != 0 )) || 		//float
			( leftType == 7 && ( rightType != 7 && rightType != 2 )) || 											//char
			( leftType == 8 && ( rightType != 8 && rightType != 3 && rightType != 7 && rightType != 2 )) || 		//string
			( leftType == 9 && ( rightType != 9 && rightType != 4 && rightType != 5 && rightType != 0 ))    		//Bool
		)
		{
			fprintf( f1," Error in type %d \n", p->con.type);
			break;
		}
		
		if (leftType == 9 || leftType == 4 )
		{
			
			if (atoi(p->con.value) != 0 && atoi(p->con.value) != 1)
			{
				fprintf( f1," Error in type %d \n", p->con.type);
				break;
			}
		}
		
		if ( leftType == 6 && ( rightType == 5 || rightType == 0 ))
		{
			fprintf( f1, "Warning : Assigning integer to float\n");
			strcat(p->con.value, ".0");
		}
		
		if ( leftType == 8 && ( rightType == 7 || rightType == 2 ))
		{
			fprintf( f1, "Warning : Assigning character to string\n");
		}
		
		fprintf( f1, "\t mov R%01d, %s \n", last,p->con.value);
		last ++;
		counter ++;
				
	break;
    case typeId: 
	   
		   
		rightType = p->id.type;
    	if (oprType!=NULL && strcmp(oprType,strdup("a")) == 0 )
    	{	
			int index=(int)p->id.index;
			struct SymTableData * data= find(index);
			int init=(int)data->symInit;
    		if (init == 0)
    		{
    			fprintf(f1,"\t WARNING: Variable %s is not initialized\n",p->id.name);	
    		}

    		fprintf(f1,"\t mov R%01d,%s \n",last,p->id.name);
    		rightType = p->id.type;
    		last ++;
			counter ++;
		}
		else 
    	{
       		fprintf(f1,"\t mov %s,NULL \n",p->id.name);
		}
        break;
		
    case typeOpr:
        switch(p->opr.oper) 
		{
			
		//*********************OBRACE***********************************************************************
		case OBRACE:
				br = atoi(p->opr.op[0]->con.value);
				ex(p->opr.op[1]);
				ex(p->opr.op[2]);		
		break;	
		//*********************EBRACE************************************************************************
		case EBRACE:
		setBrace(br);
		br--;
		break;
		
		//*******************SWITCH**************************************************************************
		case SWITCH:
                    oprType = strdup("a");
					ex(p->opr.op[0]);
					base = last - 1;
					ex(p->opr.op[1]);
					l++;
                    oprType = NULL;
		break;
		//*********************************Case*******************************************	
		case CASE:
					ex(p->opr.op[0]);
					fprintf( f1, "\t JEQ R%01d, R%01d, R%01d \n", last, base, counter);
					fprintf( f1, "\t jnz\tL%03d \n", lbl1 = lbl++); 
					ex(p->opr.op[1]);
					ex(p->opr.op[2]);
					fprintf( f1, "L%03d:\n", lbl1);
					ex(p->opr.op[3]);
                    last++;
                    counter++;
        break;
		//********************************Break********************************************			
	    case BREAK:
				  fprintf( f1, "\t jmp Label%01d \n", l);
		break;
	    //********************************Default*******************************************				
		case DEFAULT:
				ex(p->opr.op[0]);
				fprintf( f1, "Label%01d: \n", l);
		break;
		//*********************WHILE*************************************************************************	
        case WHILE:
            fprintf(f1,"L%03d:\n", lbl1 = lbl++);
			oprType = strdup("a");
            ex(p->opr.op[0]);
			oprType = NULL;
            fprintf(f1,"\tjz\tL%03d\n", lbl2 = lbl++);
            ex(p->opr.op[1]);
            fprintf(f1,"\tjmp\tL%03d\n", lbl1);
            fprintf(f1,"L%03d:\n", lbl2);
            break;
			
		//********************DO WHILE*****************************************************************************	
			
		case DO:
					fprintf( f1, "L%03d:\n", lbl1 = lbl++);
					ex(p->opr.op[0]);
					oprType = strdup("a");
                    ex(p->opr.op[1]);
					oprType = NULL;
					fprintf( f1, "\t jnz\tL%03d\n", lbl1);
		break;	
			
		//********************IF*****************************************************************************	
        case IF:
		   oprType = strdup("a");
           ex(p->opr.op[0]);
		   oprType=NULL;
            if (p->opr.nops > 2) {
                /* if else */
                fprintf(f1,"\tjz\tL%03d\n", lbl1 = lbl++);
                ex(p->opr.op[1]);
                fprintf(f1,"\tjmp\tL%03d\n", lbl2 = lbl++);
                fprintf(f1,"L%03d:\n", lbl1);
                ex(p->opr.op[2]);
                fprintf(f1,"L%03d:\n", lbl2);
            } else {
                /* if */
                fprintf(f1,"\tjz\tL%03d\n", lbl1 = lbl++);
                ex(p->opr.op[1]);
                fprintf(f1,"L%03d:\n", lbl1);
            }
            break;
			
	//********************************PRINT*******************************************************	
		case PRINT:  
			oprType="a";		
            ex(p->opr.op[0]);
			fprintf( f1, "\t print R%01d\n",last-1);
			oprType = NULL;
            break;
			
	//*********************************FOR**********************************************************
		case FOR:
	    
			ex(p->opr.op[0]);
		
			fprintf( f1, "L%03d:\n", lbl1 = lbl++);
			ex(p->opr.op[1]);
		
			fprintf( f1, "\t jnz\tL%03d\n", lbl2 = lbl++);
			ex(p->opr.op[3]);
		
			ex(p->opr.op[2]);
		
			fprintf( f1, "\t jmp\tL%03d\n", lbl1);
			fprintf( f1, "L%03d:\n", lbl2); 
			oprType = NULL;
	 
			
		break;
	 //***********************************ASSIGN*******************************************************		
		case ASSIGN:
			leftType = p->opr.op[0]->id.type;
			oprType = strdup("a");
			permit = p->opr.op[0]->id.per;
			struct SymTableData * data= find(p->opr.op[0]->id.index);
			int init=(int)data->symInit;
			if(permit == undeclared) 
			{
				yyerrorvar("Error: %s is not declared",p->opr.op[0]->id.name);
				oprType = NULL;
				break;
			}
			else if(permit == Constant && init == 1)
			{
				fprintf( f1, "Error: %s must be a modifiable expression \n", p->opr.op[0]->id.name);
				oprType = NULL;
				break;
			}
			else if(permit == OutOfScope) 
			{
				yyerrorvar("Error: %s is already defined",p->opr.op[0]->id.name);
				oprType = NULL;
				break;
			}
				
			setInit(p->opr.op[0]->id.index);
			ex(p->opr.op[1]);
			if(p->opr.op[1]->type == typeId) 
			{
				if(p->opr.op[1]->id.per != undeclared)
				{
					setUsed(p->opr.op[1]->id.index);
				}
                   
			}

			if((leftType == Integer || leftType == ConstIntger) && (rightType == Integer || rightType == ConstIntger )) {;}
			else if((leftType == Float || leftType == ConstFloat) && (rightType == Float || rightType == ConstFloat || rightType == Integer || rightType == ConstIntger)) {;}
			else if((leftType == Char || leftType == ConstChar) && (rightType == Char || rightType == ConstChar || rightType == Integer || rightType == ConstIntger)) {;}
			else if((leftType == String || leftType == ConstString) && (rightType == String || rightType == ConstString || rightType == Char || rightType == ConstChar)) {;}
			else if((leftType == Bool || leftType == ConstBool) && (rightType == Bool || rightType == ConstBool || rightType == Integer || rightType == ConstIntger)) {;}
			else if(leftType != rightType) 
			{
				
				yyerror("Error: incompatible types for assignment ");
				oprType = NULL;
				break;
			}
						
					
			fprintf( f1, "\t mov %s, R%01d \n", p->opr.op[0]->id.name, last - 1);
			last =0;
			counter =-1;
            oprType = NULL;
            leftType = -9;
            rightType = -9;
			break;
			
		//****************************************UMINUS******************************			
        case UMINUS:    
            ex(p->opr.op[0]);
            fprintf(f1, "\t neg R%01d, R%01d \n", last, counter);
			last++;
			counter++;
            break;
			
	   //******************************************DEFAULT******************************		
        default:
			oprType = strdup("a");
            if(p->opr.op[0]->type == typeId && p->opr.op[0]->id.per != undeclared)
			setUsed(p->opr.op[0]->id.index);
                    
			ex(p->opr.op[0]);
			
			i = counter;
			type1 = rightType;
			
			
			if(p->opr.oper != NOT && p->opr.oper != INCREMENT && p->opr.oper != DECREMENT) 
			{
                if(p->opr.op[1]->type == typeId && p->opr.op[1]->id.per != undeclared)
				{
					oprType = strdup("a");
					setUsed(p->opr.op[1]->id.index);
				}
                            
						
				ex(p->opr.op[1]);
				type2 = rightType;
					
			}
			j = counter;
            switch(p->opr.oper) 
			{
			    case PLUS:
					if((type1 == Integer || type1 == Float || type1 == ConstIntger || type1 == ConstFloat) && (type2 == Integer || type2 == Float || type2 == ConstIntger || type2 == ConstFloat)) 
					{
						fprintf( f1, "\t add R%01d, R%01d, R%01d \n", last, i, j);
						last ++;
						counter++;
					}
					else 
					{
						yyerror("Error: incompatible types for addition ");
					}
						oprType = NULL;
				break;
							
				case MINUS:
					if((type1 == Integer || type1 == Float || type1 == ConstIntger || type1 == ConstFloat) && (type2 == Integer || type2 == Float || type2 == ConstIntger || type2 == ConstFloat)) 
					{
						fprintf( f1, "\t sub R%01d, R%01d, R%01d \n", last, i, j);
						last ++;
						counter++;
					}
					else 
					{
						yyerror("Error: incompatible types for subtraction ");
								
					}
                    oprType = NULL;
				break;
							
				case MUL:
					if((type1 == Integer || type1 == Float || type1 == ConstIntger || type1 == ConstFloat) && (type2 == Integer || type2 ==  Float || type2 == ConstIntger || type2 == ConstFloat)) 
					{
						fprintf( f1, "\t mul R%01d, R%01d, R%01d \n", last, i, j);
						last ++;
						counter++;
					}
					else 
					{
						yyerror("Error: incompatible types for multiplication ");
						
					}
                    oprType = NULL;
				break;	
				case DIV:			
				if((type1 == Integer || type1 == Float || type1 == ConstIntger || type1 == ConstFloat) && (type2 == Integer || type2 == Float  || type2 == ConstIntger || type2 == ConstFloat)) {
					fprintf( f1, "\t div R%01d, R%01d, R%01d \n", last, i, j);
					last ++;
					counter++;
				}
				else 
				{
					
					yyerror("Error: incompatible types for division ");
				}
				oprType = NULL;
				break;
			case REM:
				if((type1 == Integer || type1 == Float || type1 == ConstIntger || type1 == ConstFloat) && (type2 == Integer || type2 == Float  || type2 == ConstIntger || type2 == ConstFloat)) {
					fprintf( f1, "\t rem R%01d, R%01d, R%01d \n", last, i, j);
					last ++;
					counter++;
				}
				else 
				{
					yyerror("Error: incompatible types for remainder ");
				}
				oprType = NULL;
				break;
			case POWER:
				if((type1 == Integer || type1 == Float || type1 == ConstIntger || type1 == ConstFloat) && (type2 == Integer || type2 == Float  || type2 == ConstIntger || type2 == ConstFloat)) {
					fprintf( f1, "\t power R%01d, R%01d, R%01d \n", last, i, j);
					last ++;
					counter++;
				}
				else 
				{
					yyerror("Error: incompatible types for power ");
				}
				oprType = NULL;
				break;
			case NOT:				
				if((type1 == Integer || type1 == Float || type1 == ConstIntger || type1 == ConstFloat) ) 
				{
					fprintf( f1, "\t not R%01d \n", last-1);
					last ++;
				}
				else 
				{
					yyerror("Error: incompatible types for not ");
				}
				oprType = NULL;				
				break;				
			case AND:				
				if((type1 == Integer || type1 == Float || type1 == ConstIntger || type1 == ConstFloat) && (type2 == Integer || type2 == Float  || type2 == ConstIntger || type2 == ConstFloat)) {
					fprintf( f1, "\t and R%01d, R%01d, R%01d \n", last, i, j);
					last ++;
					counter++;
				}
				else 
				{
					yyerror("Error: incompatible types for && ");
				}
				oprType = NULL;
				break;				
			case OR:
				if((type1 == Integer || type1 == Float || type1 == ConstIntger || type1 == ConstFloat) && (type2 == Integer || type2 == Float  || type2 == ConstIntger || type2 == ConstFloat)) {
					fprintf( f1, "\t or R%01d, R%01d, R%01d \n", last, i, j);
					last ++;
					counter++;
				}
				else 
				{
					yyerror("Error: incompatible operands types for ||");
					
				}
				oprType = NULL;
				break;
			
			case GREATER:
				rightType = Bool;
				if((type1 == Integer || type1 == Float || type1 == ConstIntger || type1 == ConstFloat) && (type2 == Integer || type2 == Float || type2 == ConstIntger || type2 == ConstFloat)){
					fprintf( f1, "\t JG R%01d, R%01d, R%01d \n",last, i, j);
					last ++;
					counter++;
				}
				else {
					yyerror("Error: incompatible operands types for >");
				}
				oprType = NULL;
				break;
			case LESS:
				rightType = Bool;
				if((type1 == Integer || type1 == Float || type1 == ConstIntger || type1 == ConstFloat) && (type2 == Integer || type2 == Float || type2 == ConstIntger || type2 == ConstFloat)){
					fprintf( f1, "\t JL R%01d, R%01d, R%01d \n",last, i, j);
					last ++;
					counter++;
				}
				else {
					yyerror("Error: incompatible operands types for <");
				}
				oprType = NULL;
				break;
			case GE:
				rightType = Bool;
				if((type1 ==Integer  || type1 == Float || type1 == ConstIntger || type1 == ConstFloat) && (type2 == Integer || type2 == Float || type2 == ConstIntger || type2 == ConstFloat)){
					fprintf( f1, "\t JGE R%01d, R%01d, R%01d \n",last, i, j);
					last ++;
					counter++;
				}
				else {
					yyerror("Error: incompatible operands types for >=");
				}
				oprType = NULL;
				break;
			case LE:
				rightType = Bool;
				if((type1 ==Integer  || type1 == Float || type1 == ConstIntger || type1 == ConstFloat) && (type2 == Integer || type2 == Float || type2 == ConstIntger || type2 == ConstFloat)){
					fprintf( f1, "\t JLE R%01d, R%01d, R%01d \n",last, i, j);
					last ++;
					counter++;
				}
				else {
					yyerror("Error: incompatible operands types for <=");
				}
				oprType = NULL;
				break;
			case NE:
				rightType = Bool;
				if((type1 == Integer || type1 == Float || type1 == ConstIntger || type1 == ConstFloat) && (type2 == Integer || type2 == Float || type2 == ConstIntger || type2 == ConstFloat)){}
				else if((type1 == Char || type1 == ConstChar) && (type2 == Char || type2 == ConstChar)){}
				else if((type1 == String || type1 == ConstString) && (type2 == String || type2 == ConstString)){}
				else if((type1 == Bool || type1 == ConstBool ) && (type2 == Bool || type2 ==ConstBool)){}
				else {
					yyerror("Error: incompatible operands types for !=");
					oprType = NULL;
					break;
				}
				fprintf( f1, "\t JNE R%01d, R%01d, R%01d \n",last, i, j);
				last ++;
				counter++;
				oprType = NULL;
				break;
			case EQ:
				rightType = Bool;
				if((type1 == Integer || type1 == Float || type1 == ConstIntger || type1 == ConstFloat) && (type2 == Integer || type2 == Float || type2 == ConstIntger || type2 == ConstFloat)){}
				else if((type1 == Char || type1 == ConstChar) && (type2 == Char || type2 == ConstChar)){}
				else if((type1 == String || type1 == ConstString) && (type2 == String || type2 == ConstString)){}
				else if((type1 == Bool || type1 == ConstBool ) && (type2 == Bool || type2 ==ConstBool)){}
				else 
				{
					yyerror("Error: incompatible operands types for ==");
					oprType = NULL;
					break;
				}
				fprintf( f1, "\t JEQ R%01d, R%01d, R%01d \n",last, i, j);
				last ++;
				counter++;
				oprType = NULL;
				break;
			case INCREMENT:
				if(type1 == Integer || type1 == Float) 
				{
					fprintf( f1, "\t inc R%01d \n", last-1);
					fprintf( f1, "\t mov %s, R%01d \n", p->opr.op[0]->id.name, last - 1);
				}
				else 
				{
					yyerror("Error: incompatible operands for increment");
				}
				oprType = NULL;
				break;
			case DECREMENT:
				if(type1 == Integer || type1 == Float) 
				{
					fprintf( f1, "\t dec R%01d \n", last-1);
					fprintf( f1, "\t mov %s, R%01d \n", p->opr.op[0]->id.name, last - 1);
				}
				else 
				{
					yyerror("Error: incompatible operands for decrement");
				}
				oprType = NULL;
				break;							
			case PEQUAL:				
				if((type1 == Integer || type1 == Float ) && (type2 == Integer || type2 == Float || type2 == ConstIntger || type2 == ConstFloat)) 
				{
					fprintf( f1, "\t add R%01d, R%01d, R%01d \n", last, i, j);
					last ++;
					counter++;
				}
				else 
				{
					yyerror("Error: incompatible operands for +=");
				}
				oprType = NULL;
				break;
			case MEQUAL:
				if((type1 == Integer || type1 == Float ) && (type2 == Integer || type2 == Float || type2 == ConstIntger || type2 == ConstFloat)) 
				{
					fprintf( f1, "\t sub R%01d, R%01d, R%01d \n", last, i, j);
					last ++;
					counter++;
				}
				else 
				{	
					yyerror("Error: incompatible operands for -=");
				}
				break;
			case MULEQUAL:
				if((type1 == Integer || type1 == Float ) && (type2 == Integer || type2 == Float || type2 == ConstIntger || type2 == ConstFloat)) 
				{
					fprintf( f1, "\t mul R%01d, R%01d, R%01d \n", last, i, j);
					last ++;
					counter++;
				}
				else 
				{
					yyerror("Error: incompatible operands for *=");
				}
				break;
			case DIVEQUAL:
				if((type1 == Integer || type1 == Float ) && (type2 == Integer || type2 == Float || type2 == ConstIntger || type2 == ConstFloat)) 
				{
					fprintf( f1, "\t div R%01d, R%01d, R%01d \n", last, i, j);
					last ++;
					counter++;
				}
				else 
				{
					yyerror("Error: incompatible operands for /=");
				}
				break;    
			}
		}
	}
    return 0;
}
	

	
