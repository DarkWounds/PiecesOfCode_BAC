#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    char s[250];
    char nume[250];
    cin.getline(s, 250);
    cin.getline(nume, 250);
    int len = 1;
    char c[250];
    char *token = strtok(s, " ;");
    while (token != NULL)
    {
        if (len == 2)
        {
            len = 0;
            //cout << token << endl;
            if ((strcmp(c, nume) == 0))
                cout << token << " ";
        }
        strcpy(c, token);
        len++;
        token = strtok(NULL, " ;");
    }

    return 0;

}
