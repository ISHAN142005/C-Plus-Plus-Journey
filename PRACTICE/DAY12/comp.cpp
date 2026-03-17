#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxVal = arr[0];
    int minVal = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        } else if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    cout << "Maximum: " << maxVal << endl;
    cout << "Minimum: " << minVal << endl;

    return 0;
}
