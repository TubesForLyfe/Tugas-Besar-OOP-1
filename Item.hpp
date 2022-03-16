#ifndef _ITEM_HPP_
#define _ITEM_HPP_

#include <iostream>
#include <string>

using namespace std;

class Item {
    private:
        const int id;
        string name;
        string type;
    public:
        Item();
        Item(int id, string name, string type);
        int getid() const;
        string getname();
        string gettype();
        virtual int getquantity();
        virtual void add(int _quantity);
        virtual bool isFull();
        virtual bool isEmpty();
};

#endif