#include <stdio.h>
#include <stdlib.h>



int is_prime(int);

int main(){
	int number;
	scanf("%d",&number);
	while (number!=0){
        int count = 0;
        for(int i = 2;i<number;i++)
            if(is_prime(i))
                count++;
        printf("%d\n",count);
        scanf("%d",&number);
    }
    return 0;
}

int is_prime(int num){
	if(num==1)
		return 0;
    else{
		for(int i=2;i<num;i++){
			if(num%i==0)
				return 0;
		}
	}
	return 1;
}
