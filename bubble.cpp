#include <iostream>
using namespace std;
class Solution {
public:
    void bubbleSort(int arr[], int n) {
        bool flag = false;
        for (int i = 0; i < n - 1; i++) {
            flag = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    flag = true;
                }
            }
            if (!flag) {
                break;
            }
        }
    }
};
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    Solution s;
    s.bubbleSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}