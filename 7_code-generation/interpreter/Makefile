a.out : lex.yy.c y.tab.c
	gcc -g lex.yy.c y.tab.c interp.c lib.c -m32 -o interpreter

lex.yy.c : interp.l
	flex interp.l

y.tab.c : interp.y
	yacc -d interp.y

clean:
	rm interpreter lex.yy.c y.tab.c y.tab.h
