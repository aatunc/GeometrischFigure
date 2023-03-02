// GeometrischFigure.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>

using namespace std;

class GeometrischeFigur {
private:
	string farbe = "";
public:
	void set_farbe(string neueFarbe) {
		farbe = neueFarbe;
	}
	string get_farbe() {
		return farbe;
	}
	virtual double berechneflaeche(double x, double y) = 0;
};
class Kreis : public GeometrischeFigur {
public:
	double berechneflaeche(double x, double y) {
		return 3.14 * x * x;
	}
};
class Rechtek : public GeometrischeFigur {
	public:
	double berechneflaeche(double x, double y) {
	return x * y;
	}
};

int main() {

	double kreisflaeche, rechtekflaeche;

	GeometrischeFigur* k1, * r1;
	k1 = new Kreis();
	k1->set_farbe("Blau");
	kreisflaeche = k1->berechneflaeche(5, 0);
	r1 = new Rechtek();
	rechtekflaeche = r1->berechneflaeche(2, 2);
	r1->set_farbe("Rot");
	cout << "KreisFarbe: " << k1->get_farbe() << ", KreisFlaeche:" << kreisflaeche << endl;
	cout << "RechteckFarbe: " << r1->get_farbe() << ", RechteckFlache: " << rechtekflaeche << endl;
	return 0;
}