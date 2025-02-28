#include <iostream>
#include <vector>
using namespace std;

// ترتيب الاسامي
void insertionSort(vector<string> &names)
{
    int n = names.size();
    for (int i = 1; i < n; i++)
    {
        string key = names[i];
        int j = i - 1;

        while (j >= 0 && names[j] > key)
        {
            names[j + 1] = names[j];
            j--;
        }
        names[j + 1] = key;
    }
}

int main()
{
    vector<string> names = {"zyad", "mahmoud", "ahmad", "ebriahm", "sherbiny"};

    insertionSort(names);
    cout << "Sorted Bookshelf: ";
    for (auto i : names)
    {
        cout << i << " ";
    }
    return 0;
}
