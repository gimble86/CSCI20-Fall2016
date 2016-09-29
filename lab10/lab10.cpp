//
//

#include <iostream>
using namespace std;

int main ()
{
//1
    int suzyAge = 25;
    int johnAge = 21;
    cout<< endl << (suzyAge < johnAge) << " Suzy, 21 is not older than John, 25" << endl;
//2
    int x =7;
    int y = 7;
    cout<<(x >= y) << " X = 7 which is equal to Y = 7" << endl;
    
//3
    int a = 1;
    int b = 9;
    cout<<(a == b) << " a = 1 which does not equal b = 9" << endl;
    
//4
    int limit = 20;
    int count = 10;
    cout<<((limit*count)/2 > 0) << " limit = 20 * count = 10 is greater than 0" << endl;
    
//5
    int t = -4;
    int z = 0;
    cout<<(t > 5 || z < 2) << " T = 4 is not greater than 5, but Z = 0 is less than 2" << endl;
//6
    int variable = -5;
    cout<<(!(variable >0)) << " -5 is not greater than zero, but ! makes it true" << endl;
    
//7
    int a2 = 16;
    cout<<(a2/4 < 8 && a2 >= 4) << " 16/4 is less than 8 and 16 is greater than 4 " << endl;
    
//8
    int x2 = -2;
    int y2 = 5;
    cout<<(x2*y2 < 10 || y2*z < 10) << " -2 * 5 is less than 10. -2 * zero is also less than 10" << endl;
    
//9

    int j = -2;
    int k = 5;
    int l = 4;
    cout<<(!(j*l < 10) || y/x * 4 <y *2) << " 7 / 7 * 4 = 4 which is less than 14" << endl;

return 0;
    
}