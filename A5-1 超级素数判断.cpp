#include <stdio.h>
int judge(int n)
{
	 if (n <= 1) return 0; // 0和1不是素数
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}

int main() {
    long long num= 0;
    scanf("%lld", &num);

	if (!judge(num)) 
	{
        printf("No");
    } 
	else 
	{
    	while (num > 9) {
        long long temp=num%10; 
		num/=10;       // 去掉最低位
        if(!judge(num)) 
        {	
			printf("No");
        	break;
    	}
	}
	 printf("Yes\n");
    }



    return 0;
}
