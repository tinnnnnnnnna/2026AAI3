///week07-4.cpp 學習計畫 Simulation 第三題
///leetcode 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:///大資料結構moves，裡面有中資料結構vector<int> move，裡面裝小資料結構int i,j
    string tictactoe(vector<vector<int>>& moves) {

        int a[3][3]={0};
        string result[3]={"Draw","A","B"};///結果的字母
        int who=1;///現在輪到who來下棋 1:A 2:B
        for(vector<int> move:moves){///迴圈，逐一處理中資料結構
            int i=move[0], j=move[1];///現在輪到who來下棋
            a[i][j]=who;

            if(a[0][0]==who && a[0][1]==who && a[0][2]==who )return result[who];
            if(a[1][0]==who && a[1][1]==who && a[1][2]==who )return result[who];
            if(a[2][0]==who && a[2][1]==who && a[2][2]==who )return result[who];

            if(a[0][0]==who && a[1][0]==who && a[2][0]==who )return result[who];
            if(a[0][1]==who && a[1][1]==who && a[2][1]==who )return result[who];
            if(a[0][2]==who && a[1][2]==who && a[2][2]==who )return result[who];

            if(a[0][0]==who && a[1][1]==who && a[2][2]==who )return result[who];
            if(a[2][0]==who && a[1][1]==who && a[0][2]==who )return result[who];
            if (who==1)who=2;
            else who=1;
        }
        if (moves.size()==9)return "Draw";///最後離開迴圈 沒有人贏 就平手(這是錯的)
        else return "Panding";

    }
};
