#include <stdio.h> 

int main(int argc, char *argv[]) { 
	  int a,b,c; 
	    
printf("Input two integers"); 
printf(" with a space and push return:\n"); 
scanf("%d %d", &a, &b); 
		  
c = a + b; 
	    
if(a==b) { 
printf("%d is equal to %d.\n", a, b); 
printf("And their sum is even.\n"); 
				        } 
else if(a<b) { 
printf("%d is less than %d.\n", a, b); 
if(c%2==0) { 
printf("And their sum is even.\n"); 
						        } 
else { 
printf("And their sum is odd.\n"); 
							    } 
					    }
else { 
printf("%d is greater than %d.\n", a, b); 			        if(c%2==0) { 
printf("And their sum is even.\n"); 
						          } 
else { 
 printf("And their sum is odd.\n"); 
							      } 
					      } 
			  
			  return 0; 
} 
