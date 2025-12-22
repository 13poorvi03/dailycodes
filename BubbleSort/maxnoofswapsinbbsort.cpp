//maximum no of swaps in worst case in bubble sort 

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &v, int &swapCount) {
    int n = v.size();

    for (int i = 0; i < n - 1; i++) {          // outer loop
        for (int j = 0; j < n - i - 1; j++) {  // inner loop
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                swapCount++;                   // count each swap
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int swapCount = 0;
    bubbleSort(v, swapCount);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Total swaps performed = " << swapCount << endl;

    // Maximum swaps in worst case = n*(n-1)/2
    int maxSwaps = (n * (n - 1)) / 2;
    cout << "Maximum swaps possible in worst case = " << maxSwaps << endl;

    return 0;
}