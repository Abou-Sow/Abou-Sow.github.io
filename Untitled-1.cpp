#include <iostream>

using namespace std;

class Calcul
{
public:
    double Addition(double, double);
    double Soustraction(double, double);


    double Addition(double x, double y)
    {
        return x + y;
    };
    double Soustraction(double x, double y)
    {
        return x - y;
    }
};

int main()
{
    Calcul objet;
    Calcul* objet1;

    double a = objet1->Soustraction(487, 999);
    double b = objet.Addition(24, 93);

    cout << "le résultat de a est: " << a << endl;
    cout << "le résultat de b est: " << b << endl;

    return 0;
}