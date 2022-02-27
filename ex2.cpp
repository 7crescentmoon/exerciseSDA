#include <iostream>

using namespace std;

void exercise2(int a, int b, int c,int *p1, int *p2,int *p3) {
    cout << "a--> " << a << " b--> " << b << " c--> " << c  
    << " p1--> " << p1 << " p2--> " << p2 << " p3--> " << p3 << endl; 
}

int main(){
     
    cout << "hasil dari deklarasi\n" ;

    int a = 0, b = 0, c = 0,*p1 = 0, *p2 = 0, *p3 = 0;

    a = 10;
    exercise2(a, b, c, p1, p2, p3);

    b = 15;
    exercise2(a, b, c, p1, p2, p3);

    c = 27;
    exercise2(a, b, c, p1, p2, p3);

    p1 = &a; 
    exercise2(a, b, c, p1, p2, p3);

    p2 = &b;
    exercise2(a, b, c, p1, p2, p3);

     *p1 = c;
    exercise2(a, b, c, p1, p2, p3);

    a = *p2;
    exercise2(a, b, c, p1, p2, p3);

    b = 6;
    exercise2(a, b, c, p1, p2, p3);
    
    p3 = &b;
    exercise2(a, b, c, p1, p2, p3);

    p3 = &c;
    exercise2(a, b, c, p1, p2, p3);

    *p1 = *p3;
    exercise2(a, b, c, p1, p2, p3);
}