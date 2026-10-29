///week08-3.cpp Matrix第三題
///leetcode 54. Spiral Matrix螺旋矩陣，繞圈圈輸出
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M=matrix.size(),N=matrix[0].size();///長、寬
        vector<int>ans;
        int left=0,right=N-1,up=0,down=M-1;
        while(ans.size()<M*N){
            int i,j;
            i=up;
            for(int j=left;j<=right;j++){
                ans.push_back(matrix[i][j]);
            }///往右
            up++;

            j=right;
            for(int i=up;i<=down;i++){
                ans.push_back(matrix[i][j]);
            }///往下
            right--;


            if(ans.size()==M*N)break;

            i=down;
            for(int j=right;j>=left;j--){
                ans.push_back(matrix[i][j]);
            }///往左
            down--;

            j=left;
            for(int i=down;i>=up;i--){
                ans.push_back(matrix[i][j]);
            }///往上
            left++;
        }
        return ans;
    }
};
