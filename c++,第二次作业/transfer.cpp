//由于规则五元组的组成较复杂，所以利用此文件进行进制转换及数字提取 

long long dianfen0(char str[4][25])  //此函数用于将源ip的点分十进制转为普通的十进制 
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
	
	//将点分十进IP的ip地址转化成十进制数字地址，
	//只要将对应数字分别乘以2^24，2^16，2^8 ，2^0，
	//最后相加即可
	num = n[0]*16777216 + n[1]*65536 + n[2]*256 + n[3];
	return num;  
}

long long dianfen1(char str[4][25])  //此函数用于将目的ip的点分十进制转为普通的十进制 
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


int* dkrange(char str[4][25],int *range)  //此函数用于提取端口范围 
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

int sixteen(char str[4][25])   //此函数用于转化十六进制 
{
	int a;
	a = (str[3][2]-'0') * 16 + (str[3][3]-'0');
	return a;
}


 
