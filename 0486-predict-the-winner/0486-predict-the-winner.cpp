class Solution {
public:
    int solve(vector<int>& nums,int i,int j){
        if(i>j){
            return 0;
        }
        if(i==j){
            return nums[i];
        }
        int i1=nums[i]-solve(nums,i+1,j);
        int j1=nums[j]-solve(nums,i,j-1);
        return max(i1,j1);
    }
    bool predictTheWinner(vector<int>& nums){
        return solve(nums,0,nums.size()-1)>=0;
    }
};