//���ļ�����Ϊ�������ݼ���һ�����ݰ�(dataacl.txt)�����ڶ����ʹ�ļ����λ�ú���һ�����ݰ���λ
#include <stdio.h>
long int* read_data()
{
	FILE *fp;
	fp = fopen("dataacl.txt","r"); //�����ݰ��ļ� 
	long int *sp;
	long str[5]={0};  //�����ݰ�����һ������str�У�������ָ��spָ������� 
	sp=str;
	char sstr[15];
	int i,j;
	for(j=0;j<5;j++)
	{
		for(i=0;i<15;i++)  //��ȡ���ݰ������ַ�һ��һ����ȡ 
		{
			sstr[i] = fgetc(fp);
			fseek(fp,sizeof(char),1);
			if(sstr[i]==9)
				break;
		}
		for(i=0;i<15&&sstr[i]!=9;i++)
		{
			str[j] = str[j]*10 + (sstr[i]-'0');//����ȡ�������ݰ��ַ���ת��Ϊһ�����֣��洢��str�� 
		}
		
	}
	return sp;
}
