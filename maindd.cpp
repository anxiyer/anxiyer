//����ִ���ļ� 
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
	int cnt;     //cntΪ������ 
	
	for(int i=0;i<9191;i++)
	{
		cnt = 0;
		data = read_data();   //��ȡһ�����ݰ� 
		for(int j=0;j<919;j++)
		{
			cnt++;
			rule = read_data();   //��ȡһ������
			ip1 = dianfen(rule);   //��ip��ַ�ĵ��ʮ����ת��ʮ����
			ip2 = dianfen(rule+1);
			*dkr = dkrange(rule+2);  //��ȡ�˿ڷ�Χ
			//��ʼ�ж� 
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
