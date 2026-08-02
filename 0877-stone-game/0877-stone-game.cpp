class Solution {
public:
int t[501][501];
int solve(vector<int>& piles,int i,int j){
    if(i>j){
        return 0;
    }
    if(i==j){
        return piles[i];
    }
    if(t[i][j]!=-1){
        return t[i][j];
    }
    int i1=piles[i]+min(solve(piles,i+2,j),solve(piles,i+1,j-1));
    int j1=piles[j]+min(solve(piles,i,j-2),solve(piles,i+1,j-1));
    return t[i][j]=max(i1,j1);
}
    bool stoneGame(vector<int>& piles) {
      memset(t,-1,sizeof(t));
      int sum=accumulate(begin(piles),end(piles),0);
      int score1=solve(piles,0,piles.size()-1);
      return score1>sum/2;
    }
};