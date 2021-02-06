#include <stdio.h> 

int triangular(int x); 

int main() { 
	  int x; 
	    printf("Enter an integer: "); 
	      scanf("%d", &x); 

	        if(x%10>3 || x==11 || x==12 || x==13) { 
			    printf("\n%d is the %dth triangular number\n", 
					                triangular(x), x); 
			      } 
		  else { 
switch(x%10) { 
case 1: 
printf("\n%d is the %dst triangular number\n", 
									                    triangular(x), x); 
break; 
case 2: 
printf("\n%d is the %dnd triangular number\n", 
											                    triangular(x), x); 
								            break; 

case 3: 
								            printf("\n%d is the %drd triangular number\n", 

									    triangular(x), x); 
								            break; 
			       } 
			        } 
printf("You entered: %d\n", x); 
		      return 0; 
} 

int triangular(int a) {     
	 /* the nth triangular number is 1+2+3+ ... +n */ 

	 int x = (a * (a + 1)) / 2; 
	  return x; 
} 
