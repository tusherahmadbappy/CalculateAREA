#include <iostream>
#include<math.h>
using namespace std;
int main() {
    double r, perimeter,pi;
    cout<<"Enter the circle radious: ";
    cin>>r;
    
    pi=acos(-1);
    perimeter = 2*pi*r;
    
    cout<<"Circle perimetr is: "<<perimeter<<endl;
    return 0;
}
