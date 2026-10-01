///week04-3.cpp 在CodeBlocks裡實作一下
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int>a;
    a.push_back(99);///上週week03教的
    a.push_back(88);
    a.push_back(77);///上週week03教的
    ///在CodeBlocks的settings-compiler...要勾第二個-std=c++11
    for(int num:a)cout<<num<<' ';///2011年的c++沒設定好會出錯
    cout<<"\n";

    vector<int>a2(5,7);///本週教［陣列的初始化］有五格每格都放7
    for(int num:a2)cout<<num<<' ';///2011年的c++沒設定好會出錯
    cout<<"\n";

    vector<int>a3={9,8,7,1,2,3,6,5,4,0};///陣列初始值
    for(int num:a3)cout<<num<<' ';
    cout<<"\n";
}
