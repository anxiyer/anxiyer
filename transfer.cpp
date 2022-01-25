//由于规则五元组的组成较复杂，所以利用此文件进行进制转换及数字提取 

long dianfen(char *str)  //此函数用于将点分十进制转为普通的十进制 
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
	//将点分十进IP的ip地址转化成十进制数字地址，
	//只要将对应数字分别乘以2^24，2^16，2^8 ，2^0，
	//最后相加即可
	num = n[0]*16777216 + n[1]*65536 + n[2]*256 + n[3];
	return num;  
}


int* dkrange(char *str)  //此函数用于提取端口范围 
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


 
