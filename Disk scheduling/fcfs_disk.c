#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[50];
	int n,pntr;
	printf("Enter the maximum number of sequence needed:\n");
	scanf("%d",&n);
	printf("Enter the sequence:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the head position:\n");
	scanf("%d",&pntr);
	int seek=0;
	int dif;
	printf("Seek sequence is:");
	for(int i=0;i<n;i++)
	{
		printf("->%d",a[i]);
		dif=abs(pntr-a[i]);
		seek+=dif;
		pntr=a[i];
	}
	printf("\nTotal seek operations is %d\n",seek);
}
