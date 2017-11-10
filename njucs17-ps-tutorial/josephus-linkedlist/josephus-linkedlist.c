// File: josephus-linkedlist.c
// Created by hengxin on 17-11-10.
// Solving the Josephus puzzle using circular linked list.

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "linkedlist.h"

void sit_in_circle(LinkedList *list, int n);
void kill_until_one(LinkedList *list);

int main(void) {
    printf("%s", "Enter the number of soldiers: ");
    int n = 0;
    scanf("%d", &n);
    assert(n > 0);

    LinkedList list;
    initialize_list(&list);

    sit_in_circle(&list, n);

    kill_until_one(&list);
    printf("%d", *((int *) list.head->data));
}

void sit_in_circle(LinkedList *list, int n) {
    for (int i = 1; i <= n; ++i) {
        int *id = malloc(sizeof(int));
        *id = i;
        add_tail(list, id);
    }
}

void kill_until_one(LinkedList *list) {
    Node *tmp = list->head;

    while (! is_singleton(list)) {
        delete_next(list, tmp);
        tmp = tmp->next;
    }
}
