//���ڹ�����Ԫ�����ɽϸ��ӣ��������ô��ļ����н���ת����������ȡ 

long long dianfen0(char str[4][25])  //�˺������ڽ�Դip�ĵ��ʮ����תΪ��ͨ��ʮ���� 
{

	long long num,n[4]={0};
	int i,j=0;
	for(i=0;i<4;i++)
	{
		for(;j<25;j++)
		{
			if(str[0][j] >= '0' && str[0][j] <= '9')
				n[i] = n[i]*10 + (str[0][j]-'0');
			if(str[0][j] == 9 || str[0][j] == '.' || str[0][j] == '/')
				break;
		}
	}
	
	//�����ʮ��IP��ip��ַת����ʮ�������ֵ�ַ��
	//ֻҪ����Ӧ���ֱַ����2^24��2^16��2^8 ��2^0��
	//�����Ӽ���
	num = n[0]*16777216 + n[1]*65536 + n[2]*256 + n[3];
	return num;  
}

long long dianfen1(char str[4][25])  //�˺������ڽ�Ŀ��ip�ĵ��ʮ����תΪ��ͨ��ʮ���� 
{

	long long num,n[4]={0};
	int i,j=0;
	for(i=0;i<4;i++)
	{
		for(;j<25;j++)
		{
			if(str[1][j] >= '0' && str[1][j] <= '9')
				n[i] = n[i]*10 + (str[1][j]-'0');
			if(str[1][j] == 9 || str[1][j] == '.' || str[1][j] == '/')
				break;
		}
	}
	
	num = n[0]*16777216 + n[1]*65536 + n[2]*256 + n[3];
	return num;  
}


int* dkrange(char str[4][25],int *range)  //�˺���������ȡ�˿ڷ�Χ 
{
	int i,j=0;
	for(i=0;i<4;i++)
	{
		for(;j<30;j++)
		{
			if(str[2][j]>='0' && str[2][j]<='9')
				*(range+i) = *(range+i)*10+(str[2][j]-'0');
			if(str[2][j]==':'|| str[2][j]=='9'|| str[2][j]==' ')
				break;
		}
	}
	
	return range;  
}

int sixteen(char str[4][25])   //�˺�������ת��ʮ������ 
{
	int a;
	a = (str[3][2]-'0') * 16 + (str[3][3]-'0');
	return a;
}


 
