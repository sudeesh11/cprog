#include <stdio.h>

struct Person {
    char name[20];
    int age;
};

int main() {
    struct Person p = {"Bob", 30};
    printf("%s\n", p.name);
    printf("%d\n", p.age);
    return 0;
}
