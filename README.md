Compilers Project / Commands to run :-
---------------------------------------

flex project.l

bison -dy project.y

gcc LinkedList.c comp.c lex.yy.c y.tab.c -o project.exe

project
