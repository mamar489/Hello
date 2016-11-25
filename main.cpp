#include <iostream>
#include <map>

using namespace std;

int main()
{
    cout << "Hello, World!" << endl;

    map<int, string> a { {1, "11"}, {2, "22"}, {4, "44"}, {5, "55"}, {6, "66"}, {7, "77"} };


    auto itr = a.begin();
    while (itr != a.end())
    {
        if ( (itr->first) % 2 == 0 )
        {
            //auto itr2 = itr;
            itr = a.erase(itr);
        }
        else
        {
            ++itr;
        }
    }


    for(auto itr = a.begin(); itr!= a.end(); ++itr)
    {
        cout << itr->first << " " << itr->second << " ; ";
    }
    cout << endl;

    return 0;
}