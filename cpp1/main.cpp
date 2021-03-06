/***
В некоторой школе решили набрать три новых математических класса
и оборудовать кабинеты для них новыми партами. За каждой партой
может сидеть два учащихся. Известно количество учащихся в каждом 
из трех классов. Выведите наименьшее число парт, которое нужно
приобрести для них. Каждый класс сидит в своем кабинете.

Формат входных данных

Программа получает на вход три целых неотрицательных числа:
количество учащихся в каждом из трех классов (числа не превышают 1000).
***/

#include <iostream>

using namespace std;

int main(){
    
    int N, a, b, c;
    cin>>a>>b>>c;
    
    if (a%2 != 0){
        a = a+1;
        a = a/2;
    }
    else{
        a = a/2;
    }
    
    if (b%2 != 0){
        b = b+1;
        b = b/2;
    }
    else{
        b = b/2;
    }
    
    if (c%2 != 0){
        c = c+1;
        c = c/2;
    }
    else{
        c = c/2;
    }
    
    N = a+b+c;
    cout<<N;
    
    return 0;
}
