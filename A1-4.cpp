#include <stdio.h>

int main() {
    int year, month,day,days=0;
    int monthday[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d %d %d", &year, &month,&day);
	if(month>2)
	{
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
            monthday[1] = 29;  
	}
	int i;
	for(i=0;i<month-1;i++)
	{
	days += monthday[i]; 
	}
	days += day;
    printf("%d\n",days);
    return 0;
}
