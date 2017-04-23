#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
double time_srok(double time, double income);

int main(){
    setlocale(LC_ALL, "Russian");
    double time, income;
    cout << "Vvedite srok vklada:  ";
    cin >> time;
    cout << "Vvedite summu vklada: ";
    cin >> income;
    cout << endl;
    
    cout << "Summa vklada posle okonchaniya sroka(" << time << "dnej): " << time_srok(time, income) << " rub." << endl;
    
    cout << endl;
    
    system("pause");
    return 0;
}
double time_srok(double time, double income){
    double option;
    double percent = income / 100;
