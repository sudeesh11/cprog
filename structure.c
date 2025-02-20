#include <stdio.h>

struct Person {
    char name[20];
    int age;
};

int main() {
    struct Person p = {"Charlie", 35};
    struct Person *ptr = &p;
    printf("%s, %d\n", ptr->name, ptr->age);
    return 0;
}
