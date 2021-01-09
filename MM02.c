#include <stdio.h>




int main(){
    int n;
    scanf("%d",&n);
    int y[n],m[n],d[n];
    for(int i = 0; i < n; i++)
        scanf("%d %d %d",&y[i],&m[i],&d[i]);
    int ans[n];
    for(int i = 0; i < n; i++){
        if(m[i]==1||m[i]==2){
            m[i]+=12;
            y[i]--;
        }
        ans[i] = (d[i]+2*m[i]+3*(m[i]+1)/5+y[i]+y[i]/4-y[i]/100+y[i]/400) % 7;
    }
    for(int i = 0; i < n; i++)
        printf("%d\n",((ans[i]+2)%7));
    return 0;
}
