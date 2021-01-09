#include<stdio.h>

int main()
{
    int perfect[7] ={
        6, 28, 496,
        8128, 33550336,
        8589869056,
        137438691328
    };

    int n;
    scanf("%d",&n);
    int ans[n];
    for(int i = 0 ; i < n ; i++)
        ans[i] = 0;
    for(int i = 0 ; i < n ; i++){
        int num;
        scanf("%d",&num);
        for(int j = 0; j<7; j++)
            if(num == perfect[j])
                ans[i] = 1;
    }
    for(int i = 0 ; i < n ; i++)
        if(ans[i]==1)
            printf("perfect\n");
        else
            printf("nonperfect\n");
}
