#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int GetAllWords(int lines)
{
    int characteres=0;
    int con=0;
    char c;
    ifstream maspalab;
    maspalab.open("HangManWords.txt");
    while (con<lines)
    {
        c=maspalab.get();
        characteres++;
        if (c=='.')
        {
            con++;
        }
    }
    maspalab.close();

    return characteres;
}

void SaveAllWords(char hangmanwords[], int tam)
{
    char c;
    ifstream hangwords;
    hangwords.open("HangManWords.txt");
    for (int con=0; con<tam; con++)
    {
        c=hangwords.get();
        hangmanwords[con]=c;
    }
    hangwords.close();
}

void AddHangManWords(char hangmanwords[], string agregar, int tam)
{
    ofstream adding;
    adding.open("HangManWords.txt");
    for (int con=0; con<tam; con++)
    {
        adding << hangmanwords[con];
    }
    adding << endl << agregar;
    adding.close();
}

int EndofHangManWords()
{
    int con=0;
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
    cout << con << endl << endl;

    return con;
}

int main()
{
    int lines;
    lines=EndofHangManWords();

    int palabras;
    palabras=GetAllWords(lines);
    cout << palabras << endl;

    char hangmanwords[palabras];

    SaveAllWords(hangmanwords, palabras);
    cout << hangmanwords << endl;

    string agregar;
    cout << endl << "Write the word you wish to add." << endl;
    cout << "Please check the conditions to add a word: " << endl << endl;
    cout << "1.Don't write capital letters." << endl;
    cout << "2.If your word contains a space, use this character in exchange: _ " << endl;
    cout << "3.Add a period '.' at the end of the letter." << endl << endl;
    cin >> agregar;
    cout << agregar;

    AddHangManWords(hangmanwords, agregar, palabras);


    return 0;
}
