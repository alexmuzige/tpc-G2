#include <iostream>
#include "Activites.cpp"
#include "Invites.cpp"
#include "Organisateurs.cpp"
using namespace std;

void evaluationassertion(int ass){

    int assertion = ass;

    if(assertion == 1){
    Activites evenement;
    evenement.listeDevenements();
    Invites personnage;
    personnage.presentationInvites();
    evenement.placeInvites();
}
    else
    if(assertion == 2){
    Organisateurs organ;
    organ.organiserunevenement();
}
    else
    if(assertion == 3){
    Organisateurs consultant;
    consultant.presentation();
}
    else
    if(assertion == 4){
    Consultantpremier consul;
    consul.presentation();
}
    else{
    cout << "    vous devez choisir une parmi les assertions proposees" << endl;
    cout << "    entrer une nouvelle assertion" << endl;
    cin >> assertion;
    evaluationassertion(assertion);
}
}

int main(){
    int assertion;

    cout << " " << endl;
    cout << "   =====================================================================" << endl;
    cout << "    BIENVENNU SUR LE SITE D'ORGANISATION DES EVENEMENTS SOCIO-CULTURELS" << endl;
    cout << "   =====================================================================" << endl;
    cout << " " << endl;
    cout << "    Definissez ce que vous voulez faire en selectionnant une parmi " << endl;
    cout << "    les assertions proposees :" << endl;
    cout << " " << endl;
    cout << "    1. vous voulez participer a un evenement" << endl;
    cout << " " << endl;
    cout << "    2. vous voulez creer un nouvel evenement" << endl;
    cout << " " << endl;
    cout << "    3. vous voulez consultez les donnees de votre evenement" << endl;
    cout << " " << endl;
    cout << "    4. vous voulez consultez les donnes de tous les evenements du reseau" << endl;
    cin >> assertion;

    evaluationassertion(assertion);

    return 0;
}
