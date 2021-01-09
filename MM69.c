#include <stdio.h>

int main(){
    float h,w;
    scanf("%f %f",&h,&w);
    h = h/100;
    float bmi;
    bmi = w/(h*h);
    printf("%.1f ",bmi);
    if(bmi < 18.5)
        printf("underweight\n");
    else if(bmi < 24)
        printf("normal\n");
    else if(bmi < 27)
        printf("overweight\n");
    else if(bmi < 30)
        printf("mild obesity\n");
    else if(bmi < 35)
        printf("moderate obesity\n");
    else
        printf("severe obesity\n");
}
