class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
       sort(nums.begin(),nums.end());
       if(nums[n-1]!=n)
           return n;
       int left=0;
       int temp=0;
       for(int right=1;right<n;right++){
        if(nums[right]-nums[left]==2)
            temp=(nums[left]+nums[right])/2;
        left++;
       }
        return temp;
    }
   
};