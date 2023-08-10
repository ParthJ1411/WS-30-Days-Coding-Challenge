#include <iostream>
using namespace std;

int main()
{

	int n=8;
	int arr[8]={7,2,4,9,8,5,3,1};
	
	int temp;
	for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
}


int k;
cout<<"Enter the Element"<<endl;
cin>>k;
	cout<<arr[n-k];
	return 0;
}
