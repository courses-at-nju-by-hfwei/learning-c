// File: josephus-linkedlist.c
// Created by hengxin on 17-11-7.
// Solving the Josephus puzzle with circular linked list.

#include <stdio.h>
#include <stdlib.h>
#include "../../../c/data-structure/linkedlist/linkedlist.h"

void sit_in_circle(LinkedList *list, int n);
void kill(LinkedList *list);
void show_id(const int *id);

int main(void) {
    printf("%s", "Enter the number of soldiers: ");
    int n = 0;
    scanf("%d", &n);

    LinkedList list;
    initialize_list(&list);
    show(&list, show_id);

    sit_in_circle(&list, n);
    show(&list, show_id);

    kill(&list);
    show(&list, show_id);
}

void sit_in_circle(LinkedList *list, int n) {
    for (int i = 1; i <= n; ++i) {
        // ERROR: add_tail(list, &i);
        int *id = malloc(sizeof(int));
        *id = i;
        add_tail(list, id);
    }
}

/**
 * Kill each other until only one soldier survives.
 */
void kill(LinkedList *list) {
    Node *tmp = list->head;

    while (tmp->next != tmp) { // only one soldier now
        delete_next(list, tmp);
        tmp = tmp->next;
    }
}

void show_id(const int *id) {
    printf("%d\t", *id);
}
