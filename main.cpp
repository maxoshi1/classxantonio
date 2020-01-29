#include <iostream>

using namespace std;
class Quadrato
{

public:

    double qua()
    {
        double perimetro;
        double area;
        double l;
        cout<<"Dammi lato"<<endl;
        cin>>l;
        perimetro=l*4;
        area=l*l;
        cout<<"perimetro area"<<endl<<perimetro<<endl<<area;


    }



};
int main()
{

    Quadrato quadrato;
    quadrato.qua();

    return 0;
}
