///week05-2.cpp 學習計畫
///leetcode 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        ///week02教過字串s的長度.lenght
        for(int i=0;i<s.length();i++){
            if(isupper(s[i]))s[i]=s[i]-'A'+'a';///逐字母處理
        }
        ///s[0];///先試試看吧(看起來就是錯的)教你s[i]
        return s;///竟然直接送出去
    }
};
