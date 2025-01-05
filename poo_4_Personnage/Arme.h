#ifndef DEF_ARME
#define DEF_ARME

#include <iostream>
#include <string>

class Arme
{
public:

    Arme();
    Arme(std::string nom, int degats);
    void changer(std::string jenenge, int bobol);
    void afficher();
    int getDegats() const; // on met const quand il s'agit d'un membre private 
    //qui n'est pas cencé changer de valeur.

private:

    std::string m_nom;
    int m_degats;
};

#endif