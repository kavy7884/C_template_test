#include <iostream>

using namespace std;

template<typename T>
T Max(T a, T b){
    cout << typeid(T).name() << endl;
    return (a > b) ? a : b;
}

// Explicit Instance
template char Max(char, char);

// Explicit Specialization
template<> const char *Max<const char *>(const char *x, const char *y){
    cout << "*Max<const char *>" << endl;
    return strcmp(x, y) > 0 ? x : y;
}

int main(){

    cout << "test" << endl;

    cout << Max(5.0f, 4.0f) << endl;

    int (*pFn)(int, int) = Max<int>;

    cout << pFn(10, 11) << endl;

    const char *b{ "B" };
    const char *a{ "A" };
    auto s =  Max(b, a);
    cout << s << endl;

    return 0;
}
