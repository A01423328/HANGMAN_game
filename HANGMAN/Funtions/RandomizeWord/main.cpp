#include <iostream>
#include <fstream>

using namespace std;

int Random()
{
    int num;
    int con=-1;
    char c;
    ifstream file;
    file.open("HangManWords.txt");
    while (!file.eof())
    {
        c=file.get();
        if (c=='.')
        {
            con++;
        }
    }
    cout << "Write a random/non-decimal number, from 0 - " << con << endl;
    cin >> num;

    return num;
}

int BrowseWrd(int n)
{
    int tam=-1;
    char punto;
    int con=0;
    char c;

    ifstream file;
    file.open("HangManWords.txt");
    c=file.get();
    while (!file.eof())
    {
       punto=file.get();
       cout << punto << endl;
       if (punto=='.')
       {
           con++;
       }
       else if (con==n)
       {
           while (c!='.')
           {
               c=file.get();
               cout << c;
               tam++;
           }
       }
    }
    file.close();

    return tam;
}

void OutputWord(char palab[],int tam, int n)
{
    char punto;
    int con=0;
    int can=-1;
    char c;

    ifstream file;
    file.open("HangManWords.txt");
    c=file.get();
    while (!file.eof())
    {
       punto=file.get();
       if (punto=='.')
       {
           con++;
       }
       else if (con==n)
       {
           ofstream archpal;
           archpal.open("HangManWord.txt");
           while (c!='.')
           {
               c=file.get();
               can++;
               palab[can]=c;
               cout << palab[can];
           }
           archpal << palab;
           archpal.close();
       }
    }
    file.close();
}

int main()
{
    int randomn;
    int tam;

    randomn=Random();

    tam=BrowseWrd(randomn);

    char palab[tam];

    OutputWord(palab,tam,randomn);

    return 0;
}
