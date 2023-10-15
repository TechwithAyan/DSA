#include<stdio.h>
void display(int arr[],int size){
    for(int i=0;i<size;i++)
    {
    printf("%d\n",arr[i]);
    }
    printf("\n");
}
void inddeletion(int arr[],int size,int element,int index)
{
    for(int i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
}
int main()
{
    int arr[100]={1,2,3,4,5,6,7};
    int size=7,element=5,index=4;
    display(arr,size);
    inddeletion(arr,size,element,index);
    size-=1;
    display(arr,size);
    return 0;
}
