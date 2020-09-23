#include <iostream>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

//Input a Random Number
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
//Input a Random Number.

//Search for the Word
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
       if (punto=='.')
       {
           con++;
       }
       else if (con==n)
       {
           while (c!='.')
           {
               c=file.get();
               tam++;
           }
       }
    }
    file.close();

    return tam;
}
//Search for the Word.

//Change Word to Play Game
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
           }
           archpal << palab;
           archpal.close();
       }
    }
    file.close();
}
//Change Word to Play Game.

//Size of Word
int Tamano()
{
    ifstream file;
    file.open("HangManWord.txt");
    char c;
    int tam=0;
    do
    {
       tam++;
       c=file.get();
    }
    while (c!='.');
    file.close();

    return tam;
}
//Size of Word.

//Input of Word
int Palabra(char palab[],int &tam)
{
   ifstream file;
    file.open("HangManWord.txt");
    int space=-1;
    char c;
    for (int con=0; con<tam; con++)
    {
        c=file.get();
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
//Input of Word.

//Drawing
void Drawing(int errores)
{
    if (errores==0)
    {
        cout << "       HANGMAN      " << endl << endl;
        cout << "    /---------------" << endl;
        cout << "   /                 " << endl;
        cout << "  /                  " << endl;
        cout << "  |                  " << endl;
        cout << "  |                  " << endl;
        cout << "  |                  " << endl;
        cout << "  |                  " <<endl;
        cout << "  |                  " << endl;
        cout << "  |                  " << endl;
        cout << "  |                  " << endl;
        cout << "  |                  " << endl;
        cout << "---------------------" << endl;
    }

    else if (errores==1)
    {
        cout << "       HANGMAN      " << endl << endl;
        cout << "    /---------------" << endl;
        cout << "   /               |" << endl;
        cout << "  /                |" << endl;
        cout << "  |                |" << endl;
        cout << "  |                  " << endl;
        cout << "  |                  " << endl;
        cout << "  |                  " <<endl;
        cout << "  |                  " << endl;
        cout << "  |                  " << endl;
        cout << "  |                  " << endl;
        cout << "  |                  " << endl;
        cout << "---------------------" << endl;
    }

    else if (errores==2)
    {
        cout << "       HANGMAN      " << endl << endl;
        cout << "    /---------------" << endl;
        cout << "   /               |" << endl;
        cout << "  /                |" << endl;
        cout << "  |                |" << endl;
        cout << "  |                0 " << endl;
        cout << "  |                  " << endl;
        cout << "  |                  " <<endl;
        cout << "  |                  " << endl;
        cout << "  |                  " << endl;
        cout << "  |                  " << endl;
        cout << "  |                  " << endl;
        cout << "---------------------" << endl;
    }

    else if (errores==3)
    {
        cout << "       HANGMAN      " << endl << endl;
        cout << "    /---------------" << endl;
        cout << "   /               |" << endl;
        cout << "  /                |" << endl;
        cout << "  |                |" << endl;
        cout << "  |                0 " << endl;
        cout << "  |                # " << endl;
        cout << "  |                # " <<endl;
        cout << "  |                  " << endl;
        cout << "  |                  " << endl;
        cout << "  |                  " << endl;
        cout << "  |                  " << endl;
        cout << "---------------------" << endl;
    }

    else if (errores==4)
    {
        cout << "       HANGMAN      " << endl << endl;
        cout << "    /---------------" << endl;
        cout << "   /               |" << endl;
        cout << "  /                |" << endl;
        cout << "  |                |" << endl;
        cout << "  |                0 " << endl;
        cout << "  |                # " << endl;
        cout << "  |                # " <<endl;
        cout << "  |                  " << endl;
        cout << "  |               ---" << endl;
        cout << "  |               | |" << endl;
        cout << "  |               | |" << endl;
        cout << "---------------------" << endl;
    }

    else if (errores==5)
    {
        cout << "       HANGMAN      " << endl << endl;
        cout << "    /---------------" << endl;
        cout << "   /               |" << endl;
        cout << "  /                |" << endl;
        cout << "  |                |" << endl;
        cout << "  |                0/" << endl;
        cout << "  |                # " << endl;
        cout << "  |                # " <<endl;
        cout << "  |                  " << endl;
        cout << "  |               ---" << endl;
        cout << "  |               | |" << endl;
        cout << "  |               | |" << endl;
        cout << "---------------------" << endl;
    }

    else if (errores==6)
    {
        cout << "       HANGMAN      " << endl << endl;
        cout << "    /---------------" << endl;
        cout << "   /               |" << endl;
        cout << "  /                |" << endl;
        cout << "  |                |" << endl;
        cout << "  |               \\0/" << endl;
        cout << "  |                # " << endl;
        cout << "  |                # " <<endl;
        cout << "  |                  " << endl;
        cout << "  |               ---" << endl;
        cout << "  |               | |" << endl;
        cout << "  |               | |" << endl;
        cout << "---------------------" << endl;
    }

    else if (errores==7)
    {
        cout << "       HANGMAN      " << endl << endl;
        cout << "    /---------------" << endl;
        cout << "   /               |" << endl;
        cout << "  /                |" << endl;
        cout << "  |                |" << endl;
        cout << "  |               \\0/" << endl;
        cout << "  |                # " << endl;
        cout << "  |                # " <<endl;
        cout << "  |               |  " << endl;
        cout << "  |               ---" << endl;
        cout << "  |               | |" << endl;
        cout << "  |               | |" << endl;
        cout << "---------------------" << endl;
    }

    else if (errores==8)
    {
        cout << "       HANGMAN      " << endl << endl;
        cout << "    /---------------" << endl;
        cout << "   /               |" << endl;
        cout << "  /                |" << endl;
        cout << "  |                |" << endl;
        cout << "  |               \\0/" << endl;
        cout << "  |                # " << endl;
        cout << "  |                # " <<endl;
        cout << "  |               | |" << endl;
        cout << "  |               ---" << endl;
        cout << "  |               | |" << endl;
        cout << "  |               | |" << endl;
        cout << "---------------------" << endl;
    }

    else if (errores==9)
    {
        cout << "       HANGMAN      " << endl << endl;
        cout << "    /---------------" << endl;
        cout << "   /               |" << endl;
        cout << "  /                |" << endl;
        cout << "  |                |" << endl;
        cout << "  |               \\0/" << endl;
        cout << "  |                # " << endl;
        cout << "  |                # " <<endl;
        cout << "  |               / \\" << endl;
        cout << "  |                  " << endl;
        cout << "  |                  " << endl;
        cout << "  |                  " << endl;
        cout << "---------------------" << endl;
    }
}
//Drawing.

//Drawing to Begin & End
void Ends()
{
    cout << " {}    {}   {}{}   {}    {}  {}}}}}  {}      {}   {}{}   {}    {}" << endl;
    cout << " {}    {}  {}  {}  {}}}  {} {}    {} {}}}  {{{}  {}  {}  {}}}  {}" << endl;
    cout << " {}{{}}{} {}{{}}{} {} {} {} {}       {} {{}} {} {}{{}}{} {} {} {}" << endl;
    cout << " {}    {} {}    {} {}  {{{} {}  {{{{ {}  {}  {} {}    {} {}  {{{}" << endl;
    cout << " {}    {} {}    {} {}    {}  {}}}}}  {}      {} {}    {} {}    {}" << endl;
    cout << endl;
    cout << "     ________" << endl;
    cout << "     |      |" << endl;
    cout << "     |      o" << endl;
    cout << "     |     /#\\" << endl;
    cout << "     |      #" << endl;
    cout << "     |     / \\" << endl;
    cout << " ____|_______________" << endl;
    cout << "/    |              /|" << endl;
    cout << "___________________/ /" << endl;
    cout << "                  | /" << endl;
    cout << "___________________/" << endl;
    cout << endl;
}
//Drawing to Begin & End.

//HangMan Victory Drawing
void Victory()
{
    cout << " {}    {}   {}{}   {}    {}  {}}}}}  {}      {}   {}{}   {}    {}" << endl;
    cout << " {}    {}  {}  {}  {}}}  {} {}    {} {}}}  {{{}  {}  {}  {}}}  {}" << endl;
    cout << " {}{{}}{} {}{{}}{} {} {} {} {}       {} {{}} {} {}{{}}{} {} {} {}" << endl;
    cout << " {}    {} {}    {} {}  {{{} {}  {{{{ {}  {}  {} {}    {} {}  {{{}" << endl;
    cout << " {}    {} {}    {} {}    {}  {}}}}}  {}      {} {}    {} {}    {}" << endl;
    cout << endl;
    cout << "     ________" << endl;
    cout << "     |      |" << endl;
    cout << "     |      " << endl;
    cout << "     |        \\0/" << endl;
    cout << "     |         #" << endl;
    cout << "     |         #" << endl;
    cout << " ____|________/_\\____" << endl;
    cout << "/    |              /|" << endl;
    cout << "___________________/ /" << endl;
    cout << "                  | /" << endl;
    cout << "___________________/" << endl;
    cout << endl;
}
//HangMan Victory Drawing.

//Gets the Guesses you´ve made so far
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
//Gets the Guesses you've made so far.

//Processing Game/Checking guessed letter
char Guess(char pal[],char gue[],int tam, int &mistakes)
{
    string word=pal;

    char letter;
    cout << "Dime una letra: ";
    cin >> letter;
    letter=tolower(letter);

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
        cout << endl;
        cout << "La letra '" << letter << "' no esta en la palabra." << endl;
        mistakes++;
        cout << endl;
    }

    return letter;
}
//Processing Game/Checking guessed letter.

//Displays Guesses you've made
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
    guesses.close();

    ofstream addguess;
    addguess.open("HangManMistakes.txt");
    for (int mis=0; mis<guesstam; mis++)
    {
        addguess << guessedletter[mis];
    }
    if (letter!=' ')
    {
        addguess << letter << ",";
    }
    addguess << ".";
    addguess.close();
}
//Displays Guesses you've made.

//Initialize Guess
void BeginGuess(char gue[],int tam,int space)
{
    for (int con=0; con<tam; con++)
    {
        if (con==space)
        {
            gue[con]={'_'};
        }
        else
        {
            gue[con]={'-'};
        }
    }
}
//Initialize Guess

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

    return con;
}

//Check if player won
bool Win(string guessedword, bool fin)
{
    int place;
    place=guessedword.find('-');
    if (place!=-1)
    {
        fin=false;
    }
    else
    {
        fin=true;
    }

    return fin;
}
//Check if player won.

int main()
{
  char sigue='y';   //Variable to Start the Game.
  char letter=' ';  //Character to Start Guess list.
  while (tolower(sigue)=='y') //Keeps the Game Running.
  {
   int tam;                     //Game Menu.
   char option;
   Ends();
   cout << endl << "Press '1' to Play Game." << endl;
   cout << "Press '2' to Change Word." << endl;
   cout << "Press '3' to Add Word." << endl;
   cout << endl << endl << endl << endl;
   cout << endl << "Enter your option: " << endl;
   cin >> option;
   cout << endl << endl << endl;


   if (tolower(option)=='2')    //Changes the Word from Previous Game.It's an optional
   {
    int randomn;            //Random Number.

    randomn=Random();       //Gets the Random Number.

    tam=BrowseWrd(randomn); //Search for the Word according to the Random Number, in "HangManWords".txt

    char palab[tam];        //Defines the array to input the Random Number Word.

    OutputWord(palab,tam,randomn);  //Places the Random Number to "HangManWord".txt
   }


   else if (tolower(option)=='1') //Starts to Play the Game.
   {
    tam=Tamano();           //Defines the size of the word.

    int space=-1;

    char pal[tam];          //Defines the word in an array.
    space=Palabra(pal,tam);

    char guess[tam];        //Defines another array for displaying as guess.
    BeginGuess(guess,tam,space);

    string guessedword;     //String used later to check if you win.

    bool won=true;          //Defines if you've won the game, later checks if you didn't.

    int mistakes=0;         //Starts the countdown of mistakes.

    bool fin=false;         //Checks if the player has ended in a victory.
    while (fin==false)
    {
        Drawing(mistakes);  //Displays the hangman drawing according to the mistakes.
        cout << endl;

        cout << endl << "     ";        //Displays the correctly guessed letters so far.
        for (int con=0; con<tam; con++)
        {
            cout << guess[con];
        }
        cout << endl << endl;

        int guesstam;
        guesstam=TamanoGuesses();
        cout << guesstam << endl;

        char guessedletters[guesstam];
        DisplayGuess(guessedletters,letter,guesstam);
        for (int gu=0; gu<guesstam; gu++)
        {
               cout << guessedletters[gu];
        }
        cout << endl << endl;

        cout << "Errores: " << mistakes << endl;    //Displays the mistakes.

        int missing;                                //Displays the amount of mistakes missing to lose.
        missing=10-mistakes;
        cout << "Errores para perder: " << missing << endl;
        cout << endl << endl << endl << endl;

        letter=Guess(pal,guess,tam,mistakes);              //Inputs the guess and analyzes.

        guessedword=guess;                          //Checks if the guesses complete the word you're suppose to.
        fin=Win(guessedword,fin);

        if (mistakes==10)                           //Checks if you lose the Game.
        {
            won=false;
            fin=true;
        }
    }

    if (won==true)
    {
        cout << endl << endl;
        Victory();
        cout << endl << "YOU HAVE SAVED YOURSELF" << endl;
        cout <<  endl << "  ";
        for (int e=0;e<tam;e++)
        {
            cout << guess[e];
        }
        cout << endl << endl << endl;
    }

    else if(won==false)
    {
        Ends();
        cout << "You have been hanged :(" << endl;
        Palabra(pal,tam);
        cout << endl << " The word was: " << endl << endl;
        for (int d=0; d<tam; d++)
        {
            cout << pal[d];
        }
        cout << endl << endl;
    }

    ofstream clean;
    clean.open("HangManMistakes.txt");
    clean << "You have input:.";
    clean.close();
   }


   else if (tolower(option)=='3')
   {
        int lines;
        lines=EndofHangManWords();

        int palabras;
        palabras=GetAllWords(lines);

        char hangmanwords[palabras];

        SaveAllWords(hangmanwords, palabras);

        string agregar;
        cout << endl << "Write the word you wish to add." << endl;
        cout << "Please check the conditions to add a word: " << endl << endl;
        cout << "1.Don't write capital letters." << endl;
        cout << "2.If your word contains a space, use this character in exchange: _ " << endl;
        cout << "3.Add a period '.' at the end of the letter." << endl << endl;
        cin >> agregar;
        cout << endl;

        AddHangManWords(hangmanwords, agregar, palabras);
   }


   else
   {
       cout << "You have not inserted a valid number." << endl << endl;
   }

   cout << "Return to menu? y/n" << endl;
   cin >> sigue;
   cout << endl << endl << endl;

  }

    return 0;
}
