if [  -z $1 ]
    then
        echo -n "********** argument missing! **********\n"
else 
    if [ "$1" = "clean" ]
        then
            echo -n "********** clean **********\n"
            make clean
            cd interpreter
            make clean
            cd ..
    elif [ "$1" = "make" ]
        then
            echo -n "\n********** make **********\n"
            make
            cd interpreter
            make
            cd ..
    else
        echo -n "\n********** ./myCodeGen test/$1.c **********\n"
        ./myCodeGen test/$1.c
        mv a.asm test/$1.asm 
        echo -n "\n********** ./interpreter/interpreter test/$1.asm **********\n"
        ./interpreter/interpreter test/$1.asm
        rm ./test/$1.asm
    fi
fi

