//20.while语句
/*while(表达式)
	循环语句
*/
#include<stdio.h>
int main ()
{
	int i=1;
	while(i<=10)
	{
		if (i==4)
			continue;//continue是跳过本次循环continue后的代码，单次跳过 
			//看是否进行下一次循环 
		if (i==5)
			break;//在while循环中break永久跳出循环 
		
		printf("%d\n",i);
		i++;
	}
	return 0;
}
