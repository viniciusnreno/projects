#include <iostream>
using namespace std;

int binario(int vet[], int n, int x){
    for(int i=0; i<n; i++){
        if(x == vet[i]){
            return i;
        }
    }

}


int main(){
    int n, x, pos;  
    cin>>n;
    int vet[n];

    for(int i=0; i<n; i++){
        cin>>vet[i];
    }
    
    cin>>x;
    
    pos = binario(vet,n,x);
    
    if(pos == 0){
        cout<<"Nao encontrado"<<endl;
    }else{
        cout<<"Corredor "<<pos<<endl;
    } 
    return 0;
}