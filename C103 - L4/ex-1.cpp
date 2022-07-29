#include <iostream>
using namespace std;
int main(){
    int n=0, x, pos=0;
    int vet[1000];

    cin>>vet[n];
    
    while(vet[n] != -1){
        n++;
        cin>>vet[n];
    }

    cin>>x;
    
    for(int i=0; i<n; i++){
        if(x == vet[i]){
            pos = i;
        }
    }
        if(pos == 0){
            cout<<"Nao encontrado"<<endl;
        }else{
            cout<<"Posicao"<<pos<<endl;
        } 
    return 0;
} 