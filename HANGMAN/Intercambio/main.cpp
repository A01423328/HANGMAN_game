#include <iostream>

using namespace std;

string nom;
int num;
int opciones;
int individuo;

int main()
{
    int Familia[5] = {0,1,2,3,4};
    cout << "Escribe tu nombre" << endl;
    cin >> nom;

    if (nom == "Aldo")
    {
        individuo=0;
    }
    if (nom == "Rene")
    {
        individuo=1;
    }
    if (nom == "Alan")
    {
        individuo=2;
    }
    if (nom == "Marley")
    {
        individuo=3;
    }
    if (nom == "Luis")
    {
        individuo=4;
    }
    cout << individuo;

    for (int i=0 ; i<4 ; i++)
    {
        cout << Familia[i] << endl;
    }

    /*cout << endl << "Elige un numero del";

    for (int con=0 ; con<individuo ; con++)
    {
        opciones = con + 1;
        cout << " , " << opciones;
    }
    for (int i=individuo+1 ; 4 ; i++)
    {
        opciones = i + 1;
        cout << " , " << opciones;
    }
    cout << endl;

    cin >> num;
    num--;

    cout << endl << "El familair que te toca dar el regalo es: " << Familia[num];
    */

    return 0;
}
