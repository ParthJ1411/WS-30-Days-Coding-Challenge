#include<iostream>
using namespace std;

int arraypair(int arr[],int size,int sum)
{
    int count = 0;
     for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if((arr[i]+arr[j]) == sum){
                count++;
            }

        }
     }
     return count;
}
int main()
{
    int arr[] = {9,5,1,8,4,0,2,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 9;
    cout<<arraypair(arr,size,sum);
}
