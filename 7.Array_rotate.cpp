#include <iostream>
using namespace std;

void rotate_array(int arr[], int n, int rotations) {
    rotations %= n;

    if (n == 0 || rotations == 0) {
        return;
    }
    int temp[n];
    for (int i = 0; i < n; ++i) {
        temp[(i + rotations) % n] = arr[i];
    }
    for (int i = 0; i < n; ++i) {
        arr[i] = temp[i];
    }
}

int main() {
   
    int array[8];
    cout << "Enter 8 Elements of the Array: ";
    for (int i = 0; i < 8; ++i) {
        cin >> array[i];
    }
    
    int n;
    cout << "Enter the number of rotations: ";
    cin >> n;

    rotate_array(array, 8, n);

    cout << "Array after Rotations:";
    for (int i = 0; i < 8; ++i) {
        cout << " " << array[i];
    }
    cout << endl;
    return 0;
}