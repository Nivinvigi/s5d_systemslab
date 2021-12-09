#include<stdio.h>
#include<stdlib.h>
int main()
{
	int f[50],st,j,len,c,k;
	for(int i=0;i<50;++i)
		f[i]=0;
	x:
	printf("\nEnter the starting block and length of file:\n");
	scanf("%d%d",&st,&len);
	for(int j=st;j<(st+len);++j)
	{
		if(f[j]==0)
		{
			f[j]=1;
			printf("\n%d -> %d",j,f[j]);
		}
		else
		{
			printf("Block already allocated");
			break;
		}
	}
	if(j==(st+len))
		printf("\nFile allocated");
	printf("\n Do you want to enter more files?\n1-Yes / 2-No");
	scanf("%d",&c);
	if(c==1)
		goto x;
	else
		exit(0);
	return 0;
}
