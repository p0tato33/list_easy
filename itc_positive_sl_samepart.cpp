#include "easy_list.h"

int itc_positive_list(const vector <int> &mass)
{
    int c = 0;
    for(int i = 0; i < mass.size();i++)
    {
        if(mass[i] > 0)
        {
            c++;        //c++! 
        }
    }
    return c;
}

int itc_sl_list(const vector <int> &mass)
{
    int c = 0;
    for(int i = 1; i < mass.size();i++)
    {
        if(mass[i] > mass[i - 1])
        {
            c++;
        }
    }
    return c;
}

bool itc_same_parts_list(const vector <int> mass)
{
    for(int i = 1; i < mass.size();i++)
    {
        if(mass[i] == mass[i - 1])
        {
            return true;
        }
    }
    return false;
}
