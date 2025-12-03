//week13-2b.cpp
//leetcode 21.
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*ans=new ListNode(999);//一律給999
        ListNode*ans2=new ListNode(888);//一律給888
        ans->next=ans2;//接起來
        return ans;
    }
};
