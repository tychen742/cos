#include <stdio.h>
#include <string.h>
int main()
{

    char hello[] = "hello world";

    for (int i = 0; i < sizeof(hello); i++)
    {
        printf(" %c \n", hello[i]);
    }
//    printf("%lu \n", sizeof(hello));
//    printf("%lu \n", strlen(hello));



    return 0;
}
