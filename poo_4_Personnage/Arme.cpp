#include "Arme.h"

using namespace std;

Arme::Arme() : m_nom("Epée rouillée"), m_degats(10)
{
}

Arme::Arme(string jeneng, int hancur) : m_nom(jeneng), m_degats(hancur)
{
}

void Arme::changer(string name, int gesturzt)
{
    m_nom = name;
    m_degats = gesturzt;
}

void Arme::afficher()
{
    cout << "Arme : " << m_nom << " (Dégâts : " << m_degats << ")" << endl;
}

int Arme::getDegats() const
{
    return m_degats;
}