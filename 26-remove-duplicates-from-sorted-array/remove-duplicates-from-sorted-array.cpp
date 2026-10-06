class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
int j=0;

        int n=nums.size();

        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[j]=nums[i-1];
                j++;

            }

        }
        nums[j]=nums[n-1];
        j++;

        return j;
        

        
        }
};