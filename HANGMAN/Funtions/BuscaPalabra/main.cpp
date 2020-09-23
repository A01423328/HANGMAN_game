#include <iostream>

using namespace std;

void Guess(char pal[],char gue[],int tam, int &mistakes)
{
    string word=pal;

    char letter;
    cout << "Dime una letra: ";
    cin >> letter;

    int letterplace;
    letterplace=word.find(letter);

    if (letterplace!=-1)
    {
        for (int con=0; con<tam; con++)
        {
            letterplace=word.find(letter);
            if (letterplace!=-1)
            {
                gue[letterplace]=letter;
                pal[letterplace]='-';
                word=pal;
            }
        }
    }

    else
    {
        cout << "La letra '" << letter << "' no esta en la palabra." << endl;
        mistakes++;
    }

}

int main()
{
    char word[8]={"palabra"};
    cout << word << endl;

    char gue[8]={"-------"};
    cout << gue << endl;

    int tam=8;

    int mistakes=0;

    Guess(word,gue,tam,mistakes);
    cout << endl << gue << endl;
    cout << "Errores: " << mistakes << endl;
    int missing=10;
    missing=10-mistakes;
    cout << "Errores para perder: " << missing << endl;

    return 0;
}
