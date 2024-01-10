#include <stdio.h>
#include <stdlib.h>

typedef struct _Link {
    int data;
    struct _Link *next;
} Link;

Link *head = NULL;

void push_head(int x) {
    Link *p = (Link*)malloc(sizeof(Link));
    p->data = x;
    p->next = head;
    head = p;
}
void print_list() {
    Link *p = head;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    puts("");
}
void free_list() {
    Link *p;
    while (head != NULL) {
        p = head->next;
        free(head);
        head = p;
    }
}

int main() {
    int n, x;
    scanf("%d", &n);
    while (n--) {
        do {
            scanf("%d", &x);
            if (x != -1) push_head(x);
            else break;
        } while (1);
        print_list();
        free_list();
    }
    return 0;
}
