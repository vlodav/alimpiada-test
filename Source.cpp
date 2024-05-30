#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    int num;
    int count = 0;

    while (arr.size() < 10) {
        cin >> num;
        arr.push_back(num);
        count++;
    }

    auto result = minmax_element(arr.begin(), arr.end());
    int a = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == *result.first || arr[i] == *result.second) {
            a++;
        }
    }
    cout<< a;
    return 0;
}
