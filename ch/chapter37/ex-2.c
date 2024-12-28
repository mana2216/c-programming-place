#include <stdio.h>

typedef struct point {
    int x;
    int y;
    struct point *next;
} Point;

void print_struct(Point *head);

int main(void) {
    Point p1 = {1, 1, NULL};
    Point p2 = {2, 2, NULL};
    Point p3 = {3, 3, NULL};
    Point p4 = {4, 4, NULL};
    Point p5 = {5, 5, NULL};

    p1.next = &p2;
    p2.next = &p3;
    p3.next = &p4;
    p4.next = &p5;
    p5.next = &p1;

    print_struct(&p1);
    
    return 0;
}

void print_struct(Point *head) {
    Point *p = head;
    do {
        printf("%d, %d\n", p->x, p->y);
        p = p->next;
    } while (p != head);
}