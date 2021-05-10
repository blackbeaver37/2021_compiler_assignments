a.out : lex.yy.c y.tab.c
	gcc -g main.c lex.yy.c syntax.c y.tab.c print.c -m32

lex.yy.c : lex.l
	flex lex.l

y.tab.c : kim.y
	yacc -d kim.y

clean:
	rm a.out lex.yy.c y.tab.c y.tab.h
