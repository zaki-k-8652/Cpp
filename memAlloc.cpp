/* Understanding memory allocation by using new and delete operators*/
#include <iostream>
using namespace std;

class UpgradeComputers
{
    int students;

public:
    UpgradeComputers()
    {
        cout << "\n Shoaeb Sir called";
    }
    ~UpgradeComputers()
    {
        cout << "\n Khubaib, Vakkas and Kashif called";
    }
};
int main()
{
    int n;
    cout << "\n Enter the no. of objects needed: ";
    cin >> n;

    UpgradeComputers *obj = new UpgradeComputers[n];
    delete[] obj;

    return 0;
}