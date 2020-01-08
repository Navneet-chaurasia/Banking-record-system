#include<bits/stdc++.h>
using namespace std;

#ifndef ACCOUNT_QUERY_H
#define ACCOUNT_QUERY_H

class account_query
{
private:
    char account_number[20];
    char firstName[10];
    char lastName[10];
    float total_Balance;
public:
    void read_data();
    void show_data();
    void write_rec();
    void read_rec();
    void search_rec();
    void edit_rec();
    void delete_rec();
};

#endif // ACCOUNT_QUERY_H
