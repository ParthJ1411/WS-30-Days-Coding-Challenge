#include<iostream>
#include<limits.h>

using namespace std;

void findingEle(int arr[],int size)
{
    int min = INT_MIN;
    int max = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]>min){
            min = arr[i];
        }
        else if(arr[i]<max){
            max = arr[i];
        }
    }
    cout<<"Min number from array is : "<<max<<" & max number from array is "<<min;
}

int main()
{
    int arr[] = {1,6,45,61,74,63,28};
    int size = sizeof(arr)/sizeof(arr[0]);
    findingEle(arr,size);
}
