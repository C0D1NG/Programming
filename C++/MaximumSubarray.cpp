#include <bits/stdc++.h>

using namespace std;


class Solution {
private:
	int finalMax = INT_MIN, tempMax = 0;
public:
    int maxSubArray(vector<int>& nums) {
    	for (int x : nums) {
        	tempMax += x;
			finalMax = max(finalMax, tempMax);
			tempMax = max(tempMax, 0);
        }

        return finalMax;
    }
};

int main() {
	Solution obj;
	int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> nums;
	for (int i = 0; i < 9; ++i)
		nums.push_back(a[i]);
	
    cout << obj.maxSubArray(nums) << endl;
	
    return 0;
}