// Bibliotheken
#include "stdafx.h"
#include <iostream>
using namespace std;
#include "conio.h"
#include <string>

// Alle Geometrisches Formeln
void quader();
void kugel();
void pyramide();
void kegel();
void kreis();
void ring();
void rechteck();
void parallelogramm();
void dreiecke();

// Funktionen werden aufgerufen
void menu();
void menuAgain();

// Title für jede Funktion
string title(string);

// Check die Eingabe der Tastatur
double eingabeCheck(double);

//Addition
double addition(double, double);

//Addition dreier Summanden
double addMehrZahl(double, double, double);

// Subtraktion
double subtraktion(double, double);

// Multiplikation
double mal(double x, double y = 1) {
	return (x*x*y);
}

// Graphische Abtrennung des Ergebnisses auf der Console
int trenner(int, char);

// Bestätigung
void confirmation();

// Variablen-Deklaration
#define PI 3.14
#define DRITTEL 0.3333333333


/* Main */
int main() {
	// Menu wird aufgerufen
	menu();

	// Damit das Fenster nicht schließt.
	_getch();

	return 0;
}

/* Menu */
void menu() {
	int  auswahl = 0;
	cout << title("Menu") << endl;
	cout << "Welche Geometrisches Form moechten Sie berechnen lassen?\n";
	cout << "\t1. \t Quader \n";
	cout << "\t2. \t Kugel \n";
	cout << "\t3. \t Pyramide (quadratisch)\n";
	cout << "\t4. \t Kegel \n";
	cout << "\t5. \t Kreis \n";
	cout << "\t6. \t Ring \n";
	cout << "\t7. \t Rechteck \n";
	cout << "\t8. \t Parallelogramm \n";
	cout << "\t9. \t Dreiecke (allgemein) \n";
	cout << "\t11. \t exit \n";

	cout << "Geben sie bitte die dazugehoerige Zahl ein: \n";

	cin >> auswahl;

	switch (auswahl)
	{
	case 1: system("cls"); quader(); break;
	case 2: system("cls"); kugel(); break;
	case 3: system("cls"); pyramide(); break;
	case 4: system("cls"); kegel(); break;
	case 5: system("cls"); kreis(); break;
	case 6: system("cls"); ring(); break;
	case 7: system("cls"); rechteck(); break;
	case 8: system("cls"); parallelogramm(); break;
	case 9: system("cls"); dreiecke(); break;
	case 11: system("cls"); cout << "Ende des Programms\n"; exit(0); break;

	default: system("cls"); cout << " Kein bekannter Koerper wurde ausgewaehlt! \n Bitte geben Sie eine Zahl zwischen [1-11] ein!";
		                    cout << "\n Druecken Sie eine Taste um das Programm zu beenden."; break;
	}
}

/* #1 Quader byerechnug*/
void quader()
{
	double zahl1, zahl2, zahl3 = 0;
	double temp1, ergebnis1, ergebnis2 = 0;

	cout << title("Quader Berechnung") << endl;

	cout << "Geben Sie bitte die Laenge ein: \n";
	cin >> zahl1;
	eingabeCheck(zahl1);
	cout << "Geben Sie bitte die Breite ein: \n";
	cin >> zahl2;
	eingabeCheck(zahl2);
	cout << "Geben Sie bitte die Hoehe ein: \n";
	cin >> zahl3;
	eingabeCheck(zahl3);

	ergebnis1 = zahl1*zahl2*zahl3;
	temp1 = addMehrZahl(zahl1, zahl2, zahl3);
	ergebnis2 = 2 * temp1;

	cout << "Das Volumen des Quaders betraegt: " << ergebnis1 << endl;
	cout << "Das ueberflaesche des Quaders betraegt: " << ergebnis2 << "\n\n";

	//Menu wird aufgerufen
	menuAgain();
}

/* #2 Kugel berechnug*/
void kugel()
{
	double temp1, temp2, temp3, temp4, ergebnis1, ergebnis2, ergebnis3, ergebnis4 = 0;
	double zahl1, zahl2 = 0;

	cout << title("Kugel Berechnung") << endl;

	cout << "Geben Sie bitte den Radius ein: \n";
	cin >> zahl1;
	eingabeCheck(zahl1);
	temp1 = mal(zahl1, zahl1);
	ergebnis1 = 4 / 3 * PI * temp1;
	temp2 = mal(zahl1);
	ergebnis2 = 4 * PI*temp2;

	cout << "Das Volumen der Kugel (r) betraegt: " << ergebnis1 << endl;
	cout << "Die Oberflaeche der Kugel (r) betraegt: " << ergebnis2 << endl;

	//Menu wird aufgerufen
	menuAgain();
}

/* #3 Pyramiden Berechnug*/
void pyramide()
{
	double zahl1, zahl2, zahl3 = 0;
	double temp1, temp2, ergebnis1, ergebnis2, ergebnis3 = 0;

	cout << title("Pyramide Berechnung") << endl;

	cout << "Geben Sie bitte die Laenge der quadratischen Grundflaeche ein: \n";
	cin >> zahl1;
	eingabeCheck(zahl1);
	cout << "Geben Sie bitte die Hoehe der quadratischen Grundflaeche ein: \n";
	cin >> zahl2;
	eingabeCheck(zahl2);

	temp1 = mal(zahl1);
	ergebnis1 = DRITTEL*temp1*zahl2;//1/3  //V
	temp2 = mal(zahl2);
	ergebnis2 = zahl1 * (zahl1 + temp2); //O

	cout << "Das Volumen der Pyramide betraegt: " << ergebnis1 << endl;
	cout << "Die Oberflaeche der Pyramide betraegt: " << ergebnis2 << "\n\n";

	//Menu wird aufgerufen
	menuAgain();
}

/* #4 Kegel Berechnug*/
void kegel()
{
	double zahl1, zahl2, zahl3 = 0;
	double temp1, temp2, ergebnis1, ergebnis2, ergebnis3 = 0;

	cout << title("Kegel Berechnung") << endl;

	cout << "Geben Sie bitte die Hoehe ein: \n";
	cin >> zahl1;
	eingabeCheck(zahl1);
	cout << "Geben Sie bitte den Radius ein: \n";
	cin >> zahl2;
	eingabeCheck(zahl2);

	temp1 = mal(zahl1);
	ergebnis1 = DRITTEL*PI*temp1*zahl2; // 1/3
	ergebnis2 = PI*zahl1*(zahl1 * 2);
	temp2 = addition(zahl1, zahl2);

	cout << "Das Volumen des Kegeles betraegt: " << ergebnis1 << endl;
	cout << "Die Oberflaeche des Kegel betraegt: " << ergebnis2 << "\n\n";

	//Menu wird aufgerufen
	menuAgain();
}

/* #5 Kreis Berechnug*/
void kreis()
{
	double zahl1, zahl2 = 0;
	double temp1, temp2, ergebnis1, ergebnis2, ergebnis3, ergebnis4 = 0;

	cout << title("kreis Berechnung") << endl;

	cout << "Geben Sie bitte den Radius ein: \n";
	cin >> zahl1;
	eingabeCheck(zahl1);

	temp1 = mal(zahl1);
	ergebnis1 = PI*temp1;

	temp2 = mal(zahl1);
	ergebnis2 = PI / 4 * temp2;

	cout << "Die Oberflaesche des kreis (r) betraegt: " << ergebnis1 << endl;
	cout << "Der Umfang des kreis (r) betraegt: " << ergebnis2 << "\n\n";

	// Menu wird aufgerufen
	menuAgain();
}

/* #6 Ring Berechnug*/
void ring()
{
	double zahl1, zahl2 = 0;
	double temp1, temp2, temp3, temp4, ergebnis1, ergebnis2 = 0;

	cout << title("Ring Berechnung") << endl;

	cout << "Geben Sie bitte den Ausendurchmesser des Ringes an: \n";
	cin >> zahl1;
	eingabeCheck(zahl1);
	cout << "Geben Sie bitte den Innendurchmesser des Ringes an: \n";
	cin >> zahl2;
	eingabeCheck(zahl2);

	temp1 = mal(zahl1);
	temp2 = mal(zahl2);
	temp3 = subtraktion(temp1, temp2);
	ergebnis1 = PI*temp3;
	temp4 = addition(zahl1, zahl2);
	ergebnis2 = 2 * PI*temp4;

	cout << "Der Flächeninhalt des Ringes betraegt: " << ergebnis1 << endl;
	cout << "Der kombinierte Umfang (innen + aussen) des Ringes betraegt: " << ergebnis2 << "\n\n";

	// Menu wird aufgerufen
	menuAgain();
}

/* #7 Rechteck Berechnug*/
void rechteck()
{
	double zahl1, zahl2 = 0;
	double temp1, ergebnis1, ergebnis2 = 0;

	cout << title("Rechteck Berechnung") << endl;

	cout << "Geben Sie bitte die Laenge des Rechtecks ein: \n";
	cin >> zahl1;
	eingabeCheck(zahl1);
	cout << "Geben Sie bitte die Breite des Rechtecks ein: \n";
	cin >> zahl2;
	eingabeCheck(zahl2);

	ergebnis1 = mal(zahl1, zahl2);
	temp1 = addition(zahl1, zahl2);
	ergebnis2 = 2 * temp1;

	cout << "Die Flaeche des Rechtecks (A)betraegt: " << ergebnis1 << endl;
	cout << "Der Umfang des Rechteck (u) betraegt: " << ergebnis2 << "\n\n";

	//Menu wird aufgerufen
	menuAgain();
}

/* #8 Parallelogramm berechnug*/
void parallelogramm()
{
	double zahl1, zahl2 = 0;
	double temp1, ergebnis1, ergebnis2 = 0;

	cout << title("Parallelgramm Berechnung") << endl;

	cout << "Geben Sie bitte die Laenge ein: \n";
	cin >> zahl1;
	eingabeCheck(zahl1);
	cout << "Geben Sie bitte die Hoehe ein: \n";
	cin >> zahl2;
	eingabeCheck(zahl2);

	ergebnis1 = zahl1*zahl2;
	temp1 = zahl1 + zahl2;
	ergebnis2 = 2 * temp1;

	cout << "Die Flaeche des Parallelogramms betraegt: " << ergebnis1 << endl;
	cout << "Der Umfang des Parallelogramms betraegt: " << ergebnis2 << "\n\n";

	// Menu wird aufgerufen
	menuAgain();
}

/* #9 Dreiecke, allgemeine Berechnug*/
void dreiecke()
{
	double zahl1, zahl2, zahl3, zahl4 = 0;
	double temp1, ergebnis1, ergebnis2 = 0;

	cout << title("Dreiecke allgemein Berechnung") << endl;

	cout << "Geben Sie bitte die erste Zahl (A) c ein: \n";
	cin >> zahl1;
	eingabeCheck(zahl1);
	cout << "Geben Sie bitte die zweite Zahl (A) h ein: \n";
	cin >> zahl2;
	eingabeCheck(zahl2);
	cout << "Geben Sie bitte die dritte Zahl (u) a ein: \n";
	cin >> zahl2;
	eingabeCheck(zahl2);
	cout << "Geben Sie bitte die virte Zahl (u) b ein: \n";
	cin >> zahl4;
	eingabeCheck(zahl4);

	temp1 = zahl1*zahl2;
	ergebnis1 = temp1 / 2;
	ergebnis2 = zahl2 + zahl4 + zahl1;

	cout << "Die Dreiecksoberflaeche betraegt: " << ergebnis1 << endl;
	cout << "Der Dreiecksumfang betraegt: " << ergebnis2 << "\n\n";

	// Menu wird aufgerufen
	menuAgain();
}

// Bei jeder Geometrisches-Formeln wird dieser Funktion  aufgerufen
string title(string title) {
	string temp;
	temp = "|--------------------------------------------\n";
	temp += "| " + title + "\n";
	temp += "|--------------------------------------------";

	return temp;
}

// Nach jeder Berechnung wird diese Funktion ausgefuehrt (Möchten Sie weitere Berechnungen durchfuehren lassen).
void menuAgain()
{
	char jaNein;
	// Trennt die Ausgabe ab.
	// Sie Können die Zahl als auch das Zeichen änderen, wie Sie wollen.
	trenner(45, '-');
	cout << "Wollen Sie weiter machen? [y/n]\n";
	cout << "[y] Startet das Program nochmal | [n] Beendet das Programm!\n";
	cin >> jaNein;

	switch (jaNein)
	{
	case 'Y': case 'y': system("cls"); menu(); break;
	case 'N': case 'n': system("cls"); confirmation(); break;
	default: system("cls"); cout << "Geben Sie bitte nur [y] oder [n] ein!\n Druecken Sie eine Taste um das Programm zu beenden."; break;
	}
}

// Eingabe-Validierung
double eingabeCheck(double eingabe) {
	if (eingabe <= 0) {
		system("cls");
		cout << "Versuchen Sie es erneut! \n";
		exit(0);
	}

	return eingabe;
}

//plus berechnung
double addition(double z1, double z2)
{
	return (z1 + z2);
}

// minus berechnung
double subtraktion(double z1, double z2)
{
	return (z1 - z1);
}

//mehrere Eingabe addidation
double addMehrZahl(double a, double b, double c)
{
	return (a + a) + (b + b) + (c + c);
}

//Erzeugung des graphischen Trenners
int trenner(int num, char zeichen)
{
	for (int i = 1; i < num; i++)
	{
		cout << zeichen;

		if (i == num - 1)
		{
			cout << endl;
		}
	}

	return num + zeichen;
}

//Bestätigung
void confirmation()
{
	char jaNein;
	cout << "Sind Sie sicher, dass Sie das Programm beenden wollen?\n";
	cout << "[j] schlisst das Program, [n] ruft das Menue auf\n\n";

	cin >> jaNein;
	switch (jaNein)
	{
	case 'j': case 'J': system("cls"); exit(0); break;
	case 'n': case 'N': system("cls"); menu(); break;
	default: system("cls"); cout << "Geben Sie bitte nur [j] oder [n] ein!\n Druecken Sie eine Taste um das Programm zu beenden."; break;

	}
}
