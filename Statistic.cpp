#include "Statistic.hpp"
#include <iostream>
#include <algorithm>
using namespace std;

Statistic::Statistic(int *data, int length){
            state = data;
            panjang = length;
}
void Statistic::print(){
    for (int i = 0; i < panjang; i++) {
        std::cout << state[i] << std::endl;
    }
}

void Statistic::Mean(){
    int count = 0,temp = 0;
    double hasil;
    for (int i = 0; i < panjang; i++) {
        temp += state[i];
        count++;
    }
    hasil =(double) temp/count;
    std::cout << hasil << std::endl;

}

void Statistic::Median(){
    int temp;
    for (int i = 0; i < panjang; i++) {
        for (int j = i+1; j < panjang; j++) {
            if(state[i]>state[j]){
                temp = state[i];
                state[i] = state[j];
                state[j] = temp;
            }
        }

    }
   if(panjang % 2 != 0){
       int tengah = (panjang/2)-1;
       std::cout << state[tengah] << std::endl;
   }else{
       int tengah = (panjang/2)-1;
       int tengah2 = (panjang/2);
       int hasil = (state[tengah] + state[tengah2])/2;
       std::cout << hasil << std::endl;
   }

}