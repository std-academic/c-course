#include <stdio.h>
#include <stdlib.h>

typedef struct link
{
    int data;
    struct link *next;
}*Link;

Link Create(int n);
void Display(Link head);

int main()
{
    int   n;
    Link  head;
    scanf("%d",&n);
    head = Create(n);
    Display(head);
    return 0;
}

/*** CODE STARTING HERE ***/

// Link = struct link*

Link Create(int n) {
    int i, x; Link p, q, head = NULL;
    for (i = 1; i <= n; ++i) {
        scanf("%d", &x);
        p = (Link)malloc(sizeof(struct link));
        p->data = x;
        if (head == NULL) {
            head = p;
        } else {
            q->next = p;
        }
        q = p;
    }
    return head;
}

void Display(Link head) {
    if (head == NULL) {
        puts("NULL");
        return;
    }
    while (head->next != NULL) {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("%d\n", head->data);
}
