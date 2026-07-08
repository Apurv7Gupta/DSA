// while(if(temp == 1)){nodeOne->next = temp}, same for all
// nodeOne->next = nodeTwo (append all lists)

#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *sort102(ListNode *head)
{
    ListNode *temp = head;

    ListNode dummy0(0);
    ListNode dummy1(0);
    ListNode dummy2(0);

    ListNode *OneList = &dummy1;
    ListNode *TwoList = &dummy2;
    ListNode *ZeroList = &dummy0;

    while (temp != nullptr)
    {
        ListNode *nextNode = temp->next; // save rest of original
        temp->next = nullptr;            // detach the rest of original

        if (temp->val == 1)
        {
            OneList->next = temp;
            OneList = OneList->next;
        }
        else if (temp->val == 2)
        {
            TwoList->next = temp;
            TwoList = TwoList->next;
        }

        else
        {
            ZeroList->next = temp;
            ZeroList = ZeroList->next;
        }
        temp = nextNode;
    }

    // build final list

    // Connect 0s to the first non-empty list among 1s and 2s
    if (dummy1.next != nullptr)
        ZeroList->next = dummy1.next;
    else
        ZeroList->next = dummy2.next;

    // Connect 1s to 2s
    OneList->next = dummy2.next;

    // return
    if (dummy0.next != nullptr)
        return dummy0.next;
    if (dummy1.next != nullptr)
        return dummy1.next;
    return dummy2.next;
}

int main()
{

    // create a SLL

    ListNode *node1 = new ListNode(1);
    ListNode *node2 = new ListNode(2);
    ListNode *node3 = new ListNode(0);
    ListNode *node4 = new ListNode(1);
    ListNode *node5 = new ListNode(0);
    ListNode *node6 = new ListNode(2);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;

    // print list

    ListNode *temp2 = sort102(node1);

    while (temp2 != nullptr)
    {
        cout << temp2->val << "->";
        if (temp2->next == nullptr)
            cout << "nullptr";
        temp2 = temp2->next;
    }

    return 0;
}

/* Optimal
O(n) time,
O(1) space
*/