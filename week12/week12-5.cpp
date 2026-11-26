///week12-5.cpp 學習計畫 Linked List第四題
///leetcode 445. Add Two Numbers II 很大的數的加法，但個位數沒對齊
class Solution {
public:
    ///把上週week11-4的
    ListNode* reverseList(ListNode* head){///這行要自己寫
        vector<int>a;
            while (head!=nullptr){
            a.push_back(head->val);
            head=head->next;
        }
        ListNode* ans=new ListNode(999);
        ListNode* now=ans;
        for(int i=a.size()-1;i>=0;i--){
            now->next=new ListNode(a[i]);
            now=now->next;
        }
        return ans->next;
    }///這行要自己寫

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        l1 = reverseList(l1);///這行要自己寫
        l2 = reverseList(l2);///這行要自己寫

        ///下面用貼的 week12-3
        ListNode* ans=new ListNode(999);///上週教的工具1
        ListNode* now=ans;///上週教的工具2
        int carry=0;///進位，week12的重點
        ///新版本
        while(l1!=nullptr || l2!=nullptr){
            if(l1!=nullptr)carry += l1->val;///如果l1還有就把val加進去
            if(l2!=nullptr)carry += l2->val;///如果l2還有就把val加進去
            now->next=new ListNode(carry%10);
            carry=carry/10;
            now=now->next;
            if(l1!=nullptr)l1=l1->next;///如果還有才能換下一筆
            if(l2!=nullptr)l2=l2->next;
        }
        if(carry)now->next=new ListNode(carry);///離開迴圈後，如果還有carry進位，不能漏掉

        return reverseList(ans->next);///這行要自己寫//return ans->next;
    }
};
