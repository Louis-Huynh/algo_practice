#include "singly_linked.h"

int main()
{
    singly_linked a;
    for (int i = 0; i < 10; i++)
    {
        a.add(i);
    }
    a.print();
    a.insert_at_position(6, 8888);
    a.print();
    a.delete_at_position(6);
    a.print();
    a.delete_back();
    a.print();
}
