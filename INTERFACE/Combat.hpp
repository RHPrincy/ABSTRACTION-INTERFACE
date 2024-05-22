#ifndef COMBAT_H
#define COMBAT_H
#include <iostream>
#include "Jeu.hpp"
using namespace std;

class Combat: public Jeu
{
    public:
        Combat();
        ~Combat();
        void start();
        void exit();
        void pause();
        void play();
        void restart();
        int menu();
        void affichageJeu();
    protected:
        bool jouer = true;
        int pointDeViePersonnage;
        int pointDeVieAdversaire;
};
#endif