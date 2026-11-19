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
 ///week11-4.cpp Linked List 第一題
 ///leetcode 21. Merge Two Sorted Lists

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans=new ListNode(999);
        ListNode* now=ans;
        while(list1!=nullptr && list2!=nullptr){///如果左邊有值不是空的,右邊有值不是空的
            if(list1->val < list2->val){
                now->next=new ListNode(list1->val);
                now=now->next;
                list1=list1->next;
            }else{
                now->next=new ListNode(list2->val);
                now=now->next;
                list2=list2->next;
            }
        }
        if(list1)now->next=list1;
        if(list2)now->next=list2;
        ///if(list1==nullptr && list2!=nullptr)now->next=new ListNode(list2->val);//這是我下課寫的
        ///if(list2==nullptr && list1!=nullptr)now->next=new ListNode(list1->val);//這是我下課寫的
        ///ans->next=list2;//亂寫的

        return ans->next;
    }
};
