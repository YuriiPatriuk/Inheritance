#include <iostream>
#include "Passport.h"
#include"ForeingPassport.h"
#include "Date.h"
using namespace std;

int main()
{
    Date birthday(1, 4, 1990);
    Passport pass("name", "qwertyuiop", 100101, birthday, Date{ 1,7,1990 });
    pass.print();
    cout << endl;
    ForeingPassport fpass(pass, "test", 2048, Date{ 3,4,2000 });
    fpass.addVisa("Japan", Date{ 3,4,2002 });
    fpass.print();
}