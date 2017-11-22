//
// Created by hengxin on 17-11-10.
//

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#ifndef LEARNING_C_CPLUSPLUS_LINKEDLIST_H
#define LEARNING_C_CPLUSPLUS_LINKEDLIST_H

typedef struct _node {
    void *data;
    struct _node *next;
} Node;

typedef struct _linkedlist {
    Node *head;
    Node *tail;
} LinkedList;

void initialize_list (LinkedList *list);
int is_empty(LinkedList *list);
int is_singleton(LinkedList *list);

void add_tail(LinkedList *list, void *data);
void delete_next(LinkedList *list, Node *pre);

void initialize_list(LinkedList *list) {
    list->head = NULL;
    list->tail = NULL;
}

int is_empty(LinkedList *list) {
    return list->head == NULL;
}

int is_singleton(LinkedList *list) {
    return (list->head != NULL)
           && (list->head == list->tail);
}

void add_tail(LinkedList *list, void *data) {
    Node *node = malloc(sizeof(Node));
    node->data = data;

    if (is_empty(list)) {
        list->head = node;
    } else {
        list->tail->next = node;
    }

    list->tail = node;
    list->tail->next = list->head;  // circular
}


void delete_next(LinkedList *list, Node *pre) {
    if (is_empty(list))
        return;

    if (is_singleton(list)) {
        list->head = NULL;
        list->tail = NULL;
        free(pre);
        return;
    }

    Node *node = pre->next;
    pre->next = node->next;  // unlink this "node"

    if (node == list->head) {
        list->head = node->next;
    }

    if (node == list->tail) {
        list->tail = pre;
    }

    free(node);
}
#endif //LEARNING_C_CPLUSPLUS_LINKEDLIST_H






