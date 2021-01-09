#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int fac = 1;
    int ans[n];
    for(int i = 0;i<n;i++){
        int num;
        scanf("%d",&num);
        for(int j=1;j<=num;j++)
            fac*=j;
        ans[i] = fac;
        fac = 1;
    }

    for(int i = 0;i<n;i++)
        printf("%d\n",ans[i]);
}
