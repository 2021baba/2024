//19.switch���
 #include<stdio.h>
 int main()
 {
 	int day =0; 
 	scanf("%d",&day);
 	switch (day)//switch()�����ڱ���Ϊ����int 
 	{
 	case 1://1,2,3,4,5,6,7ֻ��Ϊ���� 
	 	printf("����һ\n");//����breakһֱ���� ����ӡ����һ���� 
	 	break; 
	case 2:
	 	printf("���ڶ�\n");
	 	break;
	case 3:
	 	printf("������\n");
	 	break;
	case 4:
	 	printf("������\n");
	 	break;
	case 5:
	 	printf("������\n");
	 	break;
	case 6:
	 	printf("������\n");
	 	break;
	case 7:
	 	printf("������\n");
	 	break;
	default://����case�е�������default 
		printf("�������");
		break;
	
	/*
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:    //����breakһֱ���� 
	 	printf("������\n");
	 	break;
	case 6:
	case 7:
	 	printf("��Ϣ��\n");
	 	break;
	 */
	 //��һ��ÿһ��case��Ҫ��break
	  
 	}
	 
	 
	 return 0;
 	
  } 
