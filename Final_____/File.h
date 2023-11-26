#pragma once
#include <fstream>
#include <sstream>
#include "_lib.h"
#include "Fuction.h"

string fname = "C://Users//HALO//Desktop//DSA CHAIN//RestauranList.csv";
string fname2 = "C://Users//HALO//Desktop//DSA CHAIN//HistoryList.csv";

// viet de tu Arr -> File
void writeRestaurantToCSV(string filename, Restaurant ChainArr[])
{
    ofstream file(filename);
    if (!file.is_open()) {
        std::cout << "Không thể mở file!" << std::endl;
        return;
    }


    int i = 0;
    while (ChainArr[i].Capacity != 0)
    {
        file << ChainArr[i].id << "," << ChainArr[i].type << "," << ChainArr[i].Capacity << "," << ChainArr[i].staff << "\n";
        i++;
    }

    file.close();
}


// Tu File -> LinkedList

void readRestaurantFromCSV(string filename) 
{

    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Không thể mở file!" << std::endl;
        return ;
    }

    string line, word;
    stringstream s;
    string id;
    string type;
    int capa;
    int sta;

    // Đọc từng dòng từ file .csv cho đến khi hết dữ liệu
    while (getline(file, line)) 
    {
        s.clear();
        
        s.str(line);

        getline(s, word, ',');
        id = word;

        getline(s, word, ',');
        type = word;

        getline(s, word, ',');
        capa = stoi(word);

        getline(s, word, ',');
        sta = stoi(word);

        makeRestaurant(Chain,id,type,capa,sta);
    }

    file.close();

}

void ReadHistoryListCSV(string filename)
{
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Không thể mở file!" << std::endl;
        return;
    }

    string line, word;
    stringstream s;
    string Resid;
    string phonenumber;
    string cusname;
    string Tableid;
    int cusnum;
    int dayT;
    int monthT;
    int yearT;
 
      
    while (getline(file, line))
        {
            s.clear();

            s.str(line);

            getline(s, word, ',');
            Resid = word;

            getline(s, word, ',');
            phonenumber = word;

            getline(s, word, ',');
            cusname = stoi(word);

            getline(s, word, ',');
            Tableid = word;

            getline(s, word, ',');
            cusnum = stoi(word);


            getline(s, word, ',');
            dayT = stoi(word);


            getline(s, word, ',');
            monthT = stoi(word);


            getline(s, word, ',');
            yearT = stoi(word);
            

            StamentSetTable(Chain, History, TotalMoney, Resid, phonenumber, cusname, Tableid, cusnum, dayT, monthT, yearT);
        }

    file.close();
}

void writeHistoryToCSV(string filename, Record HistoryArr[])
{
    ofstream file(filename);
    if (!file.is_open()) {
        std::cout << "Không thể mở file!" << std::endl;
        return;
    }


    int i = 0;
    while (HistoryArr[i].dayT != 0)
    {
        file << HistoryArr[i].Resid << "," << HistoryArr[i].phonenumber<< "," << HistoryArr[i].cusname << "," << HistoryArr[i].tableid << HistoryArr[i].cusnum << "," << HistoryArr[i].dayT << "," << HistoryArr[i].mothT << "," << HistoryArr[i].yearT << "\n";
        i++;
    }

    file.close();
}
