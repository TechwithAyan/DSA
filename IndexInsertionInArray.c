//i is index of element in array
#include<stdio.h>
void display(int arr[], int size){
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
}
int indexinsertion(int arr[],int size, int element, int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
int main(){
    int arr[100]={0,1,2,3,4,6,7};
    int size=7,element=5,capacity=100,index=5;
    display(arr,size);
    indexinsertion(arr,size,element,capacity,index);
    size+=1;
    display(arr,size);
    return 0;
}

