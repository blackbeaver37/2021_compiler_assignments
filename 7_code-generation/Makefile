a.out : lex.yy.c y.tab.c
	gcc -g main.c lex.yy.c syntax.c semantic.c code_gen.c y.tab.c print_syn.c print_sem.c -m32 -o myCodeGen

lex.yy.c : myLex.l
	flex myLex.l

y.tab.c : myYacc.y
	yacc -d myYacc.y

clean:
	rm myCodeGen lex.yy.c y.tab.c y.tab.h
