#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void print(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

void print_all_in_window_k(vector<int> arr, int k)
{
    queue<int> q;
    for (int i = 0; i < k; i++)
    {
        q.push(arr[i]);
    }
    int j = k;
    while (j <= arr.size())
    {
        print(q);
        q.pop();
        q.push(arr[j]);
        j++;
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {3, 6, 2, 7, 8, 11};
    int k = 3;
    print_all_in_window_k(arr, k);
    return 0;
}