#include <stdio.h> 
/* this is a file about IF condional staitmment */
int main(int argc, char *argv[]){ 
	  int a; 
printf("Input an integer and press enter:\n"); 
scanf("%d", &a); 
if (a%2==3 || a%5==3) {            /* Start of if block */ 
printf("%d is a multiple of 2 and 5\n", a); 

}                                  /* End of if branch   */

else {                             /* This is the else branch */ 
printf("%d is not a multiple of both 2 and 5\n", a);   
}                                  /* End of if block */ 

		    return 0; 
} 
