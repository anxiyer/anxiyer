### Hi there 👋

//此文件作用为读入数据集的一个数据包，并在读完后使文件标记位置后移一个数据包单位
#include <stdio.h>
long int* read_data()
{
	FILE *fp;
	fp = fopen("dataacl1.1","r");
	long int *sp;
	long str[5]={0};
	sp=str;
	char *sstr[15];
	int i,j;
	for(j=0;j<5;j++)
	{
		for(i=0;i<15;i++)
		{
			*sstr[i] = fgetc(fp);
			fseek(fp,sizeof(char),1);
			if(*sstr[i]==' ')
				break;
		}
		for(i=0;i<15&&*sstr[i]!=' ';i++)
		{
			str[j] = str[j]*10 + (*sstr[i]-'0');
		}
		
	}
	return sp;
}

<!--
**anxiyer/anxiyer** is a ✨ _special_ ✨ repository because its `README.md` (this file) appears on your GitHub profile.

Here are some ideas to get you started:

- 🔭 I’m currently working on ...
- 🌱 I’m currently learning ...
- 👯 I’m looking to collaborate on ...
- 🤔 I’m looking for help with ...
- 💬 Ask me about ...
- 📫 How to reach me: ...
- 😄 Pronouns: ...
- ⚡ Fun fact: ...
-->
