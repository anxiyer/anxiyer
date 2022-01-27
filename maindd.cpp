//程序执行文件 
#include <stdio.h>
#include "read_rule.cpp"
#include "read_data.cpp"
#include "transfer.cpp"
int main()
{
	long int *data;
	char *rule;
	long int ip1,ip2;
	int *dkr;
	int cnt;     //cnt为计数器 
	
	for(int i=0;i<9191;i++)
	{
		cnt = 0;
		data = read_data();   //读取一个数据包 
		for(int j=0;j<919;j++)
		{
			cnt++;
			rule = read_data();   //读取一个规则
			ip1 = dianfen(rule);   //将ip地址的点分十进制转成十进制
			ip2 = dianfen(rule+1);
			*dkr = dkrange(rule+2);  //提取端口范围
			//开始判断 
			if(*data==ip1 && *(data+1)== ip2 && *(data+2)>=*(dkr) && *(data+2)<=*(dkr+1)
			&& *(data+3)>=*(dkr+2) && *(data+3)<=*(dkr+3))
			{
				if(rule[4][8] == '0')
					break;
				else if(sixteen(rule+3) == *(data+3))
					break;
			}
		}
		if(cnt < 919)
			printf("%d\n",cnt);
		else
			printf("-1\n");
	}
	 
}
