
struct ListNode *reverse(struct ListNode *head) {
    struct ListNode *tail = NULL, *p;
    while (head != NULL) {
        p = (struct ListNode*)malloc(sizeof(struct ListNode));

        p->next = tail;
        p->data = head->data;
        tail = p;

        head = head->next;
    }
    return tail;
}
