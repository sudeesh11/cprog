#include <stdio.h>
struct Point {
    int x, y;
};
int main() {
    struct Point p = {3, 4}, *ptr = &p;
    printf("Point: %d, %d", ptr->x, ptr->y);
    return 0;
}
