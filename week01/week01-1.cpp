///week01-1.cpp SOIT106_ADVANCE_001
#include <stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int N2=N,ans=0;
	while(N>0){ ///­é¥Öªk
		ans=ans*10+N%10;
		N=N/10;
	}
	printf("%d+%d=%d\n",N2,ans,N2+ans);
}
