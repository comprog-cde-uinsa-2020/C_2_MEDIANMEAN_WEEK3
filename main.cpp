#include <iostream>
#include <algorithm>
#include "Statistic.cpp"
using namespace std;

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
