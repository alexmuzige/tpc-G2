#include <iostream>
using namespace std;

class Activites{
    public :

    struct evenements{
    string noms;
    int date;
    string adress;
    string ass;
 };

 void listeDevenements(){
    cout << " " << endl;
    cout << "   =====================================================================" << endl;
    cout << "            LISTE DES EVENEMENTS ORGANISES POUR CE MOIS" << endl;
    cout << "   =====================================================================" << endl;
    cout<<"    "<<endl;
    for(int i=0; i<30 ; i++){
    evenements service;
    cout<<"    Evenement de la "<<i+1<< "ieme journnee" <<endl;
    evenements*pointeur;
    pointeur = &service;
    cout<<"    nom de l'evenement :"<<service.noms <<endl;
    cout<<"    date de celebration : le "<< i+1<<"/09/2021" <<endl;
    cout<<"    lieu de celebration :"<<service.adress <<endl;
    cout<<"    "<<endl;

}
}
int numerodubillet(int billetprecedant, int typedebillet){

    int billet;
    billet = billetprecedant + 1;

    if(typedebillet == 2){
    if(billet == 1){
    billet = numerodubillet(billet, typedebillet);
    return billet;
}
    else
    if(billet == 7){
    billet = numerodubillet(billet, typedebillet);
    return billet;
}
    else
    if((billet%2 == 0) || (billet%3 == 0) || (billet%5 == 0)){
    if(((billet == 2) || (billet == 3) || (billet == 5))){
    billet = numerodubillet(billet, typedebillet);
    return billet;
}
    else{
    return billet;
}
}
}
    else
    if(typedebillet == 1){
    if((billet%2 == 0) || (billet%3 == 0) || (billet%5 == 0)){
    if(((billet == 2) || (billet == 3) || (billet == 5))){
    return billet;
}
    else{
    billet = numerodubillet(billet, typedebillet);
    return billet;
}
}
    else
    if( !(billet%2 == 0) || (billet%3 == 0) || (billet%5 == 0) ){
    return billet;
}
}

}
void placeInvites(){

    int typedebillet;
    int numerodubilletprecedant = 0;
    cout<<"    "<<endl;
    cout << "    Selectionner le type de billet que vous souhaitez avoir" << endl;
    cout<<"    "<<endl;
    cout << "    1. billet VIP" << endl;
    cout << "    2. billet ordinaire" << endl;
    cin >> typedebillet;
    if(typedebillet == 1){
    cout<<"    "<<endl;
    cout<<"    Billet VIP :"<<endl;
    cout << "    vous avez reussi le billet numero "<<numerodubillet(numerodubilletprecedant, typedebillet) << endl;
}
    else
    if(typedebillet == 2){
    cout<<"    Billet ordinaire :"<<endl;
    cout << "    vous avez reussi le billet numero "<<numerodubillet(numerodubilletprecedant, typedebillet) << endl;
}
    else{
    cout << "    vous devez entrer l'assertion 1 ou l'assertion 2" << endl;
    cout<<"    "<<endl;
    placeInvites();
}
}

};
