//���ļ�����Ϊ����һ�����򣬽���洢��һ����ά�ַ������� 
#include <stdio.h>

char* read_rule(FILE *fp,char *str)
{
	int i,j; 
	for(i=0;i<4;i++)
	{
		for(j=0;j<25;j++)
		{
	    	fscanf(fp,"%c",str+i*25+j);  //���ַ�һ��һ���ض�ȡ

	    	if( *(str+i*25+j)==9 || *(str+i*25+j)=='\n') //�����Ʊ�����з�ֹͣ��ȡ 
				break;
		}
	}
	
	
	return str; 
} 

