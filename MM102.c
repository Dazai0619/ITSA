#include<stdio.h>



int main(){
    int num[20000], sort, temp, first=0, i, j;
    while (scanf("%d", &sort)==1){
        if(sort==0)    break;
        if(first)
            printf("\n");
        else
            first=1;
        for(i=0; i<sort; i++)
            scanf("%d", &(num[i]));
        for(i=0; i<sort-1; i++){
            for(j=i+1; j<sort; j++){
                if(num[i]<num[j]){
                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }
        for(i=0; i<sort; i++)
            printf("%d %d\n", i+1, num[i]);
        }
        return 0;
    }
