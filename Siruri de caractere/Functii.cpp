#include <cstring>
#include <iostream>

using namespace std;

int main()
{

    // Lungimea unui sir de caractere folosind strlen. Complexitate O(n).------------------------
    char s[] = "salut";
    int n = strlen(s); // n = 5

    // Echivalent manual:
    int lung = 0;
    while (s[lung] != '\0')
        lung++;

    cout << "Lungimea sirului: " << n << endl;

    // Copierea unui sir de caractere folosind strcpy si strncpy. Complexitate O(n).------------------------
    char src[] = "bac";
    char dest[20];

    strcpy(dest, src); // dest = "bac"
    strncpy(dest, src, 3); // copiaza max 3 caractere
    dest[3] = '\0'; // pune manual terminatorul!

    cout << dest << endl;

    // Concatenarea a doua siruri de caractere folosind strcat si strncat. Complexitate O(n+m).------------------------
    char dest[50] = "Buna ";
    char src[] = "ziua";

    strcat(dest, src); // dest = "Buna ziua"
    strncat(dest, src, 2); // alipeste max 2 caractere

    cout << dest << endl;

    // Compararea a doua siruri de caractere folosind strcmp. Complexitate O(n).------------------------
    char a[] = "ana";
    char b[] = "ion";

    int r = strcmp(a, b);

    if (r == 0) cout << "egale";
    if (r < 0) cout << "a vine inaintea b";
    if (r > 0) cout << "a vine dupa b";

    // Gasirea primei si ultimei aparitii a unui caracter intr-un sir folosind strchr si strrchr. Complexitate O(n).------------------------
    char s[] = "informatica";
    char* p = strchr(s, 'a'); // prima apritie a lui 'a'

    if (p) cout << "gasit la pozitia " << (p - s);

    char* q = strrchr(s, 'a'); // ultima aparitie

    if (q) cout << "ultima la " << (q - s);

    // Gasirea unui subsir intr-un sir folosind strstr. Complexitate O(n*m).------------------------
    char text[] = "bacalaureat info";
    char sub[] = "info";

    char* p = strstr(text, sub);

    if (p)
        cout << "gasit la pozitia " << (p - text);
    else
        cout << "negasit";

    // Impartirea unui sir in tokeni folosind strtok. Complexitate O(n).------------------------
    char s[] = "ana are mere";
    char* token = strtok(s, " "); // primul cuvant

    while (token != NULL) {
        cout << token << "\n";
        token = strtok(NULL, " "); // urmatorul
    }

    // Umplerea unui sir cu un caracter folosind memset. Complexitate O(n).------------------------
    char s[100];
    memset(s, 0, sizeof(s)); // umple cu 0
    memset(s, 'a', 5); // primii 5 bytes = 'a'
    char src[] = "bac";
    char dst[10];
    memcpy(dst, src, strlen(src)+1); // copiaza + '\0'

    cout << s << endl; // "aaaaa"
    cout << dst << endl; // "bac"


    return 0;
}

