//程序执行文件 
#include <stdio.h>
#include "read_rule0.cpp"
#include "read_data0.cpp"
#include "transfer.cpp"
int main()
{
	FILE *fp,*ap;
	fp = fopen("dataacl.txt","r");    //打开数据包文件
	ap = fopen("data_rule0.txt","r");   //打开规则集文件
	
	char *ruled, rul[4][25];  ruled = &rul[0][0];
	long long ip1,ip2;
	
	int cnt;     //cnt为计数器 
	
	for(int i=0;i<200;i++)
	{
		long long *data, dat[5]={0};  data = dat;
		cnt = 0;
		
		data = read_data(fp,dat);   //读取一个数据包
		for(int k=0;k<5;k++)        //输出读到的数据包 
		{
			printf("%lld ",dat[k]);
		}
		
		for(int j=0;j<920;j++)
		{
			cnt++;
			int *dkr,range[4]={0}; dkr = range;
			char *ruled, rul[4][25]={' '}; ruled = *rul; //将一个规则存放在二维数组rul里 
			
			ip1 = 0;  ip2 = 0;            //初始化源、目的ip 
			ruled = read_rule(ap,*rul);   //读取一个规则

			ip1 = dianfen0(rul);          //将源、目的ip地址的点分十进制转成十进制
			ip2 = dianfen1(rul);
			dkr = dkrange(rul,range);    //提取端口范围

			//开始判断 
			if(*data==ip1 && *(data+1)==ip2 && *(data+2)>=*(dkr) && *(data+2)<=*(dkr+1)
			&& *(data+3)>=*(dkr+2) && *(data+3)<=*(dkr+3))
			{
				if(rul[3][8] == '0')
					break;
				else if(sixteen(rul) == *(data+3))
					break;
			}
		}
		if(cnt < 919)
			printf("%d\n",cnt);
		else
			printf("-1\n");
	}
	
	fclose(fp);
	fclose(ap);
	return 0;
	 
}
