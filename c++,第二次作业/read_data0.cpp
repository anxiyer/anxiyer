//此文件作用为读入数据集的一个数据包(dataacl.txt)，并在读完后使文件标记位置后移一个数据包单位
#include <stdio.h>

long long* read_data(FILE *fp,long long *str)
{
	char sstr[20];
	int i,j;
	for(j=0;j<5;j++)
	{
		for(i=0;i<20;i++)  //读取数据包，按字符一个一个读取 
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
				*(str+j) = *(str+j) * 10 + (sstr[i]-48);//将读取到的数据包字符串转化为一个数字，存储在str中 
		}
	}
	
	return str;
}
