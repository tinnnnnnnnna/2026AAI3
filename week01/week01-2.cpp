///week01-2.cpp SOIT106_ADVANCE_001
///C++版本
#include <iostream>///使用io串流的外掛
using namespace std;///使用std命名空間
int main(){
	int N;
	cin>>N;///console input 到右邊的N
	int N2=N,ans=0;
	while(N>0){
		ans=ans*10+N%10;
		N=N/10;
	}
	///console output 依序送出去
	cout<<N2<<ans<<N2+ans;///錯!少了+ = 跳行
	cout<<N2<<"+"<<ans<<"="<<N2+ans<<"\n";///正確1
	cout<<N2<<"+"<<ans<<"="<<N2+ans<<endl;///正確2
}
