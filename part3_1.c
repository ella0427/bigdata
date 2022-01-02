#include <stdio.h>

int main(){
    int var1;
    int var2;

    var1 = 10;
    var2 = 30;

    printf("var1 %d, var2 %d\n", var1, var2);

    var1 = var2;
    printf("var1 %d, var2 %d\n", var1, var2);
    return 0;
}

