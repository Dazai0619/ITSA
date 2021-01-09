#include <stdio.h>

#define MAX 1024
#define MIN -1

int main(){
    int num, max=MIN, min=MAX;
    for(int i=0; i<10; i++){
        scanf("%d", &num);
        if(num>max)
            max=num;
        if(num<min)
            min=num;
    }
    printf("Largest number = %d\n", max);
    printf("Smallest number = %d\n", min);
    return 0;
}
