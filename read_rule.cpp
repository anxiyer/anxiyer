//���ļ�����Ϊ����һ�����򣬽���洢��һ����ά�ַ������� 
#include <stdio.h>
char* read_rule()
{
	FILE *fp;
	fp = fopen("data_rule.txt","r");
	char str[25][4];   
	int i,j; 
	for(i=0;i<5;i++)
	{
		for(j=0;j<22;j++)
		{
	    	str[j][i] = fgetc(fp); //���ַ�һ��һ���ض�ȡ 
	    	fseek(fp,sizeof(char),1);
	    	if(str[i][j]==9) //�����Ʊ��ֹͣ��ȡ 
				break;
			if(i==9 && j==4) //�������һ���ַ�ʱֹͣ 
				break;
		}
	}
	return *str; 
} 

