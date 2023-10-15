#include<stdio.h>
void display(int arr[],int size){
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[100]={0,1,2,3,4,5,6,7};
    display(arr,8);
}






