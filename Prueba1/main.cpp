#include<iostream>
#include<sstream>
using namespace std;

class Empleado{
private:
   string name;
   double paga;
public:
    Empleado(){
        name = "";
        paga = 0;
    } 
    Empleado(string nombreEm, double pagoEm){
        name= nombreEm;
        paga= pagoEm;
    }
    string getName(){
        return name;
    }
    void setName(string namEm){
        name=namEm;
    }
    double getPago(){
        return paga;
    }
    void setPago(double pagoEm){
        paga=pagoEm;
    }
    string toString(){
        stringstream sem;
        sem << name << " : " << paga;
        return sem.str();
    }
};
int main(){
    Empleado emp1("Isabel Gonzalez", 150);
    Empleado emp2("Statinamina fugardo", 1378);
    cout<< emp1.toString() << endl;
    cout<< emp2.toString() << endl;
    return 0; 
}
