//���ļ�����Ϊ�������ݼ���һ�����ݰ�(dataacl.txt)�����ڶ����ʹ�ļ����λ�ú���һ�����ݰ���λ
#include <stdio.h>

long long* read_data(FILE *fp,long long *str)
{
	char sstr[20];
	int i,j;
	for(j=0;j<5;j++)
	{
		for(i=0;i<20;i++)  //��ȡ���ݰ������ַ�һ��һ����ȡ 
		{
			fscanf(fp,"%c",&sstr[i]);
			
			if(sstr[i]==9 || sstr[i]=='\n')
				break;
		}
		
		for(i=0;;i++)
		{
			if(sstr[i]==9 || sstr[i]=='\n' || sstr[i]==' ')
				break;
			if(sstr[i]>='0' && sstr[i]<='9')
				*(str+j) = *(str+j) * 10 + (sstr[i]-48);//����ȡ�������ݰ��ַ���ת��Ϊһ�����֣��洢��str�� 
		}
	}
	
	return str;
}
