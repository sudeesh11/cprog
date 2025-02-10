#include <stdio.h>

int main() {
    int x, y, large,small,sum = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    large=x>y?y:x;
    small=x>y?x:y;
    
    for (int i = large; i <= small; i++) {
	 if (i % 2 == 0) {
        sum += i;
        }
    }

//    if (x > y) {
//        int temp = x;
//        x = y;
//        y = temp;
//    }
//    
//    for (int i = x; i <= y; i++) {
//        if (i % 2 == 0) {
//            sum += i;
//        }
//    }
    
    printf("Sum of even numbers between %d and %d is: %d\n", x, y, sum);
    return 0;
}
