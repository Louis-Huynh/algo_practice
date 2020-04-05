#pragma once
#include "node.h"
#include <stdio.h>

struct singly_linked
{

    singly_linked()
    {
        head = nullptr;
        tail = nullptr;
    }

    void add(int value);

    //insert
    void insert_front(int value);
    void insert_end(int value);
    void insert_at_bigger(int value);
    void insert_at_position(int pos, int value);

    //delete
    void delete_front();
    void delete_back();
    void delete_at_position(int pos);

    void print();

private:
    node *head, *tail;
};
