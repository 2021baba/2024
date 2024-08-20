#include <stdio.h>

int judge(int n) {
    if (n <= 1) return 0; // 0和1不是素数
    for(int i = 2; i * i <= n; i++) { // 修改1: 优化循环条件，只需检查到sqrt(n)
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int get_num(int num) {
    
     if (!judge(num)) {
        return 0;
    }
    while (num > 9) {   // 修改3: 当num减到小于10时结束循环，不需要再判断
        num /= 10;      // 保持原来的去掉最低位的逻辑
        if (!judge(num)) {  // 修改4: 如果去掉一位后的数不是素数，直接输出“No”并终止程序
            return 0;
        }
    }

    return 1;
}

int main()
{
	int n,sum=0;
	scanf("%d",&n);
	
	for(int i=2;i<=n;i++)
	{
		if (get_num (i))
		sum+=1;
	 } 
	 printf("%d",sum);
	 return 0;
}
