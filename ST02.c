#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char ch[100];
    while(scanf("%s",ch)!=EOF){
        int len = strlen(ch);
        int ans=0;
        for(int i = 0; i<len;i++)
            ans = ans*26+ch[i]-'A'+1;
        printf("%d\n",ans);
    }
}
