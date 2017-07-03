/* Hello World program */

#include<stdio.h>

main() {
    printf("Hello World! Here's some temperature conversions!\n");
    printf("  F  |  C\n-------------\n");
    for(int f = 0; f <= 300; f+=20) {
    	printf("%4d | %3.1f\n", f, (5.0 / 9.0) * (f - 32));
    }
}