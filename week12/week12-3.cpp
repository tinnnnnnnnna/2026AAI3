///week12-3.cpp 學習計畫 Linked List第三題
///leetcode 2. Add Two Numbers 超級大的數相加
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
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
        return ans->next;
        ///樓下的版本沒辦法處理"長度不同"的狀況
        ///while(l1!=nullptr && l2!=nullptr){//上週教的工具2
        ///    int val=l1->val+l2->val+carry;
        ///    now->next=new ListNode(val%10);//上週教的工具2
        ///    carry=val/10;
        ///    now=now->next;//上週教的工具2
        ///    l1=l1->next;//上週教的工具2
        ///    l2=l2->next;//上週教的工具2
        ///}
        ///return ans->next;
    }
};
