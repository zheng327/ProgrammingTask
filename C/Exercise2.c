/*
题目2：链表排序
描述：编写一个函数，对给定的单向链表进行排序。
*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insertNode(struct Node **head, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void sortLinkedList(struct Node **head) {
    struct Node *current, *index;
    int temp;

    if (*head == NULL) {
        return;
    } else {
        for (current = *head; current->next != NULL; current = current->next) {
            for (index = current->next; index != NULL; index = index->next) {
                if (current->data > index->data) {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
            }
        }
    }
}

void displayLinkedList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node *head = NULL;

    insertNode(&head, 5);
    insertNode(&head, 3);
    insertNode(&head, 8);
    insertNode(&head, 1);
    insertNode(&head, 2);

    printf("Before sorting: ");
    displayLinkedList(head);

    sortLinkedList(&head);

    printf("After sorting: ");
    displayLinkedList(head);

    return 0;
}
