class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        vector<int>arr;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i%2==1){
                int count=0;

                int num=nums[i];

                while(num!=0){
                    num=num/10;
                    count++;
                }
                arr.push_back(nums[i-1]*pow(10,count)+nums[i]);

            }
        }

        // find the minimum element

        int m=arr.size();
        int minimum=arr[0];

        for(int i=1;i<m;i++){
            minimum=min(arr[i],minimum);
        }
        return minimum;
    }
};