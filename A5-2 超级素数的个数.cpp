#include <stdio.h>

int judge(int n) {
    if (n <= 1) return 0; // 0��1��������
    for(int i = 2; i * i <= n; i++) { // �޸�1: �Ż�ѭ��������ֻ���鵽sqrt(n)
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int get_num(int num) {
    
     if (!judge(num)) {
        return 0;
    }
    while (num > 9) {   // �޸�3: ��num����С��10ʱ����ѭ��������Ҫ���ж�
        num /= 10;      // ����ԭ����ȥ�����λ���߼�
        if (!judge(num)) {  // �޸�4: ���ȥ��һλ���������������ֱ�������No������ֹ����
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
