#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE
#include <string>

class Personnage
{
private:
    int m_vie;
    int m_mana;
    int m_degatsArme;
    std::string m_nomArme;
public:
    Personnage();
    Personnage(std::string nomArme, int degatArme);
    Personnage(int vie);
    void recevoirDegats(int nbDegat);
    void attaquer(Personnage &cible);
    void boirePotiondeVie(int qtePotion);
    void changerArme(std::string nomNouvelArme, int degatsNouvellArme);
    bool estVivant() const;
    void afficher() const;
};

#endif // DEF_PERSONNAGE
