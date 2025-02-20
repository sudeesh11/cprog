#include <stdio.h>

struct Address {
    char street[50];
    char city[20];
};

struct Person {
    char name[20];
    int age;
    struct Address addr;
};

int main() {
    struct Person p = {"Alice", 25, {"123 Main St", "New York"}};
    printf("%s, %d\n", p.name, p.age);
    printf("%s, %s\n", p.addr.street, p.addr.city);
    return 0;
}
