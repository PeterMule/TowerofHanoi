#include <iostream>
#include <iomanip>

using namespace std;
void towersofhanoi(int number,int begpeg,int endpeg,int tempeg);

int main()
{
    towersofhanoi(5,1,3,2);
    return 0;
}

void towersofhanoi(int number,int begpeg,int endpeg,int tempeg)
{
    if(number==1)
    {
        cout << begpeg << endpeg << endl;
    }

    else if(number==2)
    {
        cout << endl <<endl ;
        cout << begpeg << tempeg << endl;
        cout << begpeg << endpeg << endl;
        cout << tempeg << endpeg << endl;
        cout << endl <<endl ;
    }
    else
    {
        towersofhanoi(number-1,begpeg,tempeg,endpeg);
        cout << begpeg << endpeg << endl;
        towersofhanoi(number-1,tempeg,endpeg,begpeg);
    }
}
