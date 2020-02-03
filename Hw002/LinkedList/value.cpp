// Kelby Hubbard
// CS202
// Feb. 2, 2020
// Hw002 -- Linked List with shared_ptr<T>

#include "value.hpp"

void pushQueue(list<shared_ptr<Value>>& list, const Value& dat)
{
  list.push_back(make_shared<Value>(dat));
}

void popQueue(list<shared_ptr<Value>>& list)
{
  list.pop_front();
}

void pushStack(list<shared_ptr<Value>>& list, const Value& dat)
{
  pushQueue(list, dat);
}

void popStack(list<shared_ptr<Value>>& list)
{
  list.pop_back();
}

void insert(list<shared_ptr<Value>>& list, const Value& dat,
   list<shared_ptr<Value>>::iterator n)
{
     list.insert(n, make_shared<Value>(dat));
}

bool find(const list<shared_ptr<Value>>& list, const Value& dat)
{
  for (auto i : list)
  {
    if (i->data == dat.data)
    {
      return true;
    }
    return false;
  }
}

void printList(list<shared_ptr<Value>>& list)
{
  for (auto i : list)
  {
    cout << i->data << " ";
  }
  cout << endl;
}
