#include <stdio.h>
#include <TestAdd_lib/TestAdd.h>

int main(int argc, char** argv){
    int c = TestAdd::add(100, 11);
    printf("test add result : %d\n", c);
    return 0;
}