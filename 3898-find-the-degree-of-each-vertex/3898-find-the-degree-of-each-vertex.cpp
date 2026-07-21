class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<matrix[i].size();j++)
            {
                sum+=matrix[i][j];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};