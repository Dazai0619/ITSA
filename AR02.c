#include <stdio.h>
#define MAX 4096

int main(){
    int num[3];
    scanf("%d%d%d", &num[2], &num[1], &num[0]);
    int tmp[MAX], result[MAX], times, highest=0;
    scanf("%d", &times);
    tmp[0]=1;
    for(int i=0; i<times; i++){
        for(int j=0; j<=highest+2; j++)
            result[j]=0;
        for(int j=0; j<=highest; j++)
            for(int k=0; k<3; k++)
                result[j+k] += tmp[j]*num[k];
        for(int j=0; j<=highest+2; j++)
            tmp[j]=result[j];
        highest+=2;
    }
    for(int i=highest; i>=0; i--){
        printf("%d", result[i]);
        if(i)
            printf(" ");
    }
    printf("\n");

    return 0;
}
