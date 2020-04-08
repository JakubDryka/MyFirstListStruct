#pragma once
#include <iostream>
template <typename type>

class list
  {
    public:
    int size1 = 0;
      struct element
      {
       type data;
        element *next;
        element()
        {
         next = 0;
         }
       };
     element *FirstElement;
     void pushBack(type input)
      {
        element *NewEl = new element;
        NewEl -> data = input;
        if(FirstElement == 0)
        {
          FirstElement = NewEl;
        }
        else
        {
          element *temporarypointer = FirstElement;

          while(temporarypointer -> next)
          {
            temporarypointer = temporarypointer -> next;
          }
          temporarypointer -> next = NewEl;
          NewEl -> next = 0;
        }

      }
     void print()
     {
        element *temporary = FirstElement;
        while(temporary)
        {
          std::cout<<temporary -> data;
          temporary = temporary -> next;
        }

     }
     type size()
     {
        element *CounterPointer = FirstElement;
        while(CounterPointer)
        {
          size1++;
          CounterPointer = CounterPointer -> next;
        }
        return size1;
     }

     list()
     {
      FirstElement = 0;
     };
  };
