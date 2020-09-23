#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int Tamano()
{
    ifstream file;
    file.open("HangManWord.txt");
    char c;
    int tam=0;
    do
    {
        c=file.get();
        tam++;
    }
    while (c!='.');
    file.close();

    return tam;
}

int SizeOfWord(char palab[],int tam)
{
    for (int con=0; con<tam; con++)
    {
        if (palab[con]=='.')
        {
            return con;
        }
    }
}

int Palabra(char palab[],int &tam)
{
   ifstream file;
    file.open("HangManWord.txt");
    int space=-1;
    char c;
    for (int con=0; con<tam; con++)
    {
        c=file.get();
        cout << c << "  " << con << endl;
        palab[con]=c;
        if (c=='_')
        {
           space=con;
        }
        else if (palab[con]=='.')
        {
            tam=con;
        }
    }
    file.close();

    return space;
}

int main()
{
    int tam;
    int space;

    tam=Tamano();
    cout << tam << endl;

    char pal[tam];
    cout << pal << endl;

    space=Palabra(pal,tam);
    cout << pal << endl;
    cout << "There's a space in: " << space << endl;

    for (int con=0; con<tam; con++)
    {
        cout << pal[con];
    }

    return 0;
}
