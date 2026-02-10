#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void bubbleSort(struct Node *head) {
    int swapped;
    struct Node *ptr;
    struct Node *last = NULL;

    do {
        swapped = 0;
        ptr = head;

        while (ptr->next != last) {
            if (ptr->data > ptr->next->data) {
                int temp = ptr->data;
                ptr->data = ptr->next->data;
                ptr->next->data = temp;
                swapped = 1;
            }
            ptr = ptr->next;
        }
        last = ptr;
    } while (swapped);
}

int main() {
    struct Node n1 = {5, NULL};
    struct Node n2 = {2, NULL};
    struct Node n3 = {4, NULL};

    n1.next = &n2;
    n2.next = &n3;

    bubbleSort(&n1);

    struct Node *p = &n1;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }

    return 0;
}