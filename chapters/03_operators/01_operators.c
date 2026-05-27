#include <stdio.h>
#include <stdbool.h>    //bool type not a built in type in C, but can be used by including the stdbool.h header file

int main()
{
    printf("##### 1/5. Arithmetic Operators #####\n");
    printf("### + - * / %% ++ -- ###\n");
    printf("num1 = 5, num2 = 3");
    int num1 = 5;
    int num2 = 3;

    int sum = num1 + num2;
    printf("num1 + num2 = %i \n", sum);
    printf("num1 + num2 = %i \n", num1 + num2);

    printf("%% - modulus, return the division remainder:\n");
    printf("num1 %% num2 = %i \n\n", num1 % num2);

    printf("-- - decrement, decrease the value of a variable by 1:\n");
    printf("num1 is %i before num1--\n", num1);
    printf("num1-- evaluates to %i\n", num1--);
    printf("num1 is %i after num1--\n", num1);
    printf("--num1 evaluates to %i\n", --num1);
    printf("num1 is %i after --num1\n\n", num1);

    printf("##### 2/5. Assignment Operators #####\n");
    printf("### = += -= *= ... ###\n\n");
    
    printf("##### 3/5. Comparison Operators #####\n");
    printf("### == != > < >= < ###\n");
    
    printf("### boolean #####\n");
    printf("include: #include <stdbool.h>\n");
    printf("is 10 > 9 true? (1: true; 0: false):    %d \n", 10 > 9);
    printf(" 10 > 9 is an expression and will evaluate to true or false\n\n");

    printf("##### 4/5. Logical Operators #####\n");
    printf("### && || ! ###\n\n");

// change a, b to num1 and num2 and find out:
    printf("##### 5/5. Bitwise Operators #####\n");
    printf("### &, |, ^ ###\n\n");
    int a = 5;
    int b = 3;
    printf("a = 5 = 0101 \n");
    printf("b = 3 = 0011 \n");
    printf("a & b = %d \n", a & b);
}
