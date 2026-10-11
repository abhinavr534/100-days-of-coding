#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> k;

    if (k <= 0 || k > n) {
        cout << "Invalid value of k";
        return 0;
    }

    // Sum of the first window
    long long windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    long long maxSum = windowSum;

    // Slide the window
    for (int i = k; i < n; i++) {
        windowSum += arr[i];       // Add new element
        windowSum -= arr[i - k];   // Remove old element

        maxSum = max(maxSum, windowSum);
    }

    cout << maxSum;

    return 0;
}