class Solution{
public:

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* temp1 = list1;
    ListNode* temp2 = list2;
    vector<int> newlist;

    while (temp1) {
        newlist.push_back(temp1->val);
        temp1 = temp1->next;
    }
    while (temp2) {
        newlist.push_back(temp2->val);
        temp2 = temp2->next;
    }

    if (newlist.empty()) return nullptr;

    sort(newlist.begin(), newlist.end());

    ListNode* head = new ListNode(newlist[0]);
    ListNode* current = head;

    for (int i = 1; i < newlist.size(); i++) {   // start at 1, not 0
        current->next = new ListNode(newlist[i]);
        current = current->next;
    }

    return head;
}
};