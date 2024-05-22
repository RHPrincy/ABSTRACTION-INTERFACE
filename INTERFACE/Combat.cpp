#include <cstdlib>
#include <ctime>
#include "Combat.hpp"

Combat::Combat()
{

}
Combat::~Combat()
{
    
}
int Combat::menu()
{
    int choice;
    cout << "1-Continue \t 2-Restart \t 3-Exit" << endl;
    cin >> choice;
    return (choice);
}
void Combat::start()
{
    srand(time(NULL));
    pointDeViePersonnage = 100;
    pointDeVieAdversaire = 100;
    cout << "Votre point de vie = " << pointDeViePersonnage << endl;
    cout << "Point de vie adversaire = " << pointDeVieAdversaire << endl;
    while (jouer == true && (pointDeViePersonnage > 0) && (pointDeVieAdversaire > 0))
    {
        int adversaireAttaque = rand()%40;
        int personnageAttaque = rand()%40;
        cout << "Degat de votre attaque = " << personnageAttaque << endl;
        cout << "Degat de l'attaque de l'adversaire = " << adversaireAttaque << endl;
        pointDeViePersonnage -= adversaireAttaque;
        pointDeVieAdversaire -= personnageAttaque;
        if (pointDeViePersonnage*pointDeVieAdversaire <= 0)
        {
            break;
        }
        cout << "Votre point de vie = " << pointDeViePersonnage << endl;
        cout << "Point de vie adversaire = " << pointDeVieAdversaire << endl;
        pause();
    }
    if (pointDeViePersonnage <= 0)
        {
            cout << "Vous avez perdu ...GAME OVER..." << endl;
            cout << "Point de vie restant de l'adversaire = " << pointDeVieAdversaire << endl;
        }
    else
        {
            cout << "FELICITATION  Vous avez gagne" << endl;
            cout << "Votre point de vie restant= " << pointDeViePersonnage << endl;
        }
}
void Combat::exit()
{
    cout << " EXIT GAME " << endl;
    jouer = false;
}
void Combat::pause()
{
    switch (menu())
    {
        case 1:
            play();
            break;
        case 2:
            restart();
            break;
        default:
            exit();
            break;
    }
}
void Combat::play()
{
    cout << " PLAY " << endl;
}
void Combat::restart()
{
    cout << " GAME RESTARTED " << endl;
    pointDeViePersonnage = 100;
    pointDeVieAdversaire = 100;
    cout << "Votre point de vie = " << pointDeViePersonnage << endl;
    cout << "Point de vie adversaire = " << pointDeVieAdversaire << endl;
    start();
}
void Combat::affichageJeu()
{
    cout << "BIENVENUE - JEU DE COMBAT" << endl;
}