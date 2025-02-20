#include <stdio.h>

struct Person {
    char name[20];
    int age;
};

void printPerson(struct Person p) {
    printf("%s, %d\n", p.name, p.age);
}

int main() {
    struct Person p = {"Bob", 30};
    printPerson(p);
    return 0;
}
