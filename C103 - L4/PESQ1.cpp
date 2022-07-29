#include <iostream>
using namespace std;

int binario(int vet[], int n, int x){
    bool achou = false;
    int b,m,a,pos;
    b = 0;
    a = n-1;

    while((b <= a) && (achou == false)){
        m = (b+a)/2;
        if(x < vet[m]){
            a = m - 1;
        }else if (x > vet[m]){
            b = m + 1;
        }else {
            achou = true;
            pos = m;
        }
    }
    if(achou){
        return pos;
    }else{
        return 0;
    } 
}


int main(){
    int x, pos, i=0;  
    int vet[1000];

    cin>>vet[i];
    while(vet[i] != -1){
        i++;
        cin>>vet[i];
    }
    
    cin>>x;
    
    pos = binario(vet,i,x);
    
    if(pos == 0){
        cout<<x<<" nao encontrado"<<endl;
    }else{
        cout<<x<<" encontrado na posicao"<<pos<<endl;
    } 
    return 0;
}