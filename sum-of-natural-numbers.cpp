#include <iostream>

using namespace std;

int sum(int n);

int main (void){
    int n = 0;
    cout << "n = ";
    cin >> n;
    int totalsum = sum(n);
    cout << totalsum << endl;
}

int sum(int num){
    int total = 0;
    for(int i = 1; i <= num ; i++){
        total += i;
    }
    return total;
}