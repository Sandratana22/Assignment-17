#include <iostream> 
 
 using namespace std; 

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {10, 20, 30, 90, 70, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the value to search for: ";
    cin >> target;

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        cout << "Value found at index: " << result << endl;
    }

    return 0;
}
