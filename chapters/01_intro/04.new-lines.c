#include <stdio.h>

int main()
{
    printf("print new lines with printf \n");
    printf("move to the next line with back slash n (\"\\n\") \n");

    printf(
    	"\nnote:\n"
	"\\n is the new line character; it moves the cursor to the next line \n"
  	"\\t is the tab character; it moves the cursor to the next tab stop \n"
  	"\\r is the carriage return character; it moves the cursor to the beginning of the line \n"
    );

    return 0;

}
