#ifndef VALUE_HPP_
#define VALUE_HPP_

#include <iostream>
using std::cout;
using std::endl;
#include <list>
using std::list;
#include <memory>
using std::make_shared;
using std::shared_ptr;
#include <algorithm>
using std::find;
#include <catch>

struct Value
{
  int data;
};

//Queue First-in First-out
void pushQueue(list<shared_ptr<Value>>& list, const Value& dat);

void popQueue(list<shared_ptr<Value>>& list);

//Stack Last-in First-out
void pushStack(list<shared_ptr<Value>>& list, const Value& dat);

void popStack(list<shared_ptr<Value>>& list);

//Insert
void insert(list<shared_ptr<Value>>& list, const Value& dat,
   list<shared_ptr<Value>>::iterator n);

//Find
bool find(const list<shared_ptr<Value>>& list, const Value& dat);

//Print
void printList(list<shared_ptr<Value>>& list);







#endif
