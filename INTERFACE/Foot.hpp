#ifndef FOOT_H
#define FOOT_H
#include <iostream>
#include "Jeu.hpp"
using namespace std;

class Foot: public Jeu
{
    public:
        Foot();
        ~Foot();
        void start();
        void exit();
        void pause();
        void play();
        void restart();
        int menu();
        void affichageJeu();
    protected:
        bool jouer = true;
};

#endif