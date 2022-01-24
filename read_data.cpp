//此文件作用为读入数据集的一个数据包(dataacl.txt)，并在读完后使文件标记位置后移一个数据包单位
#include <stdio.h>
long int* read_data()
{
	FILE *fp;
	fp = fopen("dataacl.txt","r"); //打开数据包文件 
	long int *sp;
	long str[5]={0};  //将数据包存入一个数组str中，并引入指针sp指向此数组 
	sp=str;
	char sstr[15];
	int i,j;
	for(j=0;j<5;j++)
	{
		for(i=0;i<15;i++)  //读取数据包，按字符一个一个读取 
		{
			sstr[i] = fgetc(fp);
			fseek(fp,sizeof(char),1);
			if(sstr[i]==9)
				break;
		}
		for(i=0;i<15&&sstr[i]!=9;i++)
		{
			str[j] = str[j]*10 + (sstr[i]-'0');//将读取到的数据包字符串转化为一个数字，存储在str中 
		}
		
	}
	return sp;
}
