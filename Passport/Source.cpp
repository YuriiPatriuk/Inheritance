#include <iostream>
#include "Passport.h"
#include "Date.h"
using namespace std;

int main()
{
    Date birthday(1, 4, 1990);
    Passport pass("name", "qwertyuiop", 100101, birthday, Date{ 1,7,1990 });
}