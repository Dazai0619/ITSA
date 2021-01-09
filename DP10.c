#include <stdio.h>

int main(){
    long long num[50]={0};
    int n, ncase;
    num[1]=num[2]=1;
    for(int i=3; i<=45; i++)
        num[i]=num[i-2]+num[i-1];
    scanf("%d", &ncase);
    while(ncase--){
        scanf("%d", &n);
        printf("%lld\n", num[n]);
    }
    return 0;
}
