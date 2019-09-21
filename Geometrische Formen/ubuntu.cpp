#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string>

//alle functionen werden aufgerufen
void menu();
void menuAgain();
string title(string);

//Alle Geometrisches Formeln
void quader();
void kugel();
void pyramide();
void kegel();
void kreis();
void ring();
void rechteck();
void parallelgramm();
void dreiecke();

// die eingabe von Tastatur wird überprft, ob die nicht null ist
double eingabeCheck(double);

// zwei Zahlen werden addiert und die Werte zurückgeliefert.
double addation(double, double);

//plus mehr Zahl berechnung, die letzte Variable hat einen defaut wert.
double addMehrZahl(double, double, double);

// minus berechnung
double substaction(double, double);

//mal 2 | 3
double mal(double x, double y = 1){

    return (x*x*y);
}

//dot
int dot(int, char);

//sure
void sure();

//var declarieren
#define PI 3.14
#define SIXTIL 0.1666666667
#define DRITTEL 0.3333333333

/* Main */
int main(){
    //Menu wird aufgerufen
    menu();

    return 0;
}

/* Menu */
void menu(){
    int auswahl = 0;
    cout << title("Menu") << endl;
    cout << "Bitte geben Sie eine Zahl ein, um beliebigte Geometrisches Form berechnen zu lassen?\n";
    cout << "\t1. \t Quader \n";
    cout << "\t2. \t Kugel \n";
    cout << "\t3. \t Pyramide (quadratisch)\n";
    cout << "\t4. \t Kegel \n";
    cout << "\t5. \t Kreis \n";
    cout << "\t6. \t Ring \n";
    cout << "\t7. \t Rechteck \n";
    cout << "\t8. \t Parallelgramm \n";
    cout << "\t9. \t Dreiecke (allgemein) \n";
    cout << "\t0. \t exit \n";
    cout << "welche Zahl wollen Sie eingaben?\n";
    cin >> auswahl;

    switch (auswahl)
    {
        case 1: system("clear"); quader(); break;
        case 2: system("clear"); kugel(); break;
        case 3: system("clear"); pyramide(); break;
        case 4: system("clear"); kegel(); break;
        case 5: system("clear"); kreis(); break;
        case 6: system("clear"); ring(); break;
        case 7: system("clear"); rechteck(); break;
        case 8: system("clear"); parallelgramm(); break;
        case 9: system("clear"); dreiecke(); break;
        case 0: system("clear"); cout << "Ende des Programmes.\n"; exit(0); break;

        default: system("clear"); cout << "Kein bekannter Koerber wurde ausgewaehlt! \n Bitte geben Sie eine Zahl zwischen [0-9]\n"; break;
    }
}

/* #1 Quader berechnug*/
void quader(){
    double zahl1, zahl2, zahl3 = 0;
    double temp1, ergebnis1, ergebnis2 = 0;
    cout << title("Quader Berechnung") << endl;
    cout << "Geben Sie bitte die erste Zahl ein? \n";
    cin >> zahl1;
    eingabeCheck(zahl1);
    cout << "Geben Sie bitte die zweite Zahl ein? \n";
    cin >> zahl2;
    eingabeCheck(zahl2);
    cout << "Geben Sie bitte die dritte Zahl ein? \n";
    cin >> zahl3;
    eingabeCheck(zahl3);

    ergebnis1 = zahl1*zahl2*zahl3;
    temp1 = addMehrZahl(zahl1, zahl2, zahl3);
    ergebnis2 = 2*temp1;

    cout << "Das Volumen des Quaders betraegt: " << ergebnis1 << endl;
    cout << "Das ueberflaesche des Quaders betraegt: " << ergebnis2 << "\n\n";

    menuAgain();
}

/* #2 Kuge berechnug*/
void kugel(){
    double temp1, temp2, temp3, temp4, ergebnis1, ergebnis2, ergebnis3, ergebnis4 = 0;
    double zahl1, zahl2 = 0;
    cout << title("Kugel Berechnung") << endl;
    cout << "Geben Sie bitte die erste Zahl (r) ein? \n";
    cin >> zahl1;
    eingabeCheck(zahl1);
    cout << "Geben Sie bitte die zweite Zahl (d) ein? \n";
    cin >> zahl2;
    eingabeCheck(zahl2);

    temp1 = mal(zahl1, zahl1);
    ergebnis1 = 4/3 * PI * temp1;
    temp2 = mal(zahl2, zahl2);
    ergebnis2 =  SIXTIL*(PI * temp2); // 0.1666666667 = 1/6
    temp3 = mal(zahl1);
    ergebnis3 = 4*PI*temp3;
    temp4 = mal(zahl2);
    ergebnis4 = PI*temp4;

    cout << "Das Volumen des kugels (r) betraegt: " << ergebnis1 << endl;
    cout << "Das Volumen des kugels (d) betraegt: " << ergebnis2 << endl;
    cout << "Das ueberflaesche des kugels (r) betraegt: " << ergebnis3 << endl;
    cout << "Das ueberflaesche des kugels (d) betraegt: " << ergebnis4 << "\n\n";

    menuAgain();
}

/* #3 pyramide berechnug*/
void pyramide(){
    double zahl1, zahl2, zahl3 = 0;
    double temp1, temp2, ergebnis1, ergebnis2, ergebnis3 = 0;
    cout << title("Pyramide Berechnung") << endl;
    cout << "Geben Sie bitte die erste Zahl ein? \n";
    cin >> zahl1;
    eingabeCheck(zahl1);
    cout << "Geben Sie bitte die zweite Zahl ein? \n";
    cin >> zahl2;
    eingabeCheck(zahl2);
    cout << "Geben Sie bitte die dritte Zahl ein? \n";
    cin >> zahl3;
    eingabeCheck(zahl3);

    temp1 = mal(zahl1);
    ergebnis1 = DRITTEL*temp1*zahl2;//1/3  //V
    ergebnis2 = 2*zahl1*zahl3; //M
    temp2 = mal(zahl3);
    ergebnis3 = zahl1 * (zahl1 + temp2); //O

    cout << "Das pyramide (V) betraegt: " << ergebnis1 << endl;
    cout << "Das pyramide (M) betraegt: " << ergebnis2 << endl;
    cout << "Das pyramide (O) betraegt: " << ergebnis3 << "\n\n";

    menuAgain();
}

/* #4 Kegel berechnug*/
void kegel(){
    double zahl1, zahl2, zahl3 = 0;
    double temp1, temp2, ergebnis1, ergebnis2, ergebnis3 = 0;
    cout << title("Kegel Berechnung") << endl;
    cout << "Geben Sie bitte die erste Zahl ein? \n";
    cin >> zahl1;
    eingabeCheck(zahl1);
    cout << "Geben Sie bitte die zweite Zahl ein? \n";
    cin >> zahl2;
    eingabeCheck(zahl2);
    cout << "Geben Sie bitte die dritte Zahl ein? \n";
    cin >> zahl3;
    eingabeCheck(zahl3);

    temp1 = mal(zahl1);
    ergebnis1 = DRITTEL*PI*temp1*zahl2; //1/3     //V
    ergebnis2 = PI*zahl1*zahl3; //M
    temp2 = addation(zahl1, zahl3);
    ergebnis3 = PI*zahl1*temp2;

    cout << "Das Kegel (V) betraegt: " << ergebnis1 << endl;
    cout << "Das Kegel (M) betraegt: " << ergebnis2 << endl;
    cout << "Das Kegel (O) betraegt: " << ergebnis3 << "\n\n";

    menuAgain();
}

/* #5 kreis berechnug*/
void kreis(){
    double zahl1, zahl2 = 0;
    double temp1, temp2, ergebnis1, ergebnis2, ergebnis3, ergebnis4 = 0;
    cout << title("kreis Berechnung") << endl;
    cout << "Geben Sie bitte die erste Zahl (A) ein? \n";
    cin >> zahl1;
    eingabeCheck(zahl1);
    cout << "Geben Sie bitte die zweite Zahl (u) ein? \n";
    cin >> zahl2;
    eingabeCheck(zahl2);

    temp1 = mal(zahl1); //r
    ergebnis1 = PI*temp1;
    temp2 = mal(zahl2); //d
    ergebnis2 = PI/4*temp2;
    ergebnis3 = 2*PI*zahl1;
    ergebnis4 = PI*zahl2;

    cout << "Das kreis A (r) betraegt: " << ergebnis1 << endl;
    cout << "Das kreis A (d) betraegt: " << ergebnis2 << endl;
    cout << "Das kreis u (r) betraegt: " << ergebnis3 << endl;
    cout << "Das kreis u (d) betraegt: " << ergebnis4 << "\n\n";

    menuAgain();
}

/* #6 Ring berechnug*/
void ring(){
    double zahl1, zahl2 = 0;
    double temp1, temp2, temp3, temp4, ergebnis1, ergebnis2 = 0;
    cout << title("Ring Berechnung") << endl;
    cout << "Geben Sie bitte die erste Zahl (A) ein? \n";
    cin >> zahl1;
    eingabeCheck(zahl1);
    cout << "Geben Sie bitte die zweite Zahl (u) ein? \n";
    cin >> zahl2;
    eingabeCheck(zahl2);

    temp1 = mal(zahl1);
    temp2 = mal(zahl2);
    temp3 = substaction(temp1,temp2);
    ergebnis1 = PI*temp3;
    temp4 = addation(zahl1,zahl2);
    ergebnis2 = 2*PI*temp4;

    cout << "Das Ring A (r) betraegt: " << ergebnis1 << endl;
    cout << "Das Ring u (r) betraegt: " << ergebnis2 << "\n\n";

    menuAgain();
}

/* #7 Rechteck berechnug*/
void rechteck(){
    double zahl1, zahl2 = 0;
    double temp1, ergebnis1, ergebnis2 = 0;
    cout << title("Rechteck Berechnung") << endl;
    cout << "Geben Sie bitte die erste Zahl (A) ein? \n";
    cin >> zahl1;
    eingabeCheck(zahl1);
    cout << "Geben Sie bitte die zweite Zahl (u) ein? \n";
    cin >> zahl2;
    eingabeCheck(zahl2);

    ergebnis1 = mal(zahl1,zahl2);
    temp1 =  addation(zahl1,zahl2);
    ergebnis2 = 2*temp1;

    cout << "Das Rechteck A betraegt: " << ergebnis1 << endl;
    cout << "Das Rechteck u betraegt: " << ergebnis2 << "\n\n";

    menuAgain();
}

/* #8 Parallelgramm berechnug*/
void parallelgramm(){
    double zahl1, zahl2 = 0;
    double temp1, ergebnis1, ergebnis2 = 0;
    cout << title("Parallelgramm Berechnung") << endl;
    cout << "Geben Sie bitte die erste Zahl (A) ein? \n";
    cin >> zahl1;
    eingabeCheck(zahl1);
    cout << "Geben Sie bitte die zweite Zahl (u) ein? \n";
    cin >> zahl2;
    eingabeCheck(zahl2);

    ergebnis1 = zahl1*zahl2;
    temp1 = zahl1+zahl2;
    ergebnis2 = 2*temp1;

    cout << "Das Parallelgramm A betraegt: " << ergebnis1 << endl;
    cout << "Das Parallelgramm u betraegt: " << ergebnis2 << "\n\n";

    menuAgain();
}

/* #9 Dreiecke allgemein berechnug*/
void dreiecke(){
    double zahl1, zahl2, zahl3, zahl4 = 0;
    double temp1, ergebnis1, ergebnis2 = 0;
    cout << title("Dreiecke allgemein Berechnung") << endl;
    cout << "Geben Sie bitte die erste Zahl (A) c ein? \n";
    cin >> zahl1;
    eingabeCheck(zahl1);
    cout << "Geben Sie bitte die zweite Zahl (A) h ein? \n";
    cin >> zahl2;
    eingabeCheck(zahl2);
    cout << "Geben Sie bitte die dritte Zahl (u) a ein? \n";
    cin >> zahl2;
    eingabeCheck(zahl2);
    cout << "Geben Sie bitte die virtte Zahl (u) b ein? \n";
    cin >> zahl4;
    eingabeCheck(zahl4);

    temp1 = zahl1*zahl2;
    ergebnis1 = temp1/2;
    ergebnis2 = zahl2+zahl4+zahl1;

    cout << "Das Dreiecke A betraegt: " << ergebnis1 << endl;
    cout << "Das Dreiecke u betraegt: " << ergebnis2 << "\n\n";

    menuAgain();
}


//after any action this funk. will be called.
void menuAgain(){
    char jaNein;
    dot(45, '-');
    cout << "wollen sie weiter machen? [y,n]\n";
    cout << "y startet das program agin | n beendet das programm\n";
    cin >> jaNein;

    switch(jaNein){
        case 'Y': case 'y': system("clear"); menu(); break;
        case 'N': case 'n': system("clear"); sure(); break;

        default: system("clear"); cout << "y Buchstabe oder n !!\n Sorry du kannst es aber wieder starten!"; break;
    }
}

// It will always check the input
double eingabeCheck(double eingabe){

if (eingabe <= 0){
    system("clear");
    cout << "Die zahl musst grosser als [ 0 ] sein. \n";
    exit(0);
    }

    return eingabe;
}

//will set the Title of one of part of them
string title(string title){
    string temp;
    temp =  "|--------------------------------------------\n";
    temp += "| "+ title + "\n";
    temp += "|--------------------------------------------";

    return temp;
}

//plus berechnung
double addation(double z1, double z2){

    return (z1+z2);
}

// minus berechnung
double substaction(double z1, double z2){

    return (z1-z1);
}

//mehrere Eingabe addidation
double addMehrZahl(double a, double b, double c){

    return (a+a)+(b+b)+(c+c);
}

//end line
int dot(int num, char zeichen){

    for(int i = 1; i < num; i++){
        cout << zeichen;

        if( i == num-1 ){
            cout << endl;
        }
    }
}

//sure
void sure(){
    char jaNein;
    cout << "Sind Sie sicher, dass Sie das Programm beenden wollen?\n";
    cout << "[j] schlisst das Program [n] wird Menu gezeigt.\n\n";

    cin >> jaNein;
    switch(jaNein){
        case 'j': case 'J': system("clear"); exit(0); break;
        case 'n': case 'N': system("clear"); menu(); break;
        default: system("clear"); cout << "J Buchstabe oder n !!\n Sorry du kannst es aber wieder starten"; break;
    }
}