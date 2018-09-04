#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
using std::placeholders::_1;

string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

void eliminate_duplicates(vector<string> &vs)
{
    sort(vs.begin(), vs.end());
    auto new_end = unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
}

bool check_size(const string &s, string::size_type sz)
{
    return s.size() >= sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    eliminate_duplicates(words);
    stable_sort(words.begin(), words.end(),
                [](const string &str1, const string &str2)
                { return str1.size() < str2.size();});
    auto wc = partition(words.begin(), words.end(),
                bind(check_size, _1, sz));
    auto count_ = wc - words.begin();
    cout << count_ << " " << make_plural(count_, "word", "s") << " of length " << sz << " or longer" << endl;
    for_each(words.begin(), wc, [] (const string &s)
            { cout << s << " ";});
    cout << endl;
}

int main()
{
    vector<string> vs{ "arc", "vxcc", "acx", "scs", "vscf", "arc", "acf" };
    biggies(vs, 3);

    return 0;
}
