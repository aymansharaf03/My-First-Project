#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void CE3(){
    int n;
    cin>>n;
    vector <int> list(n);
    int x;

    for (int i=0; i<n; i++){
        cin>>x;
        list[i]= x;
    }

    // sort

    sort(list.begin(), list.end());

    for (int i=0; i<n; i++) {

        if (i != 0 && list[i] == list[i-1]){
            continue;
        }

        int counter = 0;
        for (int p = 0; p<n; p++) {
            if (list[i]==list[p]){
                counter++;
            }
        }
        cout<< list[i]<<": "<<counter<<" times"<<endl;
    }
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
