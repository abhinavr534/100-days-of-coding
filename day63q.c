#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> k;

    queue<int> q; // stores indices of negative elements

    for (int i = 0; i < n; i++) {

        // Remove indices that are outside the current window
        while (!q.empty() && q.front() <= i - k) {
            q.pop();
        }

        // Add current element if it is negative
        if (arr[i] < 0) {
            q.push(i);
        }

        // Window of size k is formed
        if (i >= k - 1) {
            if (!q.empty())
                cout << arr[q.front()];
            else
                cout << 0;

            if (i != n - 1)
                cout << " ";
        }
    }

    return 0;
}