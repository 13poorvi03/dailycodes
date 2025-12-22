// what is sorting 

// ans -- ordering of elements which can be in increasing or decreasing order

// repeatedly(until our array is sorted ) swap two adjacent(aaju baju wlee) elements if in wrong order 

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &v) {
    int n = v.size();

    for (int i = 0; i < n - 1; i++) {          // outer loop
        for (int j = 0; j < n - i - 1; j++) {  // inner loop
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);          // fixed semicolon
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

    bubbleSort(v);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}