#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define MAX 10000




int gcd(int i, int j){
    if(i%j==0)
        return j;
    else
        return gcd(j, i%j);
}

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int max=-1, min=MAX, n, temp;
        scanf("%d", &n);
        while(n--){
            scanf("%d", &temp);
            if(max<temp)
                max=temp;
            if(min>temp)
                min=temp;
        }
        printf("%d\n", gcd(max, min));
    }
}
