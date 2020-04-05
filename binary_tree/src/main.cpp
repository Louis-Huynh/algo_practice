#include <iostream>
#include "hello.h"
#include "binary_tree.h"
#include "node.h"

int main()
{
    hello a;
    a.say_hello();

    binary_tree abe;
    abe.insert(4);
    abe.insert(2);
    abe.insert(7);
    abe.insert(1);
    abe.insert(3);
    std::cout << abe.search(7)->value << "\n";

    abe.print();
}