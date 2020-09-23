#include <iostream>

using namespace std;

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
        cout << "  |                0" << endl;
        cout << "  |                # " << endl;
        cout << "  |                # " <<endl;
        cout << "  |                  " << endl;
        cout << "  |                  " << endl;
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
        cout << "  |                0 " << endl;
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
        cout << "  |                0/" << endl;
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
        cout << "  |                  " << endl;
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
        cout << "  |               |  " << endl;
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
        cout << "  |               | |" << endl;
        cout << "  |               ---" << endl;
        cout << "  |               | |" << endl;
        cout << "  |               | |" << endl;
        cout << "---------------------" << endl;
    }

    else if (errores==10)
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
}

int main()
{
    int n;
    cin >> n;

    Drawing(n);

    Ends();

    return 0;
}
