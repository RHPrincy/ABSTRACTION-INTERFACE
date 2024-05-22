#include "Jeu.hpp"
#include "Combat.hpp"
#include "Strategie.hpp"
#include "Foot.hpp"


int main()
{
    int choixJeux(1);
    Combat p = Combat();
    Strategie s = Strategie();
    Foot f = Foot();
    cout << "1-Combat \t 2-Strategie \t 3-Foot" << endl;
    cin >> choixJeux;
    {
        switch (choixJeux)
        {
            case 1:
                p.affichageJeu();
                p.start();
                break;
            case 2:
                s.affichageJeu();
                s.start();
                break;
            case 3:
                f.affichageJeu();
                f.start();
                break;
            default:
                cout << "Choix invalide" << endl;
                break;
        }
    }
    return (0);
}