#include<stdio.h>
#include<stdint.h>
int main(){
float r,x;
x=0.4;
r=0.9;
while (r<4){      /* when  I asign r <5 or more I get "Inf" values ?*/
for(uint32_t i=1;i<10000;i++){
x = r*x*(1-x);
 }               
printf("%f\n",x);
x=0.4;
r += 0.02;
}
return 0;
}

