class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
    vector<pair<int,int>>arr;
    int n=nums.size();

    for(int i=0;i<n;i++){

        arr.push_back({nums[i],i});
    }

    int i=0;
    int j=n-1;

    sort(arr.begin(),arr.end());

    while(i<j){
        int sum=arr[i].first+arr[j].first;
        if(sum==target){
            ans.push_back(arr[i].second);
             ans.push_back(arr[j].second);
              return ans;
        }

        else if(sum>target){
            j--;
        }
        else{
            i++;
        }

    }
    return ans;
}
};
    