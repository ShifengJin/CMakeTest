#include <stdio.h>
#include "TestAdd.h"
int main(int argc, char** argv){
    int c = TestAdd::add(100, 1);
    printf("test add result : %d\n", c);
    return 0;
}