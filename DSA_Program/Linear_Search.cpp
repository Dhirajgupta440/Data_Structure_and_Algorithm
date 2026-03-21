#include <iostream>
using namespace std;

int main() {
    int n, i, key;

    cout << "Enter the number of elements: ";
    cin >> n;

    int array[n];

    cout << "Enter the elements:\n";
    for(i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    for(i = 0; i < n; i++) {
        if(array[i] == key) {
            cout << key << " is present at index " << i << endl;
            return 0;
        }
    }

    cout << "Element not found." << endl;

    return 0;
}