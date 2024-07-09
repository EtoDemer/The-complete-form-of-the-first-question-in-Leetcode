#include<iostream>  
#include<vector>  
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> result;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] + nums[j] == target) {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return result; // 如果没有找到，返回一个空的vector  
}

int main() {
    int n;
    cout << "Please input the length of the array arr: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Please input the numbers:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> nums;

    cout << "arr[" << n << "]=";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        nums.push_back(arr[i]);
    }

    int target;
    cout << "Please input the target:";
    cin >> target;
    vector<int> res = twoSum(nums, target);
    if (!res.empty()) {
        cout << "that is " << res[0] << " plus " << res[1] << " equals " << target;
    }
    else {
        cout << "There are no two numbers in the array arr that add up to " << target << endl;
    }

    delete[] arr;
    return 0;
}
