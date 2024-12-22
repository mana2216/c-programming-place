#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point p1;
    Point p2;
    Point p3;
    Point p4;
} Rect;

int main(void) {
    Rect rect = {{1,2}, {2,3}, {3,4}, {5,6}};

    printf("(%d,%d), (%d,%d), (%d,%d), (%d,%d)\n",
            rect.p1.x, rect.p1.y,
            rect.p2.x, rect.p2.y,
            rect.p3.x, rect.p3.y,
            rect.p4.x, rect.p4.y
            );
    
    return 0;
}