#include<stdio.h>
int main()

{
	int arr[5],n=5,i,key;
     int l,h,m;
    
 printf("enter 5 no of element");
 for(i=0;i<5;i++)
 scanf("%d",&arr[i]);
  printf("enter element to search");
  scanf("%d",&key);
  l=0;
  h=n-1;
  
   while(l<=h){
   	m=(l+h)/2;
   	if(arr[m]==key){
	   
   	printf("elemet found at position%d",m);
   	break;
   }
       else if(key<arr[m])
       h=m-1;
       else 
       l=m+1;
       }
       if(l>h)
       printf("element not found");
       return 0;
   }
