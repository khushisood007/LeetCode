class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i=0;
        int maxi=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int j=i+1;j<nums.size();j++){
         maxi=max(((nums[i]-1)*(nums[j]-1)),maxi);
         i++;
        }
      
      return maxi;
    }
};