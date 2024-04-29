#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "This is the change!";
        int sum_of_elems = 0;
        int num;
        vector<int> vec;
        cout << "Please enter sequence of an integers:\n";
        while (cin >> num)
            vec.push_back(num);
        for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
            sum_of_elems += *it;
        cout << sum_of_elems;

        return 0;
}

