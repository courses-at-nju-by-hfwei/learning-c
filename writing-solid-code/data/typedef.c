// File: typedef.c
// Created by hengxin on 17-10-9.
// Suggestion 6: Using typedef

#include <stdio.h>

// Using typedef with structure
typedef struct Point {
    double x;
    double y;
    double z;
} Point;

// Using typedef with structure pointers
typedef struct Point *ptr_point;

/**
 * Error: Cannot resolve the type "pNode"
 */
//typedef struct tagNode {
//    char *pItem;
//    pNode pNext;
//} pNode;

struct tagNode {
    char *pItem;
    struct tagNode *pNext;
};

typedef struct tagNode *pNode;

// Using typedef with function pointers
typedef int (*MathFunc) (float, int);

int take_right(float l, int r) {
    return r;
}

int call_a_func(MathFunc call_this) {
    int output = call_this(5.5, 7);
    return output;
}

int main() {
    Point oPoint1 = { .x = 100, .y = 100, .z = 0 };
    Point oPoint2;

    printf("oPoint1 is: (%f, %f, %f)\n",
           oPoint1.x, oPoint1.y, oPoint1.z);

    printf("oPoint2 is: (%f, %f, %f)\n",
           oPoint2.x, oPoint2.y, oPoint2.z);

    ptr_point point = &oPoint1;
    printf("point is a pointer: %p which points to a structure (%f, %f, %f)\n",
        point, point->x, point->y, point->z);

    point->x = 200;
    printf("After modification, point is a pointer: %p which points to a structure (%f, %f, %f)\n",
           point, point->x, point->y, point->z);

    // Using typedef with function pointers
    printf("The result is: %d\n", call_a_func(take_right));
    return 0;
}
