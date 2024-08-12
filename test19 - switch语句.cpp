//19.switch语句
 #include<stdio.h>
 int main()
 {
 	int day =0; 
 	scanf("%d",&day);
 	switch (day)//switch()括号内必须为整型int 
 	{
 	case 1://1,2,3,4,5,6,7只能为常量 
	 	printf("星期一\n");//不加break一直向下 ，打印星期一到天 
	 	break; 
	case 2:
	 	printf("星期二\n");
	 	break;
	case 3:
	 	printf("星期三\n");
	 	break;
	case 4:
	 	printf("星期四\n");
	 	break;
	case 5:
	 	printf("星期五\n");
	 	break;
	case 6:
	 	printf("星期六\n");
	 	break;
	case 7:
	 	printf("星期天\n");
	 	break;
	default://不在case中的数归于default 
		printf("输入错误");
		break;
	
	/*
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:    //不加break一直向下 
	 	printf("工作日\n");
	 	break;
	case 6:
	case 7:
	 	printf("休息日\n");
	 	break;
	 */
	 //不一定每一个case都要加break
	  
 	}
	 
	 
	 return 0;
 	
  } 
