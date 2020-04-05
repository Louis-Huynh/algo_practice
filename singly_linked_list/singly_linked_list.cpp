#include <stdio.h>

struct node
{
    int value;
    node *next;
};

struct linky
{

    linky()
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
    void delete_at_position(int pos, int value);

    void print();

private:
    node *head, *tail;
};

void linky::add(int value)
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

void linky::insert_front(int value)
{
    node *temp = new node();
    temp->value = value;
    temp->next = head;
    head = temp;
}

void linky::insert_end(int value)
{
    node *temp = new node();
    temp->value = value;
    temp->next = nullptr;
    tail->next = temp;
    tail = temp;
}

void linky::insert_at_bigger(int value)
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

void linky::insert_at_position(int pos, int value)
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

void linky::delete_front()
{
    node *temp = new node();
    temp = head;
    head = head->next;
    delete temp;
}

void linky::delete_back()
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

void linky::print()
{
    node *pt = head;

    while (pt != nullptr)
    {
        printf("%d", pt->value);
        printf(pt->next == nullptr ? "\n\n" : "->");
        pt = pt->next;
    }
}
