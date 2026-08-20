class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
      vector<int>arr1;
      vector<int>arr2;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

      for(int j=2;j<nums.size();j++){
      if(arr1[arr1.size()-1]>arr2[arr2.size()-1]){
        arr1.push_back(nums[j]);
      }
        else{
        arr2.push_back(nums[j]);
      }
      }
      for(auto x:arr2){
        arr1.push_back(x);
      }
      return arr1;
    }
};