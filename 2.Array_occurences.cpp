#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {1,6,8,7,9,5,4,9,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    int x ;
    cin>>x;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    
    }

    cout << "The Element has Occurred " << count<< " Times in the array." << endl;
    return count;
}
