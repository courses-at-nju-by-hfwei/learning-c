// File: linkedlist.c
// Created by hengxin on 17-11-8.
// Implementation of a circular linked list

#ifndef LEARNING_C_CPLUSPLUS_LINKEDLIST_H
#define LEARNING_C_CPLUSPLUS_LINKEDLIST_H

/**
 * (1) "_node": structure tag; it is optional.
 * (2) This struct declaration defines a type;
 *  it does not reserve any space in memory
 * (3) The type is called "struct _node", not "_node".
 * (4) typedef introduces another type name "Node".
 */
typedef struct _node {
    void *data;
    struct _node *next;
} Node;

typedef struct _linkedList{
    Node *head;
    Node *tail;
} LinkedList;

// function pointer
typedef int (*fptr_compare)(void *data1, void *data2);
typedef void (*fptr_show)(void *data);

void initialize_list(LinkedList *list);
int is_empty(LinkedList *list);
int is_singleton(LinkedList *list);

void add_head(LinkedList *list, void *data);  // not implemented yet
void add_tail(LinkedList *list, void *data);

void insert(LinkedList *list, Node *pre);   // not implemented yet

void delete_node(LinkedList *list, Node *node);
void delete_next(LinkedList *list, Node *pre);

void *get_node(LinkedList *list, fptr_compare, void *data);

void show(LinkedList *list, fptr_show show);

void initialize_list(LinkedList *list) {
    list->head = NULL;
    list->tail = NULL;
}

int is_empty(LinkedList *list) {
    return list->head == NULL;
}

int is_singleton(LinkedList *list) {
    return (list->head != NULL) && (list->head == list->tail);
}

/**
 * Add a node with @param data to the tail of this @param list.
 */
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

/**
 * Delete the node next to @param pre.
 */
void delete_next(LinkedList *list, Node *pre) {
    if (is_empty(list))
        return;

    if (is_singleton(list)) {
        if (pre == list->head) {
            list->head = NULL;
            list->tail = NULL;
        }
        return;
    }

    // In the following, list contains at least two nodes.
    Node *node = pre->next;
    pre->next = node->next; // unlink this "node"

    if (node == list->head) {
        list->head = node->next;
    }

    if (node == list->tail) {
        list->tail = pre;
    }

    free(node); // don't forget this
}

/**
 * Delete the @param node from the @param list.
 */
void delete_node(LinkedList *list, Node *node) {
    if (is_empty(list))
        return;

    if (is_singleton(list)) {
        list->head = NULL;
        list->head = NULL;
        free(node);
        return;
    }

    // In the following, @param list contains at least two nodes.
    if (node == list->head) {
        list->head = list->head->next;
        list->tail->next = list->head;  // circular
        free(node);
    } else {    // not "else if (node == list->tail)"
        Node *pre = list->head;
        Node *cur = list->head->next;
        while (cur != node && pre != list->tail) {
            pre = cur;
            cur = pre->next;
        }

        if (pre != list->tail) {    // cur == node to be deleted
            pre->next = cur->next;
            if (cur == list->tail) {
                list->tail = pre;
            }
            free(node);
        } // else: no such @param node
    }
}

/**
 * @param list
 * @param compare
 * @param data
 * @return a pointer to the node containing a specific data item;
 *  NULL if no such node is found
 */
Node *get_node(LinkedList *list, fptr_compare compare, void *data) {
    if (is_empty(list))
        return NULL;

    Node *cur = list->head;
    while (compare(cur->data, data) != 0 && cur != list->tail) {
        cur = cur->next;
    }

    if (cur != list->tail)
        return cur;
    else if (compare(cur->data, data) != 0) {
        return NULL;
    } else {
        return cur;
    }
}

void show(LinkedList *list, fptr_show show) {
    puts("\nThe linkedlist contains the following data: \n");

    if (is_empty(list)) {
        puts("The linkedlist is empty.");
        return;
    }

    Node *cur = list->head;
    while (cur != list->tail) {
        show(cur->data);
        cur = cur->next;
    }
    show(cur->data);    // show the tail node individually

    puts("");
}

#endif //LEARNING_C_CPLUSPLUS_LINKEDLIST_H
