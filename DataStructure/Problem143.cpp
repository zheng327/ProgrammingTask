/*
143. 重排链表
给定一个单链表 L 的头节点 head ，单链表 L 表示为：
L0 → L1 → … → Ln - 1 → Ln
请将其重新排列后变为：
L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
不能只是单纯的改变节点内部的值，而是需要实际的进行节点交换。

示例 1：
输入：head = [1,2,3,4]
输出：[1,4,2,3]

示例 2：
输入：head = [1,2,3,4,5]
输出：[1,5,2,4,3]
*/

#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    void printListNode()
    {
        cout << val << " ";
        ListNode* head = next;
        while (head)
        {
            cout << head->val << " ";
            head = head->next;
        }
        cout << endl;
    }
};

ListNode* createListNode(vector<int> data)
{
    ListNode* head;
    head = new ListNode(data[0]);

    ListNode* tempPtr;
    tempPtr = head;

    for (unsigned int i = 1; i < data.size(); ++i)
    {
        ListNode* tempNode;
        tempNode = new ListNode(data[i]);
        tempPtr->next = tempNode;
        tempPtr = tempPtr->next;
    }
    return head;
}

class Solution {
public:
    void reorderList(ListNode* head) {
        if(head == nullptr)
            return;
        vector<ListNode*> vec;
        ListNode* node = head;
        while(node != nullptr){
            vec.emplace_back(node);
            node = node->next;
        }
        int i = 0, j = vec.size() - 1;
        while(i < j){
            vec[i]->next = vec[j];
            i++;
            if(i == j)
                break;
            vec[j]->next = vec[i];
            j--;
        }
        vec[i]->next = nullptr;
    }
};

int main(){
    vector<int> example1 = {1,2,3,4};
    vector<int> example2 = {1,2,3,4,5};

    Solution solution;

    ListNode* head1 = createListNode(example1);
    ListNode* head2 = createListNode(example2);

    head1->printListNode();
    solution.reorderList(head1);
    head1->printListNode();

    head2->printListNode();
    solution.reorderList(head2);
    head2->printListNode();
}
