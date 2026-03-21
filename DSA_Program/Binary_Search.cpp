#include <iostream>
using namespace std;

int main() {
    int n, i, l, h, mid, key;

    cout << "Enter the number of elements: ";
    cin >> n;

    int array[n]; // (Note: works in GCC, but vector is better in standard C++)

    cout << "Enter the elements in sorted sequence:\n";
    for(i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    l = 0;
    h = n - 1;

    while(l <= h) {
        mid = (l + h) / 2;

        if(key == array[mid]) {
            cout << key << " is present at index " << mid << endl;
            return 0;
        }
        else if(key < array[mid]) {
            h = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    cout << "Element not found." << endl;

    return 0;
}