#include <iostream>

#include <vector>

using namespace std;

void CE2();
void CE1();

int main(){

    CE2();

}

void CE2(){

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
