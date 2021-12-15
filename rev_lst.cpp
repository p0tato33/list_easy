#include "easy_list.h"
void itc_rev_list(vector <int>& mass)
{
    int c;
    for (int i = 0; i < mass.size() / 2;i++)
    {
        c = mass[mass.size() - 1 - i];
        mass[mass.size() - 1 - i] = mass[i];
        mass[i] = c;
    }
}

void itc_rev_par_list(vector <int>& mass)
{
    int c;
    for (int i = 0; i < (mass.size() - mass.size() % 2);i += 2)
    {
        c = mass[i];
        mass[i] = mass[i + 1];
        mass[i + 1] = c;
    }
}
