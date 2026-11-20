#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6, key = 40;
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            cout << "Found at index: " << mid;
            return 0;
        } else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    cout << "Not found";
    return 0;
}
