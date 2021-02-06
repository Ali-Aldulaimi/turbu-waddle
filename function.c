#include <stdio.h> 

int factorial(int x); 

int main(int argc, char *argv[]){ 
int a, b=1, temp; 

printf("Enter an integer: "); 
scanf("%d", &a); 

printf("\n%d factorial is %d\n\n", a, factorial(a)); 

printf("Enter another integer: "); 
scanf("%d", &a); 

temp = a; 

for( ; a>0 ; a--) { 
b*=a; 
				      } 

printf("\n%d factorial is %d\n", temp, b); 

return 0; 
} 

int factorial(int x) {          
	  /* n factorial, (or n!) is 1*2*3* ... *n */ 

if(x!=0) { 
return (x*factorial(x-1)); 
		        } 
else { 
return 1; 
			  } 
} 
