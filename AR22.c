#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    scanf("%s",a);
    int len = strlen(a);
    char b[1000];
    for(int i = 0;i<len;i++)
        b[i] = a[i]-3;
    for(int i = 0;i<len;i++)
        printf("%c",b[i]);
    printf("\n");
    return 0;
}
