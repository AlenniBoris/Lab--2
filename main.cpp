#include <iostream>


using namespace std;
int main() {
 //Задаю основные константы
    double maxNumber,minNumber;
    int choise;
    const int maxsize = 50;
 // Чтобы человек мог выбирать
    cout << "You want to fill in array by hands?(Yes(Enter 1) or No(Enter 0)) : ";
    cin >> choise;
    while (choise < 0){
        cout << "input 0 or 1 \n";
        cin >> choise;
    }
    while (choise > 1){
        cout << "input 0 or 1 \n";
        cin >> choise;
    }
 // Исполнение задач связанных с массивами
    if (choise == 1){
        cout << "test";
    }
 // Если человек выбирает рандом
    if (choise == 0){
        //ВВод верхней и нижней границы рандома
        cout << "Enter max number for random :";
        cin >> maxNumber;
        cout << "Enter min number for random :";
        cin >> minNumber ;


        int mas[maxsize];
        for (int i = 0;i<maxsize;){
            mas[i]= minNumber + rand() % maxNumber;
            if (mas[i] % 2 == 0) {
                i++;
            }
        }
        for (int j = 0; j < maxsize; j++){
            cout << mas[j] << " ";
        }
    }






    return 0;
}
