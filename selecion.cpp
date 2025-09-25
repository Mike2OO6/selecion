#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
int main() {
    const int N = 10;      
    int arr[N];
 
    srand(time(0));

    for (int i = 0; i < N; i++) {
        arr[i] = 1 + rand() % 15;
    }

    cout << "Lista original: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < N - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < N; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    cout << "Lista ordenada: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
