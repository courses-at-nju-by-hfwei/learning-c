// File: struct-point.c
// Created by hengxin on 17-11-9.
// Illustration of "struct".

#include <stdio.h>

struct point {
    int x;
    int y;
};

typedef struct _point {
    int x;
    int y;
} Point;

typedef struct label_point {
    char c;
    int x;
    int y;
} LPoint;

typedef struct _rect {
    Point lup;
    Point rlp;
} Rect;

void show_point(struct point p);
void update_Point(Point *p, int x, int y);
Point add(Point p1, Point p2);

int main(void) {
    // declaration and initialization using "struct point"
    struct point p1;
    show_point(p1);

    p1.x = 1;
    p1.y = 1;
    show_point(p1);

    struct point p2 = { 2, 2 };
    show_point(p2);

    struct point p3 = {.x = 3, .y = 3};
    show_point(p3);

    /**
     * Using "Point"
     */
    Point p4 = {.x = 4, .y = 4};
    // ERROR: show_point(p4)

    // array
    Point points[4];

    // pointer to struct
    Point *p = &p4;
    p->x = 44;
    p->y = 44;
    update_Point(p, 55, 55);
    printf("%d, %d\n", p->x, p->y);

    /**
     * LPoint: test "sizeof" on struct
     */
    LPoint lp1 = {.c = 'a', .x = 1, .y = 1};
    printf("The size of lp1 is: %lu.\n", sizeof(lp1));

    /**
     * no struct tag
     */
    struct {
        int x;
        int y;
    } p5 = {5, 5};

    printf("%d, %d\n", p5.x, p5.y);

    /**
     * Rect: nested struct
     */
    Rect r1 = {.lup = p4, .rlp = p4};
    r1.lup.x = 5;
}

void show_point(struct point p) {
    printf("%d, %d\n", p.x, p.y);
}

void update_Point (Point *p, int x, int y) {
    p->x = x;
    p->y = y;
}

Point add(Point p1, Point p2) {
    Point p = {
            .x = p1.x + p2.x,
            .y = p1.y + p2.y
    };

    return p;
}
