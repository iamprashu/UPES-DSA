#include<iostream>
using namespace std;

int main(){
    int size = 5;

    for(int i=1; i<=size*2; i++){
            for(int j=1; j<size*2; j++){
                cout<<"* ";
            }
            cout<<endl;
    }
}