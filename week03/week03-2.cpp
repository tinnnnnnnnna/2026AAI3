///week03-2.cpp 每日挑戰題 2026-09-24
///Leecode 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg=0;///統計有幾個負數
        for(int num:nums){
            if(num<0)neg++;///遇到負數
            if(num==0)return 0;///遇到0
        }
        if (neg%2==0) return 1;///負負得正
        else return -1;

        ///用錯誤的方法寫一次
        ///int ans =1;
        ///for (int num:nums){//進階c++迴圈 逐一處理
        ///    ans*=num;//乘進去
        ///}
        ///if(ans>0)return 1;
        ///if(ans<0)return -1;
        ///return 0;
    }
};
