#include<stdio.h>
void main()
{
	int a[10],i,key;
	int found=0;
	int low,high,mid;
	printf("enter 10 numbers:\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("enter number to search:");
	scanf("%d",&key);
	printf("\n---linear search---\n");
	found=0;
	for(i=0;i<10;i++)
	{
		if(a[i]==key)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("number found at position=%d\n",i+1);
		
	}
	else{
		  printf("number not found\n");
		  
	}
	printf("\n---binary search---\n");
	found=0;
	low=0;
	high=9;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==key)
		{
			found=1;
			break;
			
		}
		else if(key>a[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	if(found==1)
	{
		printf("number found at postion=%d\n",mid+1);
		
	}
	else
	{
	  printf("number not found");
	}
}
