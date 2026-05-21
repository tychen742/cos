#include <stdio.h>          // header file library: I/O
                            // blank line ignored
int main()                  // function header
{                           // function body
    printf("hello world! \n\n\n");   // printf() is a function

printf("### line by line explanation ### \n");
printf("#include <stdio.h>    	// include header (\"h\") library file: standard I/O \n"
       "			// blank line ignored \n" );
printf("int main()             	// function header: data type is \"int\" and main is the function name \n"
    "{                    	// \"{\" begins the function body \n"
    "   printf(\"hello world\");	// \"printf\" is a built-in function \n"
    "				// \";\" means the end of a statement \n"
    "   return 0;		// \"return\" sends something back and ends the function \n"
    "}			// \"}\" is the end of the function body \n\n\n");


printf("### note: ###\n");
printf("to build: 	gcc -o hello hello.c  	// produce executable \"hello\" from C code \"hello.c\" \n"
	"					// \"-o\" means output \n") ;
printf("to run: 	./hello 		// prefix \"./\" to program name \n");

    return 0;               // ";" means end of statement
}                           // {} body of statement
                            // return ends the function
