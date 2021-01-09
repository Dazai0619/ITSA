#include <stdio.h>

int main(){
    int num ,pow;
    scanf("%d", &num);
    while(scanf("%d",&num)==1){
        for (int a=2;num>=a;a++){
            pow=0;
            while (num%a==0){
                num/=a;
                pow++;
            }
            if (pow>0){
                printf("%d",a);
                if (pow>1)
                    printf("^%d",pow);
                if (num>1)
                    printf("*");
                else
                    printf("\n");
            }
        }
    }
    return 0;
}
