#include <QCoreApplication>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int argc, char* argv[])
{
    QCoreApplication a(argc, argv);
    srand(time(NULL));
    int proba = 1;
    int x =0;
    cout<<"Zgadnij liczbe  przedzialu 1 -20" << endl;
    int liczba = ((rand() % 20) + 1); //losowanie liczb z przedzialu 1 - 20

    while(liczba!=x)
    {
        cin >> x;
        while(cin.fail())//ta petla realizuje sie wtedy kiedy wpisze sie cos innego niz cyfry
        {
            proba++;
            cout<<"Wprowadz liczbe jeszcze raz, tym razem poprawna"<<endl;
            cin.clear();//kasowanie flagi bledu strumienia
            cin.sync(); //kasowanie zbednych informacji ze strumienia
            cin >> x;
        }
        if(x > liczba)
        {
            cout<<"Podana przez ciebie liczba jest za duza"<<endl;
            proba++;
        }
        if(x < liczba)
        {
            cout<<"Podana przez ciebie liczba jest za mala"<<endl;
            proba++;
        }

    }

    cout<<"Odgadles sekretna liczbe!("<<liczba<<") za "<<proba<<" razem"<<endl;
    char znak;
    cin.get(znak);
   // exit(1);
    return a.exec();
}
