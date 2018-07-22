// Demos std::sort
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printVec(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main() {
    vector<int> vec {5, 1, -9, 100, 12};
    printVec(vec);
    
    sort(vec.begin(), vec.end());
    printVec(vec);
}
