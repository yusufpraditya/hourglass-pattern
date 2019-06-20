#include <iostream>
using namespace std;

int number, sum, space;
void generatePattern();


int main(){
    cout << "Masukkan angka: ";
    cin >> number;

    if(number % 2 == 0){
        sum = number / 2;
        generatePattern();
    }

    else {
        sum = (number+1) / 2;
        generatePattern();
    }

    number = 0;
    sum = 0;
    space = 0;
    return main();
}

void generatePattern(){
    for(int i=0; i<sum; i++){
        for(int j=0; j<space; j++){
            cout << " ";
        }

        for(int k=0; k<number; k++){
            cout << "*";
        }

        if(i < sum-1){
            space++;
            number -= 2;
        }
        cout << endl;
    }

    for(int i=0; i<sum; i++){
        for(int j=0; j<space; j++){
            cout << " ";
        }

        for(int k=0; k<number; k++){
            cout << "*";
        }

        if(i < sum-1){
            space--;
            number += 2;
        }
        cout << endl;
    }
}
