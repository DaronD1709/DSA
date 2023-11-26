#pragma once
#include "_lib.h"
#include "_Struck.h"
#include "CLinkedList.h"
#include "CStack.h"

int MaxTable = 20;
int moneyperone = 200000;
double TotalMoney;
LinkedList<Restaurant> Chain;
Stack<Record> History;
Restaurant ChainArr[100];
Record HistoryArr[100];


    void makeRestaurant(LinkedList<Restaurant>& Chain, string id, string type, int capacity, int staff)
    {
        Restaurant tempR;
        tempR.id = id;
        tempR.type = type;
        tempR.Capacity = capacity;
        tempR.staff = staff;
        for (int i = 1; i <= MaxTable; i++)
        {
            tempR.Tablearr[i].id = to_string(i) + id;
        }
        Chain.insert(tempR);
    }
    // in mau
    void printRestaurant(Restaurant a)
    {
        cout << a.id << a.Capacity << a.type << a.staff;
        for (int i = 1; i < MaxTable; i++)
        {
            cout << a.Tablearr[i].id;
            cout << a.Tablearr[i].statement;
        }
    }
    // datban
    void StamentSetTable(LinkedList<Restaurant> Chain, Stack<Record>& History, double& Totalmoney, string Resid, string phonenumber,string cusname, string Tableid, int cusnum, int dayT, int mothT, int yearT)
    {
        Restaurant a;
        a.Capacity = Chain.findNodeByID(Resid)->data.Capacity;
        a.id = Chain.findNodeByID(Resid)->data.id;
        for (int i = 1; i <= MaxTable; i++)
        {
            a.Tablearr[i] = Chain.findNodeByID(Resid)->data.Tablearr[i];
            if (a.Tablearr[i].id == Tableid)
            {
                a.Tablearr[i].statement = true;
            }
        }

        a.type = Chain.findNodeByID(Resid)->data.type;
        a.profit = Chain.findNodeByID(Resid)->data.profit + cusnum * moneyperone;
        a.staff = Chain.findNodeByID(Resid)->data.staff;
        Chain.Replace(Resid, a);

        // add
        Record u;
        u.cusname = cusnum;
        u.phonenumber = phonenumber;
        u.AddorRemove = true;
        u.cusnum = cusnum;
        u.dayT = dayT;
        u.money = cusnum * moneyperone;
        u.mothT = mothT;
        u.tableid = Tableid;
        u.yearT = yearT;
        History.push(u);

        // money
        Totalmoney += cusnum * moneyperone;
    }

    // huyban
    void StamentDeleteTable(LinkedList<Restaurant>& Chain, Stack<Record>& History, double& Totalmoney, string Resid,string cusname,string phonenumber, string Tableid, int cusnum, int dayT, int mothT, int yearT)
    {
        Restaurant a;
        a.Capacity = Chain.findNodeByID(Resid)->data.Capacity;
        a.id = Chain.findNodeByID(Resid)->data.id;
        for (int i = 1; i <= MaxTable; i++)
        {
            a.Tablearr[i] = Chain.findNodeByID(Resid)->data.Tablearr[i];
            if (a.Tablearr[i].id == Tableid)
            {
                a.Tablearr[i].statement = false;
            }
        }

        a.type = Chain.findNodeByID(Resid)->data.type;
        a.profit = Chain.findNodeByID(Resid)->data.profit - cusnum * moneyperone;
        a.staff = Chain.findNodeByID(Resid)->data.staff;
        Chain.Replace(Resid, a);

        // add
        Record u;
        u.cusname = cusname;
        u.phonenumber = phonenumber;
        u.AddorRemove = 0;
        u.cusnum = cusnum;
        u.money = -(cusnum * moneyperone);
        u.dayT = dayT;
        u.mothT = mothT;
        u.tableid = Tableid;
        u.yearT = yearT;
        History.push(u);

        // money
        Totalmoney -= cusnum * moneyperone;
    }
    // tinh tien theo quy
    double moneybymoth(Stack<Record>& History, int moth1, int moth2, int moth3)
    {
        return History.getTotalProfit(moth1, moth2, moth3);
    }

    double moneystaffbymoth(Stack<Record>& History, int moth1, int moth2, int moth3)
    {
        return History.getTotalProfit(moth1, moth2, moth3) * 0.1;
    }


    double FinalProfitbymoth(Stack<Record>& History, int moth1, int moth2, int moth3)
    {
        return moneybymoth(History, moth1, moth2, moth3) * 0.9 - moneystaffbymoth(History, moth1, moth2, moth3);
    }

    void ToArray(LinkedList<Restaurant>& Chain, Restaurant ChainArr[])
    {
        Chain.ToArray(ChainArr);
    }

    void ToArrayHistory(Stack<Record>& History, Record HistoryArr[])
    {
        History.ToArrayHistory(HistoryArr);
    }

    static std::string toStandardString(System::String^ string)
    {
        using System::Runtime::InteropServices::Marshal;
        System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
        char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
        std::string returnString(charPointer, string->Length);
        Marshal::FreeHGlobal(pointer);
        return returnString;
    }
