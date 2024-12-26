#include<stdio.h>
int main()
{
int n,Sum=0;
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
    scanf("%d",&arr[i]);
    if(arr[i]%2 ==0)
    {
      Sum+=arr[i];
    }
}
printf("Sum is: %d",Sum);
    return 0;
}