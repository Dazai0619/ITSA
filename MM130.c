#include <stdio.h>
#include <stdlib.h>




int cmp ( const void *a , const void *b ){
    return *(int *)a - *(int *)b;
}

int main(){
    int a[100];
    int i = 0;
    while (scanf("%d",&a[i])!=EOF)
        i++;
    qsort(a,i,sizeof(a[0]),cmp);

    if(i%2!=0)
        printf("%d\n",a[(i-1)/2]);
    else{
        float mid = (a[(i/2)-1]+a[(i/2)])/2 ;
        printf("%f\n",mid);
    }
    return 0;
}
