#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],b[100];
	int j,t;
	scanf("%[^
]s",&s);
	int i,l=0;
	for(i=0;s[i]!=NULL;i++)
	{
		l++;
	}
	i=0;
	j=l-1;
	while(i<j)
	{
		t=s[j];
		s[j]=s[i];
		s[i]=t;
		i++;
		j--;
	}
	printf("%s",s);
}