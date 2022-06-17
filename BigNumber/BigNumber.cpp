#include<list>
#include <queue>
#include<stdio.h>

using namespace std;

list<int> soma(list<int>, list<int>);
list<int> subtracao(list<int>, list<int>);
list<int> vezes10(list<int>*);
list<int> incremento(list<int>, list<int>);
list<int> decremento(list<int>, list<int>);
void printNumber1(list<int> N1);
void printNumber2(list<int> N2);

int main(){
    list<int> N1;
    int V1[] = {8,5,3,4,6,9,8,7,6,7};
    for (size_t i = 0; i < 10; i++){
        N1.push_back(V1[i]);
    }

    list<int> N2;
    int V2[] = {1,4,1,2,3,5,2,3,4,2};
    for (size_t i = 0; i < 10; i++){
        N2.push_back(V2[i]);
    }

    list<int> N3;
    int V3[] = {0,0,0,0,0,0,0,0,0,1};
    for (size_t i = 0; i < 10; i++){
        N3.push_back(V3[i]);
    }

    printf("\n\nPrimeiro numero: ");
    printNumber1(N1);
    printf("\nSegundo numero: ");
    printNumber2(N2);
    
    list<int> Soma = soma(N1, N2);
    list<int> Sub = subtracao(N1, N2);
    list<int> Incremento = incremento(N2, N3);
    list<int> Decremento = decremento(N2, N3);
    list<int> Vezes = vezes10(&N1);

    printf("\nSoma N1 + N2: ");
    printNumber1(Soma);
    printf("\nSubtracao N1 - N2: ");
    printNumber1(Sub);
    printf("\nIncremento de N2: ");
    printNumber1(Incremento);
    printf("\nDecremento de N2: ");
    printNumber1(Decremento);
    printf("\nN1 vezes 10: ");
    printNumber1(Vezes);
    printf("\n\n");
}

list<int> incremento(list<int> A, list<int> B){
    list<int> Incremento;
    list<int>::iterator itA;
    list<int>::iterator itB;
    int soma, x, y, aux=0;
    
    itA = A.end();
    itB = B.end();

    do{
        itA--;
        itB--;
        x = *itA;
        y = *itB;
        soma = x + y + aux;
        aux = (soma > 9) ? 1 : 0;
        Incremento.push_front(soma%10);    
    }while (itA != A.begin());
    return Incremento;
}

list<int> decremento(list<int> A, list<int> B){
    list<int> Sub;
    list<int>::iterator itA;
    list<int>::iterator itB;
    int subtracao, x, y, aux=0;
    
    itA = A.end();
    itB = B.end();

    do{
        itA--;
        itB--;
        x = *itA;
        y = *itB;
        if(x < y){
            subtracao = ((x - aux) + 10) - y;
            aux = 1;
            Sub.push_front(subtracao);
        }
        else{
            subtracao = x - y;
            Sub.push_front(subtracao);
        }    
    }while (itA != A.begin());
    return Sub;
}

list<int> vezes10(list<int> *N1){
    (*N1).push_back(0);
    return (*N1);
}

list<int> soma(list<int> A, list<int> B){
    list<int> Soma;
    list<int>::iterator itA;
    list<int>::iterator itB;
    int soma, x, y, aux=0;
    
    itA = A.end();
    itB = B.end();

    do{
        itA--;
        itB--;
        x = *itA;
        y = *itB;
        soma = x + y + aux;
        aux = (soma > 9) ? 1 : 0;
        Soma.push_front(soma%10);    
    }while (itA != A.begin());
    return Soma;
}

list<int> subtracao(list<int> A, list<int> B){
    list<int> Sub;
    list<int>::iterator itA;
    list<int>::iterator itB;
    int subtracao, x, y, aux = 0;
    
    itA = A.end();
    itB = B.end();

    do{
        itA--;
        itB--;
        x = *itA;
        y = *itB;
        if(x < y){
            subtracao = ((x - aux) + 10) - y;
            aux = 1;
            Sub.push_front(subtracao);
        }
        else{
            subtracao = x - y;
            Sub.push_front(subtracao);
        }    
    }while (itA != A.begin());
    return Sub;
}

void printNumber1(list<int> N1){
    list<int>::iterator it;
    for (it = N1.begin(); it != N1.end(); it++){
        printf("%d", *it);
    }
    printf("\n"); 
}

void printNumber2(list<int> N2){
    list<int>::iterator it;
    for (it = N2.begin(); it != N2.end(); it++){
        printf("%d", *it);
    }
    printf("\n"); 
}