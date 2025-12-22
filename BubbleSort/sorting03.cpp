//stable and unstable sort 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // Array of pairs (marks, id)
    vector<pair<int, char>> arr;
    arr.push_back({90, 'A'});
    arr.push_back({80, 'B'});
    arr.push_back({90, 'C'});
    arr.push_back({70, 'D'});
    arr.push_back({90, 'E'});

    cout << "Original order: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << "(" << arr[i].first << "," << arr[i].second << ") ";
    }
    cout << endl;

    // Stable sort
    vector<pair<int, char>> stableArr = arr;
    stable_sort(stableArr.begin(), stableArr.end(),
                [](pair<int,char> a, pair<int,char> b){
                    return a.first < b.first;
                });

    cout << "After stable_sort: ";
    for (int i = 0; i < stableArr.size(); i++) {
        cout << "(" << stableArr[i].first << "," << stableArr[i].second << ") ";
    }
    cout << endl;

    // Normal sort (unstable)
    vector<pair<int, char>> unstableArr = arr;
    sort(unstableArr.begin(), unstableArr.end(),
         [](pair<int,char> a, pair<int,char> b){
             return a.first < b.first;
         });

    cout << "After sort: ";
    for (int i = 0; i < unstableArr.size(); i++) {
        cout << "(" << unstableArr[i].first << "," << unstableArr[i].second << ") ";
    }
    cout << endl;

    return 0;
}