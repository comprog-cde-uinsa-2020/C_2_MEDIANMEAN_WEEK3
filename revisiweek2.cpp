#include <iostream>
#include <algorithm>
using namespace std;

class Statistic{
    int *state;
    int panjang;
    public:

        Statistic(int *data, int length){
            state = data;
            panjang = length;
        }
        void print();
        void Mean();
        void Median();
};

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

int main()
{
   int panjang,pilih;
   std::cout << "Masukkan panjang data : " << std::endl;
   std::cin >> panjang;
   int data[panjang];
   for (int i = 0; i < panjang; i++) {
       std::cout << "Masukkan data ke " << (i+1) << std::endl;
       std::cin >> data[i];
   }

    Statistic statistic(data,panjang);
    std::cout << "1. Tampilkan" << std::endl;
    std::cout <<"2. Mean "  << std::endl;
    std::cout << "3. Median" << std::endl;
    std::cout << "Masukkan pilihan Anda : " << std::endl;
    std::cin >> pilih;
    switch(pilih){
        case 1 :
        statistic.print();
        break;
        case 2 :
        statistic.Mean();
        break;
        case 3 :
        statistic.Median();
        break;
    }

    return 0;
}
