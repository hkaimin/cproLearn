#include <iostream>
#include <string>
#include "include/Teacher.h"
using namespace std;

int main()
{
    cout << "teacher test main:" << endl;
    string tName = "hkm";
    Teacher t(tName,32);
    // cout << "teacher name:" << t.getName() << endl;
    return 0;
}