#include <iostream>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <string>
#include <bitset>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <stack>
using namespace std;
//sort(arr, arr + n)
//vector <int> v v.empty() v.front() v.back() v.at()
//deque <int> dq dq.push_back(20) dq.push_front(30) dq.size() dq.pop_front() dq.pop_back() dq.front() dq.back()
//set <int> s s.insert(7) s.begin() s.size() s.empty() s.erase(100) s.erase(s.begin(), s.find(30)) s.end() s.clear() set <int, greater <int> >
//map <int, int> map1 map1.insert(pair <int, int> (6, 50)) map <int, int > :: iterator itr itr->first itr->second map1[6] =50;


//https://codeforces.com/gym/264468 day1
//https://codeforces.com/gym/264528 day2
//https://codeforces.com/gym/264601 day3
//https://codeforces.com/gym/264704 day4

int main()
{
    int n, d = 0, a = 0,i;
    string s;
    cin >> n;
    cin >> s;
    for (i = 0; i < s.size();i++)
    {
        if (s[i] == 'D')
            d++;
        else if (s[i] == 'A')
            a++;
    }
    if (a > d)
        cout << "Anton" << '\n';
    else if (d < a)
         cout << "Danik" << '\n';
    else
        cout << "Friendship" << '\n';
    
    return (0);
}