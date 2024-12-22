#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

void print_coordinate(Point p);

Point add_struct(Point p1, Point p2);

bool is_struct_equal(Point p1, Point p2);

int main(void) {
    Point p1 = {1, 2};
    Point p2 = {3, 4};

    print_coordinate(p1);

    Point np = add_struct(p1, p2);

    if (is_struct_equal(p1, p2)) {
        puts("Equal");
    } else {
        puts("Not Equal");
    }
    
    return 0;
}

void print_coordinate(Point p) {
    printf("x = %d, y = %d\n", p.x, p.y);
}

Point add_struct(Point p1, Point p2) {
    Point new_p = {p1.x + p2.x, p1.y + p2.y};
    return new_p;
}

bool is_struct_equal(Point p1, Point p2) {
    if (p1.x == p2.x && p1.y == p2.y) {
        return true;
    } else {
        return false;
    }
}