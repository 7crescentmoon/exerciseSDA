#include <iostream>

using namespace std;

void exercise1(int a, int b, int c,int *p1, int *p2,int *p3) {
    cout << "a--> " << a << " b--> " << b << " c--> " << c  
    << " p1--> " << p1 << " p2--> " << p2 << " p3--> " << p3 << endl; 
}

int main(){

    int a = 0, b = 0, c = 0,*p1 = 0, *p2 = 0, *p3 = 0;
    cout << "hasil dari deklarasi\n" ;

    a = 10;
    exercise1(a, b, c, p1, p2, p3);
    
    b = 15;
    exercise1(a, b, c, p1, p2, p3);
    
    p1 = &b;
    exercise1(a, b, c, p1, p2, p3);
    
    p2 = p1;
    exercise1(a, b, c, p1, p2, p3);
    
    c = 27;
    exercise1(a, b, c, p1, p2, p3);
    
    p1 = &c;
    exercise1(a, b, c, p1, p2, p3);
    
    a = *p1;
    exercise1(a, b, c, p1, p2, p3);
    
    p3 = &b;
    exercise1(a, b, c, p1, p2, p3);

    *p2 = 8;
    exercise1(a, b, c, p1, p2, p3);

}