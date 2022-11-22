#include <iostream>
using namespace std;

void fibonacci (int n ){
    int a=1 ;
    int b=1 ;
    while(n>2){
         a+=b;
         cout << a << endl;
         if (n==3){
             n--;
             break;
         }else {
             b +=a;
             cout << b << endl ;
             n--;
             n--;
         }

    }

    }




int main() {
    int a = 0;
    cin >> a;
    if (a>2){
        cout << "1" << endl;
        cout << "1" << endl;

        fibonacci(a);

    } else {
        cout << "errore" << endl;
    }
    return 0;
}
