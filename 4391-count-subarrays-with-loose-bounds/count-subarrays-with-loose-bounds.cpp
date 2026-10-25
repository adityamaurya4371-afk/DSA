class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long count =0;
        int n=nums.size();
        long long curr=0;

        for(int i=0;i<n;i++){
            if(nums[i]>=minK && nums[i]<=maxK){
                curr++;
            }
            else{
                curr=0;
            }
            count+=curr;

            }
            return count;
    }
};