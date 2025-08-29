#include "ex01.h"

void add(myclass *obj,int i)
{
    string line;
    cout << " enter by order,  first name, last name, nickname, phone number, and darkest secret" << endl;
    getline(cin, line);

    istringstream iss(line);

    string arg1, arg2,arg3,arg4,arg5;

    iss >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;

    obj[i].firs_name = arg1;
    obj[i].last_name = arg2;
    obj[i].nickname =  arg3;
    obj[i].phone_number = arg4;
    obj[i].dark_secret =  arg5;
    obj[i].index = i;
    return ;
}

void search(myclass *obj)
{
    int i =1;
    cout << setw(10) << "Index" << "|"
    << setw(10) << "First Name" << "|"
    << setw(10) << "Last Name" << "|"
    << setw(10) << "Nickname" << endl;
    while(i < 8 && obj[i].index != -1)
    {
        cout << setw(10) << i << "|"
        << setw(10) << obj[i].firs_name << "|"
        << setw(10) << obj[i].last_name<< "|"
        << setw(10) <<  obj[i].nickname << endl;
        i++;
    }
    cout << "contact INDEX : " << endl;
    string line;
    getline(cin, line);
    i = stoi(line);
    
    if(i < 9)
    {
        cout << "first name " << obj[i].firs_name << endl;
        cout << "last name : " << obj[i].last_name << endl;
        cout << "nickname : " << obj[i].nickname << endl;
        cout << "phone number : " << obj[i].phone_number << endl;
        cout << "darkest secret : " << obj[i].dark_secret << endl;
    }
    while(i < 9)
        {
            if(obj[i].firs_name == (string)line)
                {
                cout << "first name " << obj[i].firs_name << endl;
                cout << "last name : " << obj[i].last_name << endl;
                cout << "nickname : " << obj[i].nickname << endl;
                cout << "phone number : " << obj[i].phone_number << endl;
                cout << "darkest secret : " << obj[i].dark_secret << endl;
                return ;
                }
                i++;
        }
    return ;
}

int main(int ac, char **av)
{
    int i =1;
    myclass obj[7];
    obj[0].index = -1;
    obj[1].index= -1;
    obj[2].index= -1;
    obj[3].index= -1;
    obj[4].index= -1;
    obj[5].index= -1;
    obj[6].index= -1;
    obj[7].index= -1;
    if(ac < 1)
        {
            cout << "Error :";
        }
    else
    {
       string line;
        while( 1)
        {
            cout << "ENTER COMMAND :";
            getline(cin, line);
            string input(line);
            if(input == (string)"ADD")
            {
                if(i == 9)
                    i =0;
                add(obj,i);
                i++;
            }
            else if(input == (string)"SEARCH")
            {
                if(i == 9)
                    i =0;
                search(obj);
                i++;
            }
            else if(input == (string)"EXIT")
            {   
                cout << "EXIT" << endl;
                return 0;
            }
        }
    }
}