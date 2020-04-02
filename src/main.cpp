#include <iostream>
#include "hello.h"
#include "binary_tree.h"
#include "node.h"

int main()
{
    hello a;
    a.say_hello();

    binary_tree abe;
    for (int i = 0; i < 10; i++)
    {
        abe.insert(i);
    }
    abe.print();
}