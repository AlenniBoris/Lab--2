#include <iostream>
# include <ctime>

using namespace std;
int main() {

    int choise;
    int arraysize = 0;
    cout << " Enter array capacity";
    cin >> arraysize;

    cout << "You want to fill in array by hands?(Yes(Enter 1) or No(Enter 0)) : ";
    cin >> choise;
    while (choise < 0 || choise > 1){
        cout << "input 0 or 1 \n";
        cin >> choise;
    }

    if (choise == 1){
        int size;
        double *arr = new double [arraysize];
        cout << "PLease enter members of array\n";
        for (int i = 0; i < arraysize; i++)
        {
            cin >> arr[i];
        }

    }

    if (choise == 0){
        int i = 0;
        srand(time(NULL));
        double *arr = new double [arraysize];
        int maxNumber,minNumber;
        //ВВод верхней и нижней границы рандома
        cout << "Enter max number for random : ";
        cin >> maxNumber;
        cout << "Enter min number for random : ";
        cin >> minNumber;
        if (minNumber > maxNumber){
            cout << "wrong data\n";
            return 0;
        }

        for (i;i<arraysize;i++){
            arr[i]= (rand() % (maxNumber - minNumber + 1) + minNumber)  ;
            cout << arr[i] <<" ";
        }

     //   while (i < arraysize) {
       //     double sum = 0;
         //   if (i % 2 != 0){
           //     sum = sum + arr[i];
             //   cout << "Your sum = " << sum;

          //  }
      //  }



    }






    return 0;
}
