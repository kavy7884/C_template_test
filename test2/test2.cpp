#include <iostream>

using namespace std;

template<typename T>
T Sum(T *parr, int size){
    T sum{};
    for(int i = 0; i < size; ++i){
        sum += parr[i];
    }
    return sum;
}

int main(){
    int arr[]{ 1, 5, 7, 3};
    int (&ref)[4] = arr;
    for(auto &aa : ref ){
        cout << aa << endl;
    }
    auto s = Sum(ref, 4);

    cout << "Total: " << s << endl;

    return 0;
}