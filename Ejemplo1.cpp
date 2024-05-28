#include<iostream>

using namespace std;

int main(){
    int num[5],numero,i;
    
    for(i=0 ; i<5 ; ++i){
    	
        cout<<"Digite un numero para la posicion "<<i<<":";
        cin>>numero;
        num[i]=numero;
    }
    
    for (i=0 ; i<5 ; ++i){
        cout<<"El dato en la posicion "<<i<<" es:"<<num<<endl;
    }
    
    return 0;
}

