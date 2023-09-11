# Q2
#include <iostream>
#include <vector>
using namespace std;

void segregateBinaryStrings(vector<string> &arr) {
    int left = 0;        // Initialize left pointer
    int right = arr.size() - 1;  // Initialize right pointer

    while (left < right) {
        // Move the left pointer to the right until a 1 is found
        while (arr[left] == "0" && left < right) {
            left++;
        }

        // Move the right pointer to the left until a 0 is found
        while (arr[right] == "1" && left < right) {
            right--;
        }

        // Swap arr[left] and arr[right]
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    vector<string> arr = {"0", "1", "0", "1", "0", "1", "1", "1"};
    segregateBinaryStrings(arr);

    cout << "Segregated array: ";
    for (const string &str : arr) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}
