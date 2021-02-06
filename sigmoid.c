#include<math.h>
#include<stdio.h>
#include "sigmoid.h"
float sigmoid (float x){
float a;
a = 1/(1+expf(-x));
return a;	
}
float sigmoid_derivative(float y){
float b;
b = y*(1-y);
return b;
}
