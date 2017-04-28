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
double time_srok(double time, double income) {
    double option;
    double percent = income / 100;
    
      if(time > 0 && time <= 30 && income > 10000 && income <= 100000) {option = percent * 10; option = income - option;} else
        if(time > 0 && time <= 30 && income > 10000 && income > 100000) {option = percent * 10; option = income - option;} else
            if(time >= 31 && time <= 120 && income > 10000 && income <= 100000) {option = percent * 2; option = option + income;} else
                if(time >= 31 && time <= 120 && income > 10000 && income > 100000) {option = percent * 3; option = option + income;} else
                    if(time >= 121 && time <= 240 && income > 10000 && income <= 100000) {option = percent * 6; option = option + income;} else
                        if(time >= 121 && time <= 240 && income > 10000 && income > 100000) {option = percent * 8; option = option + income;} else
                            if(time >= 241 && time <= 365 && income > 10000 && income <= 100000) {option = percent * 12; option = option + income;} else
                                if(time >= 241 && time <= 365 && income > 10000 && income > 100000) {option = percent * 15; option = option + income;} else
                                    cout << "ERROR! CHitajte usloviya vlkada!" << endl;
    return  option;
}

