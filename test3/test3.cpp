#include <iostream>

using namespace std;

void Print(){ 
    cout << endl;
}

template<typename T, typename... Params>
void Print(T &&a, Params&&... args){
    cout << a;
    if (sizeof...(args) != 0){
        cout << ", ";
    }
    Print(forward<Params>(args)...);
}

int main(){
    Print(1, 3.5f, 1e-10, 3+5, 'a', "Kavy");
    return 0;
}