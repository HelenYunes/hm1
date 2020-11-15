#include <stdio.h>
#include "myMath.h"

int main () {

    double x=0; 
    double answer1=0, answer2=0, answer3=0;
    printf("Please enter a real number: \n");
    scanf("%lf" , &x);

    int y = (int) x;
    if (x<0){
    y= (int) (x-0.5); }
    
    answer1 = sub(add(Exponent(y),Power(x,3)),2);  //Calculates func1
    answer2 = add(mul(x,3),mul(Power(x,2),2));   //Calculates func2
    answer3 = sub (div(mul(Power(x,3),4),5), mul(x,2)); //Calculates func3
    
    printf("The value of f(x)=e^x+x^3-2 at the point x=%0.4lf is: %0.4lf \n",x,answer1);
    printf("The value of f(x)=3x+2x^2 at the point x=%0.4lf is: %0.4lf \n",x,answer2);
    printf("The value of f(x)=((4x^3)/5)-2x at the point x=%0.4lf is: %0.4lf \n",x,answer3);
    return 0; }
