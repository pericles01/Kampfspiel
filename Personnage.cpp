#include <iostream>
#include <string>
#include "personnage.h"
using namespace std;

Personnage::Personnage():m_vie(100),m_mana(100),m_nomArme("Epee rouillee"),m_degatsArme(10)
{

}
Personnage::Personnage(string nomArme, int degatArme):m_vie(100),m_mana(100),m_nomArme(nomArme),m_degatsArme(degatArme)
{

}
Personnage::Personnage(int vie):m_vie(vie),m_mana(100),m_nomArme("Epee rouillee"),m_degatsArme(10)
{

}
void Personnage::recevoirDegats(int nbDegat)
{
    m_vie-=nbDegat;
    if(m_vie<0)
    {
        m_vie=0;
    }
}
void Personnage::boirePotiondeVie(int qtePotion)
{
    m_vie+=qtePotion;
    if(m_vie>100)
    {
        m_vie=100;
    }
}
void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_degatsArme);
}
void Personnage::changerArme(string nomNouvelArme, int degatsNouvellArme)
{
    m_nomArme=nomNouvelArme;
    m_degatsArme=degatsNouvellArme;
}
bool Personnage::estVivant() const
{
    return m_vie>0;
}
void Personnage::afficher() const
{
    cout<<"Lebenspunkt: "<<m_vie<<endl;
    cout<<"Waffen: "<<m_nomArme<<" ,Schaden: "<<m_degatsArme<<endl;
}
