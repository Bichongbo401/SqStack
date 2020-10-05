//
// Created by 14035 on 2020/10/5.
//

#ifndef UNTITLED56_SQSTACK_H
#define UNTITLED56_SQSTACK_H
#define DEFAULT_SIZE 100
#include <iostream>
using namespace std;
template <class type> class SqStack {
protected:
    int count;
    int maxSize;
    type* elems;

public:
    explicit SqStack(int size = DEFAULT_SIZE);
    virtual ~SqStack();
    int Length() const;
    bool Empty() const;
    void Clear();
    void Traverse(void(*visit)(const type&)) const;
    bool Push(const type& e);
    bool Top(type& e) const;
    bool Pop(type& e);
    //复制构造函数、重载

};


template <class type>
SqStack<type>::SqStack(int size)
{
    maxSize = size;
    elems = new type[maxSize];
    count = 0;
}

template <class type>
SqStack<type>::~SqStack()
{
    delete[]elems;
}
template <class type>
int SqStack<type>::Length() const
{
    return count;
}
template <class type>
bool SqStack<type>::Empty() const
{
    return count == 0;
}
template <class type>
void SqStack<type>::Clear()
{
    count = 0;
}

template <class type>
void SqStack<type>::Traverse(void (*visit)(const type&)) const
{
    for (int pos = 1; pos <= Length(); pos++)
    {
        (*visit)(elems[pos - 1]);
    }
}

template <class type>
bool SqStack<type>::Push(const type& e)
{
    if (count == maxSize)
    {
        return false;
    }
    else
    {
        elems[count++] = e;
        return true;
    }
}

template <class type>
bool SqStack<type>::Top(type& e) const
{
    if (Empty())
    {
        return false;
    }
    else
    {
        e = elems[count - 1];
        return true;
    }
}
template <class type>
bool SqStack<type>::Pop(type& e)
{
    if (Empty())
    {
        return false;
    }
    else
    {
        e = elems[count - 1];
        count--;
        return true;
    }
}
#endif // UNTITLED56_SQSTACK_H
