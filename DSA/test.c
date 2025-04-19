#include<stdio.h>

int main()
{
    int var = 10; // normal variable
    int v = 25;
    printf("%d\n", var);

    var = 20; // changing the value of variable
    printf("%d\n", var);

    const int var2 = 15; //const int works the same. value cannot be changed
    printf("%d\n", var2);

    int *p = &var; //normal pointer
    printf("%d\n", *p);
    // p = &var2; //This is not possible because var2 is const and we need pointer to a constant to store the address
    printf("%d\n", p); 

    int const *p2 = &var2; // a pointer to a const
    printf("%d\n", *p2); 
    p2 = &var;
    printf("%d\n", *p2); 

    int * const p3 = &var; // a const pointer to a variable
    printf("%d\n", *p3);
    *p3 = v;
    printf("%d\n", *p3);

    const int * const p4 = &var2; // const pointer to a const variable
    printf("%d\n", *p4);

}