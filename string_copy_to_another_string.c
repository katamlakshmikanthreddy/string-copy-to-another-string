#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	int i,len;
	scanf("%[^\n]s",&str1);
	for(i=0;str1[i]!='\0';i++);
	len=i;
	for(i=0;i<len;i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("%s",str2);
}
