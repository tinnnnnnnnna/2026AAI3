///week05-3a.cpp 學習計畫 Built-In Functions第一題
///leetcode 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0,now=0;///現在答案vs現在累積字母
        for(char c:s){///每次逐一取出字母檢查
            if(c==' '){///每遇到空格，要清空
                if(now!=0)ans=now;///更新答案
                now=0;///清空
            }else now++;///遇到不是空格，要+1
        }
        if(now!=0)ans=now;
        ///還差一點點(三個測試資料 ，只對一個，另外兩個有問題)
         return ans;///先試試看
    }
};
