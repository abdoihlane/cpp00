#include <iostream>
using namespace std;

void to_uppercase(char *sa)
{
    int i =0;
    while(sa[i])
    {
        if(sa[i] >= 'a' && sa[i] <= 'z')
            sa[i] = sa[i] - 32;
        i++;
    }
}

int main(int ac, char **av)
{
    int i =1;
    if(ac == 1)
        {
            cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
            return 0;
        }
    else
    {
        while(av[i])
            {
                to_uppercase(av[i]);
                cout << av[i] << " ";
                i++;
            }
            cout << endl;
    }
    return 0;
}