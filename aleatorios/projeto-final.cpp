#include <iostream>
#include <string.h>
using namespace std;

void funcaoPrepago(double &total){
    int opTipoPlano, opLigacao, tempoLigacao, opPagamento, opBandeira;
    do{
        cout<<"Basic (1), Silver (2) ou Gold (3)"<<endl;
        cin>>opTipoPlano;
        if( opTipoPlano > 3 || opTipoPlano < 1 ){
            cout<<"categoria indisponivel"<<endl;
        }
    }while(opTipoPlano > 3 || opTipoPlano < 1);
    
    switch (opTipoPlano){
        case 1:
            //ligacao internacional
            do{
                do{
                    cout<<"Teve ligacao internacional? (sim - 1) (nao - 2)"<<endl;
                    cin>>opLigacao;
                    if( opLigacao > 2 || opLigacao < 1 ){
                        cout<<"opcao indisponivel"<<endl;
                    }
                }while(opLigacao > 2 || opLigacao < 1 );
            
                if(opLigacao == 1){
                    cout<<"Quanto tempo? (min) "<<endl;
                    cin>>tempoLigacao;
                    total = (tempoLigacao*1.5);
                }else{
                    break;
                }
                
                if( opLigacao > 2 || opLigacao < 1 ){
                    cout<<"opcao indisponivel"<<endl;
                }
            }while(opLigacao >2 || opLigacao < 1 );
            
            //forma de pagamento
            do{
                cout<<"Qual forma de pagamento? (cartao - 1) (dinheiro - 2) (pix - 3)"<<endl;
                cin>>opPagamento;
                if( opPagamento > 3 || opPagamento < 1 ){
                    cout<<"opcao indisponivel"<<endl;
                }
            }while(opPagamento > 3 || opPagamento < 1);
            if(opPagamento == 1){
                do{
                    cout<<"Qual a bandeira? (mastercard - 1) (elo - 2) (visa - 3) (outros - 4)"<<endl;
                    cin>>opBandeira;
                    if( opBandeira > 4 || opBandeira < 1 ){
                        cout<<"opcao indisponivel"<<endl;
                    }
                }while(opBandeira > 4 || opBandeira < 1);

                if(opBandeira == 1){
                    total = total - ((total*5)/100);
                }
            }

            //somatoria do valor a pagar
            total = total + 9.99;
            break;
        case 2:
            // ligacao internacional
            do{
                do{
                    cout<<"Teve ligacao internacional? (sim - 1) (nao - 2)"<<endl;
                    cin>>opLigacao;
                    if( opLigacao > 2 || opLigacao < 1 ){
                        cout<<"opcao indisponivel"<<endl;
                    }
                }while(opLigacao > 2 || opLigacao < 1 );

                if(opLigacao == 1){
                    cout<<"Quanto tempo? (min) "<<endl;
                    cin>>tempoLigacao;
                    total = (tempoLigacao*1.5);
                }else{
                    break;
                }

                if( opLigacao > 2 || opLigacao < 1 ){
                    cout<<"opcao indisponivel"<<endl;
                }
            }while(opLigacao >2 || opLigacao < 1 );

            //forma de pagamento
            do{
                cout<<"Qual forma de pagamento? (cartao - 1) (dinheiro - 2) (pix - 3)"<<endl;
                cin>>opPagamento;
                if( opPagamento > 3 || opPagamento < 1 ){
                    cout<<"opcao indisponivel"<<endl;
                }
            }while(opPagamento > 3 || opPagamento < 1);
            if(opPagamento == 1){
                do{
                    cout<<"Qual a bandeira? (mastercard - 1) (elo - 2) (visa - 3) (outros - 4)"<<endl;
                    cin>>opBandeira;
                    if( opBandeira > 4 || opBandeira < 1 ){
                        cout<<"opcao indisponivel"<<endl;
                    }
                }while(opBandeira > 4 || opBandeira < 1);

                if(opBandeira == 1){
                    total = total - ((total*7)/100);
                }
            }

            //somatoria do valor a pagar
            total = total + 11.99;
            break;
        case 3:
            //ligacao internacional
            do{
                do{
                    cout<<"Teve ligacao internacional? (sim - 1) (nao - 2)"<<endl;
                    cin>>opLigacao;
                    if( opLigacao > 2 || opLigacao < 1 ){
                        cout<<"opcao indisponivel"<<endl;
                    }
                }while(opLigacao > 2 || opLigacao < 1 );

                if(opLigacao == 1){
                    cout<<"Quanto tempo? (min) "<<endl;
                    cin>>tempoLigacao;
                    total = (tempoLigacao*1.5);
                }else{
                    break;
                }
                if( opLigacao > 2 || opLigacao < 1 ){
                    cout<<"opcao indisponivel"<<endl;
                }
            }while(opLigacao >2 || opLigacao < 1 );
            
            //forma de pagamento
            do{
                cout<<"Qual forma de pagamento? (cartao - 1) (dinheiro - 2) (pix - 3)"<<endl;
                cin>>opPagamento;
                if( opPagamento > 3 || opPagamento < 1 ){
                    cout<<"opcao indisponivel"<<endl;
                }
            }while(opPagamento > 3 || opPagamento < 1);
            if(opPagamento == 1){
                do{
                    cout<<"Qual a bandeira? (mastercard - 1) (elo - 2) (visa - 3) (outros - 4)"<<endl;
                    cin>>opBandeira;
                    if( opBandeira > 4 || opBandeira < 1 ){
                        cout<<"opcao indisponivel"<<endl;
                    }
                }while(opBandeira > 4 || opBandeira < 1);

                if(opBandeira == 1){
                    total = total - ((total*10)/100);
                }
            }

            //somatoria do valor a pagar
            total = total + 18.99;
            break;
    }
    return;
};

void funcaoPospago(double &total){
    int opTipoPlano, opLigacao, tempoLigacao, opPagamento, opBandeira, internet, exedente, sobra;
    
    do{
        cout<<"Basic (1), Silver (2) ou Gold (3)"<<endl;
        cin>>opTipoPlano;
        if( opTipoPlano > 3 || opTipoPlano < 1 ){
            cout<<"categoria indisponivel"<<endl;
        }
    }while(opTipoPlano > 3 || opTipoPlano < 1);
    
    switch (opTipoPlano){
        case 1:
            cout<<"Quantos de internet usada (Gb)?" << endl;
            cin>>internet;
			if(internet>43){
				exedente = internet - 43;
				exedente = (exedente)*2;
				total = total + exedente;
			}else{
				sobra = 43 - internet;
				sobra = sobra*2;
				total = total - sobra;	
			}

            //ligacao internacional
            do{
                do{
                    cout<<"Teve ligacao internacional? (sim - 1) (nao - 2)"<<endl;
                    cin>>opLigacao;
                    if( opLigacao > 2 || opLigacao < 1 ){
                        cout<<"opcao indisponivel"<<endl;
                    }
                }while(opLigacao > 2 || opLigacao < 1 );
                if(opLigacao == 1){
                    cout<<"Quanto tempo? (min) "<<endl;
                    cin>>tempoLigacao;
                    total = (tempoLigacao*1.5);
                }else{
                    break;
                }
                if( opLigacao > 2 || opLigacao < 1 ){
                    cout<<"opcao indisponivel"<<endl;
                }
            }while(opLigacao >2 || opLigacao < 1 );

            //forma de pagamento
            do{
                cout<<"Qual forma de pagamento? (cartao - 1) (dinheiro - 2) (pix - 3)"<<endl;
                cin>>opPagamento;
                if( opPagamento > 3 || opPagamento < 1 ){
                    cout<<"opcao indisponivel"<<endl;
                }
            }while(opPagamento > 3 || opPagamento < 1);
            if(opPagamento == 1){
                do{
                    cout<<"Qual a bandeira? (mastercard - 1) (elo - 2) (visa - 3) (outros - 4)"<<endl;
                    cin>>opBandeira;
                    if( opBandeira > 4 || opBandeira < 1 ){
                        cout<<"opcao indisponivel"<<endl;
                    }
                }while(opBandeira > 4 || opBandeira < 1);

                if(opBandeira == 1){
                    total = total - ((total*5)/100);
                }
            }

            //somatoria do valor a pagar
            total = total + 119.99;
            break;
        case 2:
            cout<<"Quantos de internet usada (Gb)?" << endl;
            cin>>internet;
			if(internet>53){
				exedente = internet - 53;
				exedente = (exedente)*2;
				total = total + exedente;
			}else{
				sobra = 53 - internet;
				sobra = sobra*2;
				total = total - sobra;	
			}

            //ligacao internacional
            do{
                do{
                    cout<<"Teve ligacao internacional? (sim - 1) (nao - 2)"<<endl;
                    cin>>opLigacao;
                    if( opLigacao > 2 || opLigacao < 1 ){
                        cout<<"opcao indisponivel"<<endl;
                    }
                }while(opLigacao > 2 || opLigacao < 1 );

                if(opLigacao == 1){
                    cout<<"Quanto tempo? (min) "<<endl;
                    cin>>tempoLigacao;
                    total = (tempoLigacao*1.5);
                }else{
                    break;
                }
                if( opLigacao > 2 || opLigacao < 1 ){
                    cout<<"opcao indisponivel"<<endl;
                }
            }while(opLigacao >2 || opLigacao < 1 );
            
            //forma de pagamento
            do{
                cout<<"Qual forma de pagamento? (cartao - 1) (dinheiro - 2) (pix - 3)"<<endl;
                cin>>opPagamento;
                if( opPagamento > 3 || opPagamento < 1 ){
                    cout<<"opcao indisponivel"<<endl;
                }
            }while(opPagamento > 3 || opPagamento < 1);
            if(opPagamento == 1){
                do{
                    cout<<"Qual a bandeira? (mastercard - 1) (elo - 2) (visa - 3) (outros - 4)"<<endl;
                    cin>>opBandeira;
                    if( opBandeira > 4 || opBandeira < 1 ){
                        cout<<"opcao indisponivel"<<endl;
                    }
                }while(opBandeira > 4 || opBandeira < 1);

                if(opBandeira == 1){
                    total = total - ((total*7)/100);
                }
            }

            //somatoria do valor a pagar
            total = total + 139.99;
            break;
        case 3:
            cout<<"Quantos de internet usada (Gb)?" << endl;
            cin>>internet;
			if(internet>63){
				exedente = internet - 63;
				exedente = (exedente)*2;
				total = total + exedente;
			}else{
				sobra = 63 - internet;
				sobra = sobra*2;
				total = total - sobra;	
			}

            //ligacao internacional
            do{
                do{
                    cout<<"Teve ligacao internacional? (sim - 1) (nao - 2)"<<endl;
                    cin>>opLigacao;
                    if( opLigacao > 2 || opLigacao < 1 ){
                        cout<<"opcao indisponivel"<<endl;
                    }
                }while(opLigacao > 2 || opLigacao < 1 );
                
                if(opLigacao == 1){
                    cout<<"Quanto tempo? (min) "<<endl;
                    cin>>tempoLigacao;
                    total = (tempoLigacao*1.5);
                }else{
                    break;
                }
                if( opLigacao > 2 || opLigacao < 1 ){
                    cout<<"opcao indisponivel"<<endl;
                }
            }while(opLigacao >2 || opLigacao < 1 );
            
            //forma de pagamento
            do{
                cout<<"Qual forma de pagamento? (cartao - 1) (dinheiro - 2) (pix - 3)"<<endl;
                cin>>opPagamento;
                if( opPagamento > 3 || opPagamento < 1 ){
                    cout<<"opcao indisponivel"<<endl;
                }
            }while(opPagamento > 3 || opPagamento < 1);
            if(opPagamento == 1){
                do{
                    cout<<"Qual a bandeira? (mastercard - 1) (elo - 2) (visa - 3) (outros - 4)"<<endl;
                    cin>>opBandeira;
                    if( opBandeira > 4 || opBandeira < 1 ){
                        cout<<"opcao indisponivel"<<endl;
                    }
                }while(opBandeira > 4 || opBandeira < 1);

                if(opBandeira == 1){
                    total = total - ((total*10)/100);
                }
            }

            //somatoria do valor a pagar
            total = total + 159.99;
            break;
        }

    return;
};
struct dadosUsuario{
    char nome[51];
    char cpf[13];
    double totalPagar;
};

int main(){
    setlocale(LC_ALL, "Portuguese"); //seta uso do idioma português
    char opFatura[5];
    int plano, opCadastro; //operadores
    char checkCpf[13], checkNome[51]; //checkagem da fatura
    int i=0;
    int contPessoas = 0;
    int validaUsuario = 0;
    double total;

    dadosUsuario vetUsuario[50];

    do{
        // dados do usuario
        cout<<"Dados do usuario "<<endl;
        cout<<"Nome: ";
        cin.getline(vetUsuario[i].nome, 51);
        do{
            cout<<"CPF: ";
            cin.getline(vetUsuario[i].cpf, 51);
            if(strlen(vetUsuario[i].cpf) != 11){
                cout<<"CPF invalido, digite novamente"<<endl;
            }
		}while(strlen(vetUsuario[i].cpf) != 11);
        cout<<endl;

        // tipo de plano
        do{
            cout<<"Tipo de plano? (pre-pago - 1) ou (pos-pago - 2)"<<endl;
            cin>>plano;

            if(plano == 1){
                funcaoPrepago(total);
				vetUsuario[i].totalPagar = total;
            }else if(plano == 2){
                funcaoPospago(total);
				vetUsuario[i].totalPagar = total;
            }
            if( plano > 2 || plano < 1 ){
                cout<<"plano indisponivel"<<endl;
            }
        }while(plano > 2 || plano < 1);

        // incrementacao do indice e pessoas
        i++;
        contPessoas++;

        cout<<endl;
        do{
            cout<<"Deseja cadastrar mais uma pessoa? (sim - 1) (nao - 2)"<<endl;
            cin>>opCadastro;
            if(opCadastro > 2 || opCadastro < 1){
                cout<<"opcao indisponivel"<<endl;
            }
        }while(opCadastro > 2 || opCadastro < 1);
        cin.ignore();
    }while(opCadastro == 1);
    
    //checkagem da fatura
    do{
        cout<<endl;
        cout<<"Para consultar a fatura digite"<<endl;
        cout<<"CPF: ";
        cin.getline(checkCpf, 13);
        cout<<"Nome: ";
        cin.getline(checkNome, 51);

        //algo de errado
        for(int i=0; i<contPessoas; i++){
            if((strcmp(vetUsuario[i].nome,checkNome ) == 0) && (strcmp(vetUsuario[i].cpf, checkCpf) == 0)){
                cout<<"nome digitado: "<<checkNome<<endl;
                cout<<"nome encontrado: "<<vetUsuario[i].nome<<endl;
                cout<<"Pagar: R$"<<vetUsuario[i].totalPagar<<endl;
                validaUsuario++;
            }
        }

        // validacao do usuario
        if(validaUsuario == 0){
            cout<<"Usuario nao encontrado"<<endl;
        }
    
        cout<<"deseja consultar mais uma fatura? (sim ou nao)"<<endl;
        cin>>opFatura;
        validaUsuario = 0;
        cin.ignore();
    }while(strcmp(opFatura, "nao") != 0);
}