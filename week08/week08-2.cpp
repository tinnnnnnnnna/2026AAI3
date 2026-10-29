///week08-2.cpp學習計畫Matrix第一題
///leetcode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M=accounts.size(),N=accounts[0].size();///長、寬
        int ans=0;///找到錢最多的人的錢(把一行的數字相加)
        for(int i=0;i<M;i++){///左手i對應M
            int now=0;///小迴圈裡now是0
            for (int j=0;j<N;j++){///右手j對應N
                now+=accounts[i][j];///小迴圈裡now+=這格的值
            }
            ans=max(ans,now);///小迴圈後面用now更新ans
        }
        return ans;
    }
};
