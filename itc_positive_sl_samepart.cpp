#include "easy_list.h"

int itc_positive_list(const vector <int> &mass){
    int sz = mass.size();
    int c = 0;
    if(sz != 0){
        for(int i = 0; i < sz; i++){
            if(mass[i] >= 0){
                c++;
            }
        }
    }
    return c;
}
int itc_sl_list(const vector <int> &mass) {
    if (mass.size() != 0){
        int c = 0;
        for (int i = 1; i < mass.size(); i++){
            if (mass[i] > mass[i - 1]){
                c++;
            }
        }
        return c;
    }
}

bool itc_same_parts_list(const vector <int> &mass){
    if (mass.size() != 0){
        for (int i = 1; i < mass.size(); i++){
            if (mass[i] >= 0 && mass[i - 1] >= 0)
                return true;
            if (mass[i] < 0 &&  mass[i - 1] < 0)
                return true;
        }
        return false;
    }

}
