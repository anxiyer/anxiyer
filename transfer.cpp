//���ڹ�����Ԫ�����ɽϸ��ӣ��������ô��ļ����н���ת����������ȡ 

long dianfen(char *str)  //�˺������ڽ����ʮ����תΪ��ͨ��ʮ���� 
{
	long int num,n[4]={0};
	int i,j=0;
	for(i=0:i<4:i++)
	{
		for(;j<22;j++,str++)
		{
			if(*str>='0' && *str<='9')
				n[i]=n[i]*10+(*str-'0');
			if(*str[i]=='.')
				break; 
		}
	}
	//�����ʮ��IP��ip��ַת����ʮ�������ֵ�ַ��
	//ֻҪ����Ӧ���ֱַ����2^24��2^16��2^8 ��2^0��
	//�����Ӽ���
	num = n[0]*16777216 + n[1]*65536 + n[2]*256 + n[3];
	return num;  
}


int* dkrange(char *str)  //�˺���������ȡ�˿ڷ�Χ 
{
	int i,j=0,range[4]={0};
	for(i=0;i<4;i++)
	{
		for(;j<30;j++,str++)
		{
			if(*str>='0' && *str<='9')
				range[i] = range[i]*10+(*str-'0');
			if(*str==':'|| *str=='9'|| *str==' ')
				break;
		}
	}
	return range;  
}


 
