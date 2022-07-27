#include <iostream>
using namespace std;
int main(){
    int n, x, pos;
    int contS = 0;
    int contN = 0;
    cin>>n;
    int vet[n];

    for(int i=0; i<n; i++){
        cin>>vet[i];
    }
    cin>>x;
    for(int i=0; i<n; i++){
        if(x == vet[i]){
            contS++;
            pos = i+1;
        }else{
            contN++;
        } 
    }
        if(contS == 0){
            cout<<"Nao encontrado"<<endl;
        }else{
            cout<<"Posicao"<<pos<<endl;
        } 
    return 0;
}