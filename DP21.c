#include<stdio.h>
#define MAX 100


void initialize(int fib[]){
    fib[0] = 1;
    fib[1] = 1;

    for(int i = 2; i < MAX; i++){
        fib[i] += fib[i - 1];
        fib[i] += fib[i - 2];
    }
}

int main(){
    int fib[MAX] = { 0 };
    initialize(fib);
    int n;
    scanf("%d",&n);
    while(n--){
        int m;
        scanf("%d",&m);
        printf("%d\n", fib[m - 1]);
    }
}
