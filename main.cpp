#include <iostream>
#include <algorithm>
#include <vector>
#include "Practice.cpp"

using namespace std;

void homework();

int main(){

    homework();

    return 0;
}

void homework() {
    int size;
    cin>>size;
    vector <string> list(size);
    for (int i=0; i< list.size(); i++ ){
        cin>>list[i];
    }
    for (int i=0; i< list.size(); i++ ){

        string word = list[i];

        if (word.size()>10){
            cout << word[0] << word.size() - 2 << word[word.size()-1] << endl;
        }
        else {
            cout << word << endl;
        }
    }
}


