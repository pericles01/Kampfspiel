#include <iostream>
#include "personnage.h"
using namespace std;

int main()
{
    cout<<"Anfang des Spiels"<<endl;
    Personnage Pericles(200),Laura("Epee aiguisee",20);
    cout<<"Anfangseigenschaften"<<endl;/*Anfangsparameter*/
    cout<<"Laura"<<endl;
    Laura.afficher();
    cout<<endl;
    cout<<"Pericles"<<endl;
    Pericles.afficher();
    cout<<endl;
    Laura.attaquer(Pericles);
    cout<<"Laura greift Pericles an"<<endl;
    Pericles.attaquer(Laura);
    cout<<"Pericles greift Laura an"<<endl;
    Laura.boirePotiondeVie(10);
    cout<<"Laura nimmt Lebenstrank(Erhoehung des Lebenspunktes um 10)"<<endl;
    cout<<"Zwischeneigenschaften"<<endl;/*Zwischensparameter*/
    cout<<"Laura"<<endl;
    Laura.afficher();
    cout<<endl;
    cout<<"Pericles"<<endl;
    Pericles.afficher();
    Laura.changerArme("Katana",50);
    cout<<"Laura wechselt ihr Waffen zu Katana(Schaden: 50)"<<endl;
    Laura.attaquer(Pericles);
    cout<<"Laura greift Pericles an"<<endl;
    cout<<"Endseigenschaften"<<endl;
    cout<<"Laura greift Pericles an"<<endl;
    cout<<"Endliche eigenschaften"<<endl;/*Endparameter*/
    cout<<"Laura"<<endl;
    Laura.afficher();
    cout<<endl;
    cout<<"Pericles"<<endl;
    Pericles.afficher();
    return 0;
}


