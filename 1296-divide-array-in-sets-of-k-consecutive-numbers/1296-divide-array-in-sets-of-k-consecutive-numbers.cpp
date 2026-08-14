class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
       if(nums.size()%k!=0){
        return false;
       }
       sort(nums.begin(),nums.end());
       unordered_map<int,int>mp;
       for(int x:nums){
        mp[x]++;
       }
       for(int x:nums){
        if(mp[x]==0){
            continue;
        }
        for(int i=0;i<k;i++){
            if(mp[x+i]==0){
                return false;
            }
            mp[x+i]--;
        }
       }
       return true;
    }
};