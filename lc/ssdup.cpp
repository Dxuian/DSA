#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    void backTrack(vector<vector<int>>& ans, vector<int>& nums, vector<int>& curr, int index) {
        ans.push_back(curr);
        for (int i = index; i < nums.size(); i++) {
            if (i != index && nums[i] == nums[i - 1])
                continue;
            curr.push_back(nums[i]);
            backTrack(ans, nums, curr, i + 1);
            curr.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> curr;
        backTrack(ans, nums, curr, 0);
        return ans;
    }
};

int main() {
    vector<int> nums = {1,8,6 , 8, 8    ,5,2,3,45,6,7,8,9,0,1,2,3,4,5,6,7,8,9   };
    Solution solution;
    vector<vector<int>> result = solution.subsetsWithDup(nums);

    // Printing the result
    // for (const auto& subset : result) {
    //     for (const auto& element : subset) {
    //         cout << element << " ";
    //     }
    //     cout << endl;
    // }
    cout<<result.size()<<endl;

    return 0;
}
