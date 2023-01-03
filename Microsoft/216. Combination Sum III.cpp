class Solution {
public:
    vector<vector<int>> result;
    void helper(int start,int k, int sum, vector<int> temp){
        if (temp.size()==k){
            if(sum==0){
                result.push_back(temp);
            }
            return;
        }
        for(int i=start;i<=9;i++){
            temp.push_back(i);
            helper(i+1,k,sum-i,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
    vector<int> temp;    
    helper(1,k,n,temp);
    return result;    
    }
};