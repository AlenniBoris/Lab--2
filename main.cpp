#include <iostream>
# include <ctime>

using namespace std;

double* Randomaizer(double *arr,int  arraysize){
    int i = 0;
    srand(time(NULL));
    double maxNumber,minNumber;
    cout << "Enter max number for random : ";
    cin >> maxNumber;
    cout << "Enter min number for random : ";
    cin >> minNumber;
    if (minNumber > maxNumber){
        swap(maxNumber,minNumber);
    }
    cout << "Your array: ";
    cout << "[ ";
    for (i;i<arraysize;i++){
        do
        {
            double m = (double)rand() / RAND_MAX;
            arr[i] = 2 * maxNumber * sin(minNumber + 2 * m * (maxNumber - minNumber));
        } while (arr[i] > maxNumber || arr[i] < minNumber);
        cout << arr[i] <<" ";
    }
    cout << "]" << endl;

    return arr;
}

float Summa(double *arr,int  arraysize){
    int i = 0;
    float sum = 0;
    for (i = 0; i < arraysize; i++) {
        if (i % 2 == 0) {
            sum=sum+arr[i];
        }
    }
    cout <<"\n  Summa: " << sum <<endl;
    return sum;
}

double* Transform(double *arr,int  arraysize) {
    for (int u = 1; u <= arraysize; u++)
    {
        if (abs(arr[u]) < 1)
        {
            arr[u] = 0;
        }
    }
    int h = 0;
    for (int p = 1; p <= arraysize; p++)
    {
        if (arr[p] == 0)
        {
            for (int t = p; t <= arraysize; t++)
            {
                arr[t] = arr[t + 1];
            }
            arr[arraysize] = 0;
            arraysize--;
            p--;
            h++;
        }
    }
    cout << "Transform massive: "
         << "[";
    for (int r = 1; r <= arraysize + h; r++)
    {
        cout << arr[r] << " ";
    }
    cout << "]";
    return arr;
}

float Proizvedenie(double *arr,int  arraysize){
    int i = 0;
    int max,min;
    int multiplier = 1;
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
    cout<<"Multiplier="<<multiplier<<"\n";
    return multiplier;
}

int main() {
    int choise;
    int arraysize = 0;
    const int systemsize = 20;
    cout << " Enter array capacity: ";
    cin >> arraysize;
    while(arraysize <=0 || arraysize > systemsize ){
        cout << "Capacity must be positive and less than 20 \n";
        cin >> arraysize;
    }
    cout << "You want to fill in array by hands?(Yes(Enter 1) or No(Enter 0)) : ";
    cin >> choise;
    while (choise < 0 || choise > 1){
        cout << "input 0 or 1 \n";
        cin >> choise;
    }
    double *arr = new double [arraysize];
    if (choise == 1){
        cout << "PLease enter members of array\n";
        for (int i = 0; i < arraysize; i++)
        {
            cin >> arr[i];
        }
        
    }
    if (choise == 0){
        Randomaizer(arr,arraysize);
    }
    Summa(arr,arraysize);
    Proizvedenie(arr,arraysize);
    Transform(arr,arraysize);
    return 0;
}
