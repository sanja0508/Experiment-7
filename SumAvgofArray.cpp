#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    int arr[size];
    int sum = 0;
    float average;

    cout << "Enter " << size << " elements  with spaces (no comma) :\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    average = (float)sum / size;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nNumber of elements in array: " << size << endl;
    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << average << endl;

    return 0;
}
