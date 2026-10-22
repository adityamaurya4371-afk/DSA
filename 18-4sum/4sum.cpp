class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<int>temp;

       
        set<vector<int>>st;
        

        int n=nums.size();
        

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            for(int j=i+1 ;j<n;j++){
                int left=j+1;
                int right=n-1;

                while(left<right){
                    long long sum=(long long )nums[i]+nums[j]+nums[left]+nums[right];

                    if(sum==target){
                        st.insert({nums[i], nums[j], nums[left], nums[right]});
                          right--;
                        left++;

                    }

                    else if(sum>target){
                        right--;
                    }

                    else{
                        left++;
                    }

                    
                }
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());

      return ans;


        }
};