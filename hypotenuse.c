#include<stdio.h>
#include<math.h>
int main(){
double a;
double b;
printf("this program calculate the hypotenuse of tringle.\n");
printf("insert the first number:\n");
scanf("%lf",&a);
printf("insert the second number:\n");
scanf("%lf",&b);
printf("%lf %lf",a,b);
double c = sqrtf((a*a)+(b*b));
printf("the hypotenuse is %lf\n",c);
return 0;
}
