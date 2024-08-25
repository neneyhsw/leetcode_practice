#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> sum_of_sub_arr;
  
  void GetSumOfSubArr(vector<int> arr, int start, int end)
  {
    if (end == arr.size()) return;
    else if (start > end) GetSumOfSubArr(arr, 0, end + 1);
    else {
      int temp = 0;
      for (int i = start; i < end; i++) {
        temp += arr[i];
      }
      temp += arr[end];
      int i = 0;
      for (i = 0; i < sum_of_sub_arr.size(); i++) {
        if (temp <= sum_of_sub_arr[i]) {
          break;
        }
      }
      sum_of_sub_arr.insert(sum_of_sub_arr.begin()+i, temp);
      GetSumOfSubArr(arr, start + 1, end);
    }
    return;
  }

    int rangeSum(vector<int>& nums, int n, int left, int right) {
        GetSumOfSubArr(nums, 0, 0);
        int ans = 0;
        for (int i = left-1; i < right; i++) {
          ans += sum_of_sub_arr[i];
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums = {
    1,2,3,4
  };
  int n = 4, left = 1, right = 5;

  cout << S.rangeSum(nums, n, left, right) << endl;

  return 0;
}
