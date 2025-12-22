//how to optimize the bubble sort in the case of nearly sorted arrays 

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &v, int &swapCount, bool &alreadySorted) {
    int n = v.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                swapCount++;
                swapped = true;
            }
        }
        // agar ek bhi swap nahi hua toh array already sorted hai
        if (!swapped) {
            alreadySorted = true;
            break;
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
    bool alreadySorted = false;

    bubbleSort(v, swapCount, alreadySorted);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    if (alreadySorted && swapCount == 0) {
        cout << "Array was already sorted!" << endl;
    } else {
        cout << "Array was not sorted initially." << endl;
        cout << "Total swaps performed = " << swapCount << endl;
    }

    return 0;
}






//style 2---------------->



// #include <iostream>
// #include <vector>
// using namespace std;

// void bubbleSort(vector<int> &v) {
//     int n = v.size();
//     bool swapped;

//     for (int i = 0; i < n - 1; i++) {
//         swapped = false;
//         for (int j = 0; j < n - i - 1; j++) {
//             if (v[j] > v[j + 1]) {
//                 swap(v[j], v[j + 1]);
//                 swapped = true;
//             }
//         }
//         // If no swaps in this pass → array is sorted
//         if (!swapped) break;
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) cin >> v[i];

//     bubbleSort(v);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) cout << v[i] << " ";
//     cout << endl;

//     return 0;
// }