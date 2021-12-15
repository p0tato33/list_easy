void itc_rshift_list(vector <int>& mass)
{
    vector <int> newmass;
    newmass = mass;
    int c;
    for (int i = 0; i < mass.size();i++)
    {
        if (i + 1 < mass.size())
        {
            mass[i + 1] = newmass[i];
        }
        else if (i + 1 == mass.size())
            mass[0] = newmass[i];
    }
}


void itc_super_shift_list(vector <int>& mass, int n)
{
    vector <int> newmass;
    newmass = mass;
    int c;
    if (n > 0)
    {
        for (int i = 0; i < mass.size();i++)
        {
            if (i + n < mass.size())
            {
                mass[i + n] = newmass[i];
            }
            else if (i + n >= mass.size())
                mass[i + n - mass.size()] = newmass[i];
        }

    }
    if (n < 0)
    {
        for (int i = 0; i < mass.size();i++)
        {
            if (i + n >= 0)
            {
                mass[i + n] = newmass[i];
            }
            else if (i + n < 0)
                mass[i + n + mass.size()] = newmass[i];
        }
    }

}
