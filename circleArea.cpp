#include <iostream>
#include<math.h>
using namespace std;
int main() {
    double r,area,pi;
    
    cout<<"Circle radious is: ";
    cin>>r;
    
    pi = acos(-1);
    area = pi*r*r;
    
    cout<<"Circle Area are: "<<area<<endl;
    
    return 0;
}
