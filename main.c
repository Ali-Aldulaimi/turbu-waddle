#include <stdio.h>
#include <math.h>
#include "sigmoid.h"
int main (char args,char * argsv[]){
float i;
for(i=-20;i<20;i+=0.2){

printf("%f\n", sigmoid(i));
}

for (i=-20;i<20;i+=0.2){
float y;
y = sigmoid(i);
 
printf("%f\n",sigmoid_derivative(y));
}
return 0;
}
