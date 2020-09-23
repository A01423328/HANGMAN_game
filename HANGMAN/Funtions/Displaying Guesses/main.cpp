#include <iostream>
#include <fstream>

using namespace std;

int TamanoGuesses()
{
    ifstream file;
    file.open("HangManMistakes.txt");
    char c;
    int tam=-1;
    do
    {
       tam++;
       c=file.get();
    }
    while (c!='.');
    file.close();

    return tam;
}

void DisplayGuess(char guessedletter[], char letter, int guesstam)
{
    char g;
    int gunum=-1;
    ifstream guesses;
    guesses.open("HangManMistakes.txt");
    while (!guesses.eof())
    {
        g=guesses.get();
        if (g!='.')
        {
            gunum++;
            guessedletter[gunum]=g;
        }
    }
    cout << guessedletter;
    guesses.close();

    ofstream addguess;
    addguess.open("HangManMistakes.txt");
    for (int mis=0; mis<guesstam; mis++)
    {
        addguess << guessedletter[mis];
    }
    addguess << letter << ",.";
    addguess.close();
}

int main()
{
    char letter;
    cin >> letter;

    int guesstam;
    guesstam=TamanoGuesses();
    cout << guesstam << endl;


    char guessedletters[guesstam];

    DisplayGuess(guessedletters,letter,guesstam);

    /*
    ofstream clean;
    clean.open("HangManMistakes.txt");
    clean << '.';
    clean.close();
    */

    return 0;
}
