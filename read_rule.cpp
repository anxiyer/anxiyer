//此文件作用为读入一个规则，将其存储在一个二维字符数组中 
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
	    	str[j][i] = fgetc(fp); //按字符一个一个地读取 
	    	fseek(fp,sizeof(char),1);
	    	if(str[i][j]==9) //碰到制表符停止读取 
				break;
			if(i==9 && j==4) //读到最后一的字符时停止 
				break;
		}
	}
	return *str; 
} 

