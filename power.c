#include "myMath.h" 
#define e 2.71828182

double Power(double x, int y){
    double answer=1;  
if (y==0) {
return answer;
}
if (y<0) {
    for (int i=y; i<0; i++) {
        answer *=x;
    }
    return 1/answer;
}
for (int i=0; i<y; i++) {
    answer = answer*x;
}
return answer;
}

double Exponent (int x){
 
return Power (e, x);
}
