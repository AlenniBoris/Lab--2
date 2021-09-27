#include <iostream>
# include <ctime>

using namespace std;
int main() {
    int i = 0;
    int max,min;
    float multiplier = 1;
    float sum = 0;
    int choise;
    int arraysize = 0;
    cout << " Enter array capacity: ";
    cin >> arraysize;
    while(arraysize <=0 ){
        cout << "Capacity must be positive \n";
        cin >> arraysize;
    }

    cout << "You want to fill in array by hands?(Yes(Enter 1) or No(Enter 0)) : ";
    cin >> choise;
    while (choise < 0 || choise > 1){
        cout << "input 0 or 1 \n";
        cin >> choise;
    }

    if (choise == 1){
        double *arr = new double [arraysize];
        cout << "PLease enter members of array\n";
        for (int i = 0; i < arraysize; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < arraysize; i++) {
            if (i % 2 == 0) {
                sum=sum+arr[i];
                cout <<"\n  Summa" << sum <<endl;

            }
        }

        for(i=0;i<arraysize;i++)
        {
            if(arr[i]<0){
                min=i;
                break;
            }
        }
        for(i=0;i<arraysize;i++)
        {
            if(arr[i]<0){
                max=i;
            }
        }
        for(i=min+1;i<max;i++)
        {
            multiplier=arr[i]*multiplier;
        }
        cout<<"Multiplier="<<multiplier;

    }

    if (choise == 0){

        srand(time(NULL));
        float *arr = new float [arraysize];
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

        for (i = 0; i < arraysize; i++) {
            if (i % 2 == 0) {
                sum=sum+arr[i];
                cout <<"\n  Summa" << sum <<endl;

            }
        }

        for(i=0;i<arraysize;i++)
        {
            if(arr[i]<0){
                min=i;
                break;
            }
        }
        for(i=0;i<arraysize;i++)
        {
            if(arr[i]<0){
                max=i;
            }
        }
        for(i=min+1;i<max;i++)
        {
            multiplier=arr[i]*multiplier;
        }
        cout<<"Multiplier="<<multiplier;

    }


    return 0;
}
