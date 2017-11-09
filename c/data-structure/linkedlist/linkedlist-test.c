// File: linkedlist-test.c
// Created by hengxin on 17-11-9.
// Test the linked list data structure defined in "linkedlist.h"

#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void show_integer(const int *integer);
int compare_integer(const int *data1, const int *data2);

int main(void) {
    /**
     * initialize_list
     */
    LinkedList list;
    printf("Unintialized:\nlist.head: %p\t list.tail: %p.\n", list.head, list.tail);

    initialize_list(&list);
    printf("\nInitialized:\nlist.head: %p\t list.tail: %p.\n", list.head, list.tail);

    LinkedList list_inited = {
            .head = NULL,
            .tail = NULL
    };
    printf("\nInitialized:\nlist.head: %p\t list.tail: %p.\n", list.head, list.tail);

    /**
     * add_tail
     */
    // create a linked list containing data items 1, 2, 3, 4, 5
    for (int i = 1; i <= 5; ++i) {
        // ERROR: add_tail(&list, &i);
        int *id = malloc(sizeof(int));
        *id = i;
        add_tail(&list, id);
    }

    show(&list, show_integer);

    /**
     * get_node
     */
    int val1 = 1;
    Node *node1 = get_node(&list, compare_integer, &val1);
    printf("\nThe node found contains the data: %d.\n",
           *((int *) node1->data));

    int val3 = 3;
    Node *node3 = get_node(&list, compare_integer, &val3);
    printf("\nThe node found contains the data: %d.\n",
           *((int *) node3->data));

    int val5 = 5;
    Node *node5 = get_node(&list, compare_integer, &val5);
    printf("\nThe node found contains the data: %d.\n",
           *((int *) node5->data));

    int val6 = 6;
    Node *node6 = get_node(&list, compare_integer, &val6);
    if (node6 != NULL) {
        printf("\nThe node found contains the data: %d.\n",
               *((int *) node6->data));
    } else {
        printf("\nCannot found a node containing the data %d.\n", val6);
    }

    /**
     * delete
     */
    delete1(&list, node5);
    show(&list, show_integer);
}

void show_integer(const int *integer) {
    printf("%d\t", *integer);
}

int compare_integer(const int *data1, const int *data2) {
    return (*data1) - (*data2);
}
