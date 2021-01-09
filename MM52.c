#include<stdio.h>

int main()
{
    long long int perfect[7] =
    {
        6, 28, 496,
        8128, 33550336,
        8589869056,137438691328
    };

    int n;
    scanf("%d",&n);


    for(int i = 0;i<7;i++)
        if(perfect[i]<n)
            printf("%d\n",perfect[i]);

}
