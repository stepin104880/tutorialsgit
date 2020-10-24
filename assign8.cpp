#include <iostream>
using namespace std;
int sum=0;

int  vsum(int n) {
    
    cout<<"SUM of numbers:"<<sum<<endl;
}

template<typename T, typename... Types>
void vsum(int n,T v, Types... others) {
    sum += v;
    vsum(n-1,others...);
}

int main() {
     vsum(3,4);
     vsum(11,13,5);
     vsum(1,1,17,9);
     vsum(27,20,16,36,54);
    return 0;
}


