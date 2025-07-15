#include <stdio.h>
#include <limits.h>

int main(){
    printf("1- int max: %d\n",INT_MAX); // 2147483647
    printf("2- int min: %d\n",INT_MIN); //-2147483648
    printf("-----\n");
    printf("3- %d\n",INT_MAX+INT_MAX);  // -2
    printf("4- %d\n",INT_MIN+INT_MIN);  // 0
    printf("-----\n");
    printf("5- %d\n",-INT_MAX-1);       // INT_MIN
    printf("6- %d\n",INT_MAX+1);        // INT_MIN
    printf("7- %d\n",-INT_MIN-1);       // INT_MAX
    printf("8- %d\n",INT_MIN-1);        // INT_MAX
    printf("-----\n");
}