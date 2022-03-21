#include <iostream>
#include "Item.hpp"
#include "Tool.hpp"
#include "NonTool.hpp"
#include <vector>

#ifndef LIBITEM_HPP_
#define LIBITEM_HPP_

using namespace std;

class libitem {
    private:
    vector<Item> tools;
    vector<Item> nontools;
    public:
    libitem();
    void addItem(int ID, string name, string type, string category);
    NonTool searchnontoolsbyname(string name) const;
    NonTool searchnontoolsbyid(int id) const;
    Tool searchtoolsbyname(string name) const;
    Tool searchtoolsbyid(int id) const;
    void printlibitem();
};

#endif