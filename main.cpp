#include <iostream>

#include <vector>

using namespace std;

void CE2();
void CE1();

int main(){

    CE2();
}

void CE2(){
    int sizeOfArray;
    cin >> sizeOfArray;
    vector<int> integers(sizeOfArray);

    for (int i=0; i<integers.size(); i++){
        int x;
        cin >> x;
        integers[i]= x;
    }

    int max = numeric_limits<int>::min();
    for (int i=0; i<integers.size(); i++){
        if (integers[i]>max){
            max = integers[i];
        }
    }
    cout << max;
}

void CE1(){
    int n;
    cin>>n;
    vector<int> numbers(n);

    for(int i=0; i<numbers.size() ;i++){
        int x;
        cin>>x;
        numbers[i]= x;
    }
    for (int i=(numbers.size())-1; i>=0; i-- ) {
        cout<< numbers[i] << " ";
    }
}
