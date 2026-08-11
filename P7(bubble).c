#include<stdio.h>
int main(){
 int a[30],i,j,k,temp;
  printf("Enter the number of elements in the array: ");
  scanf("%d",&j);
    printf("Enter the elements of the array: ");
    for(i=0;i<j;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<j-1;i++) 
    {
        for(k=i+1;k<j;k++)
        {
            if(a[i]>a[k])
            {
                temp=a[i];
                a[i]=a[k];
                a[k]=temp;
            }
        }
    }
    printf("The sorted array is: ");
    for(i=0;i<j;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
