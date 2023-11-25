#pragma once
#include "_lib.h"
struct Table
{
    string id;
    bool statement = 0;
};
struct Restaurant
{
    string id;
    string type;
    int Capacity;
    Table Tablearr[30];
    double profit;
    int staff;

};
struct Record
{
    string tableid;
    int cusnum;
    int money;
    int dayT;
    int mothT;
    int yearT;
    bool AddorRemove;
};