#pragma once
#include <fstream>
#include <sstream>
#include "_lib.h"
#include "Fuction.h"

string fname = "C://Users//HALO//Desktop//DSA CHAIN//RestauranList.csv";

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
