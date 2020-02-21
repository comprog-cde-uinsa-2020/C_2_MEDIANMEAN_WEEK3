#include <iostream>
#include <algorithm>
using namespace std;

class Statistic{
    int *state;
    int panjang;
    public:

        Statistic(int *data, int length);
        void print();
        void Mean();
        void Median();
};