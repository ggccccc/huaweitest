//
// Created by Administrator on 2023/4/6.
//

#include <iostream>
using namespace std;


struct ListNode {
    int m_nKey;
    ListNode* m_pNext;
};


ListNode* createList(int n) {
    auto head = new ListNode;
    ListNode* p = head;
    for (int i = 0; i < n; i++) {
        auto node = new ListNode;
        int k;
        cin >> k;
        node->m_nKey = k;
        node->m_pNext = nullptr;
        p->m_pNext = node;
        p = p->m_pNext;
    }
    return head;
}

int main() {
    int n;
    while (cin >> n) { // 注意 while 处理多个 case
        auto head = createList(n);
        int k;
        cin>>k;

        ListNode* p1 = head->m_pNext;
        ListNode* p2 = head->m_pNext;
        for (int i = 0; i < k; i++) {
            p1 = p1->m_pNext;
        }
        while (p1!= nullptr) {
            p1 = p1->m_pNext;
            p2 = p2->m_pNext;

        }
        cout << p2->m_nKey << endl;
    }
}
// 64 位输出请用 printf("%lld")