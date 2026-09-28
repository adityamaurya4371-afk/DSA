class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<int> ans;
        vector<int> temp = nums;

        int n = nums.size();

        while (n != 0) {

            int removed = 0;

            for (int i = 0; i < n; i++) {

                if (i == 0 || nums[i] != nums[i - 1]) {

                    ans.push_back(nums[i]);

                    // Because 'removed' elements have already
                    // been deleted from temp
                    temp.erase(temp.begin() + i - removed);

                    removed++;
                }
            }

            nums = temp;
            n = nums.size();
        }

        return ans;
    }
};