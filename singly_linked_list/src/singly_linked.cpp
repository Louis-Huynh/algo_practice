#include "singly_linked.h"

void singly_linked::add(int value)
{
    node *temp = new node();
    temp->value = value;
    temp->next = nullptr;
    if (head == nullptr)
    {
        head = temp;
        tail = temp;
        temp = nullptr;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

void singly_linked::insert_front(int value)
{
    node *temp = new node();
    temp->value = value;
    temp->next = head;
    head = temp;
}

void singly_linked::insert_end(int value)
{
    node *temp = new node();
    temp->value = value;
    temp->next = nullptr;
    tail->next = temp;
    tail = temp;
}

void singly_linked::insert_at_bigger(int value)
{
    bool stop = false;
    node *pt = new node();
    pt = head;
    while (!stop)
    {
        if (pt->value >= value)
        {
            node *temp = new node();
            temp->value = value;
            temp->next = pt->next;
            pt->next = temp;
            stop = true;
        }
        pt = pt->next;
    }
}

void singly_linked::insert_at_position(int pos, int value)
{
    node *pt = new node();
    pt = head;
    for (int i = 1; i < pos - 1; i++)
    {
        pt = pt->next;
    }
    node *temp = new node();
    temp->value = value;
    temp->next = pt->next;
    pt->next = temp;
}

void singly_linked::delete_front()
{
    node *temp = new node();
    temp = head;
    head = head->next;
    delete temp;
}

void singly_linked::delete_back()
{
    node *pt = new node();
    node *pre_pt = new node();
    pt = head;
    while (pt->next != nullptr)
    {
        pre_pt = pt;
        pt = pt->next;
    }
    tail = pre_pt;

    pre_pt->next = nullptr;
    delete (pt);
}

void singly_linked::delete_at_position(int pos)
{
    node *curr = new node();
    node *prev = new node();
    curr = head;
    for (int i = 0; i < pos - 1; i++)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
}

void singly_linked::print()
{
    node *pt = head;

    while (pt != nullptr)
    {
        printf("%d", pt->value);
        printf(pt->next == nullptr ? "\n\n" : "->");
        pt = pt->next;
    }
}
