#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    deque<string> deq_st;
    for (string str; cin >> str; deq_st.push_back(str));
    for (auto i = deq_st.cbegin(); i != deq_st.cend(); ++i)
        cout << *i << " ";
    cout << endl;
    return 0;
}
