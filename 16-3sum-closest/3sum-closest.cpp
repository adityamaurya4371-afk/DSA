class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int n =nums.size();
        sort(nums.begin(),nums.end());
        long long  ans=nums[0]+nums[1]+nums[2];
      

    for(int i=0;i<n;i++){
        
       
       
       int  s=i+1;
       int  e=n-1;
        while(s<e){

           long  long sum=nums[i]+nums[s]+nums[e];
             if(abs(target-sum)<abs(target-ans)){
                ans=sum;
            }
            if(sum==target){
                return target;
            }
            else if(sum>target){
               
               
                e--;
            }
            else{
                
              
               s++;
            }

           

            
        }
    }

      return ans;  
    }
};