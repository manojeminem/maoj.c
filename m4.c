#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],n;
 int i, j,temp,size;
printf("enter the size of the array:");
scanf("&d",&size");
printf("enter the element in array:");
for(i=0;i<size;i++)
{
scanf("&d",&a[i]);
}
for(i=0;i<size;i++)
{
   
for(j=i+1;j<size;j++)
     
    {
            if(arr[i] > arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nElements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
