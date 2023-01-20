#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],b[100];
	scanf("%[^
]s",s);
	int i;
	for(i=0;s[i]!=NULL;i++)
	{
		if(s[i]>='A'&& s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
	}
	printf("%s",s);
}
