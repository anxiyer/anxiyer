//����ִ���ļ� 
#include <stdio.h>
#include "read_rule0.cpp"
#include "read_data0.cpp"
#include "transfer.cpp"
int main()
{
	FILE *fp,*ap;
	fp = fopen("dataacl.txt","r");    //�����ݰ��ļ�
	ap = fopen("data_rule0.txt","r");   //�򿪹����ļ�
	
	char *ruled, rul[4][25];  ruled = &rul[0][0];
	long long ip1,ip2;
	
	int cnt;     //cntΪ������ 
	
	for(int i=0;i<200;i++)
	{
		long long *data, dat[5]={0};  data = dat;
		cnt = 0;
		
		data = read_data(fp,dat);   //��ȡһ�����ݰ�
		for(int k=0;k<5;k++)        //������������ݰ� 
		{
			printf("%lld ",dat[k]);
		}
		
		for(int j=0;j<920;j++)
		{
			cnt++;
			int *dkr,range[4]={0}; dkr = range;
			char *ruled, rul[4][25]={' '}; ruled = *rul; //��һ���������ڶ�ά����rul�� 
			
			ip1 = 0;  ip2 = 0;            //��ʼ��Դ��Ŀ��ip 
			ruled = read_rule(ap,*rul);   //��ȡһ������

			ip1 = dianfen0(rul);          //��Դ��Ŀ��ip��ַ�ĵ��ʮ����ת��ʮ����
			ip2 = dianfen1(rul);
			dkr = dkrange(rul,range);    //��ȡ�˿ڷ�Χ

			//��ʼ�ж� 
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
