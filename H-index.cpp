
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int hIndex(vector<int>& citations) {
    sort(citations.begin(), citations.end());

    int n = citations.size();
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (citations[mid] == n - mid) {
            // Found a valid h-index, check if there is a higher one on the right
            return n - mid;
        } else if (citations[mid] < n - mid) {
            // The current mid is too small, search on the right side
            left = mid + 1;
        } else {
            // The current mid is too large, search on the left side
            right = mid - 1;
        }
    }

    // No valid h-index found, return the remaining papers (left)
    return n - left;
}

int main() {
    // Example usage:
    vector<int> citations = {3, 0, 6, 1, 5};
    cout << hIndex(citations) << endl;  // Output: 3

    return 0;
}



// citations = {3, 0, 6, 1, 5};
// sort(citations.begin(), citations.end());
// // After sorting: {0, 1, 3, 5, 6}


//   sort(citations.rbegin(), citations.rend()); // Sort the array in descending order
// //     int h = 0;

// //     for (int i = 0; i < citations.size(); ++i) {
// //         if (citations[i] >= i + 1) {
// //             h = i + 1;
// //         } else {
// //             break;
// //         }
// //     }

// //     return h;
        