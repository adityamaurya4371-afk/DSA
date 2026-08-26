class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
       
        vector<pair<int,int>>temp;
        int i=0;
        for( i=0;i<drones.size();i++){
            int x=drones[i][0];
            int y=drones[i][1];
            int range=drones[i][2];

            int d=abs(x-target[0])+abs(y-target[1]);

            if(d<=range){
                temp.push_back({d,i});
            }

            }
           // if there is no possible scenario 
            if(temp.size()==0){
                return -1;
            }

      sort(temp.begin(),temp.end());

    return temp[0].second;

       }
};