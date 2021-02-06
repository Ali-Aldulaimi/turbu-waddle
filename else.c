#include <stdio.h> 

int main(int argc, char *argv[]){ 
	  int a; 
/* if & else staitment */
printf("Input an integer and push return:\n"); 
scanf("%d", &a); 

if(a%2==0 && a<0)  { 
printf("%d is even and less than zero.\n", a); 
			      } 
else if (a%2!=0 && a<0) { 
printf("%d is odd and less than zero.\n", a); 
			        } 
else if (a%2==0 && a>0) { 
printf("%d is even and greater than zero.\n", a); 
				  } 
else if (a%2!=0 && a>0) { 
printf("%d is odd and greater than zero.\n", a); 
				    } 
else { 
printf("You entered zero.\n"); 
				      } 

return 0; 
} 
