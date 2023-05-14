#include <iostream>
using namespace std;

int main() {
    int grades[10];
    for(int i=0; i<10; i++) {
        cout << "Enter grade " << i+1 << ": ";
        cin >> grades[i];
    }
    // ???? ???? ????? ?? ???? ????? ?? ??????? ?? ???????? ???????? ?????
    for(int i=0; i<10; i++) {
        for(int j=0; j<10-i-1; j++) {
            if(grades[j] < grades[j+1]) {
                int temp = grades[j];
                grades[j] = grades[j+1];
                grades[j+1] = temp;
            }
        }
    }
    cout << "Grades in descending order: ";
    for(int i=0; i<10; i++) {
        cout << grades[i] << " ";
    }
    cout << endl;
    return 0;
}