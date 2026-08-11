class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<int>ans;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i<j){
        int mid= nums[i]+nums[j];
        ans.insert(mid);
        i++;
        j--;
        }
        return ans.size();
    }
};