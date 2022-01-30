//此文件作用为读入一个规则，将其存储在一个二维字符数组中 
#include <stdio.h>

char* read_rule(FILE *fp,char *str)
{
	int i,j; 
	for(i=0;i<4;i++)
	{
		for(j=0;j<25;j++)
		{
	    	fscanf(fp,"%c",str+i*25+j);  //按字符一个一个地读取

	    	if( *(str+i*25+j)==9 || *(str+i*25+j)=='\n') //碰到制表符或换行符停止读取 
				break;
		}
	}
	
	
	return str; 
} 

