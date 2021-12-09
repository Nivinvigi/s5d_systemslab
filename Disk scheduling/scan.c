#include<stdio.h>
#include<stdlib.h>
void main()
{
	int head,ptr,a[5],no;
	char dir;
	printf("Enter the no of sequence needed(maximum:200)\n");
	scanf("%d",&no);
	printf("Enter the sequence:\n);
	for(int i=0;i<no;i++)
		scanf("%d",&a[i]);	
	printf("Enter the head:\n);
	scanf("%d",&head);
	printf("Enter the direction\n(l-left/r-right):\n");
	scanf("%c",&dir);
	if(dir==l)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]<head)
