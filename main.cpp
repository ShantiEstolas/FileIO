#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int numbers[10000];
    int n = 0;
    int largestNumber=0;
    int smallestNumber;
    fstream myFile;

    myFile.open("data10k.txt");
    string line;

    while (myFile.good())
    {
        getline(myFile, line);

        stringstream (line) >> numbers[n];

        n++;
    }

    for (n=0; n<9999; n++)
    {
        if (numbers[n] > largestNumber)
        {
            largestNumber = numbers[n];
        }
    }

    smallestNumber = 1;
    for (n=0; n<9999; n++)
    {
        if (numbers[n] < smallestNumber)
            smallestNumber = numbers[n];
    }

    myFile.close();

    cout << largestNumber << endl;
    cout << smallestNumber;

    return 0;
}
