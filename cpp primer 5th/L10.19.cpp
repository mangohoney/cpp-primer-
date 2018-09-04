#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

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

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    eliminate_duplicates(words);
    stable_sort(words.begin(), words.end(),
                [](const string &str1, const string &str2)
                { return str1.size() < str2.size();});
    auto wc = partition(words.begin(), words.end(),
                [sz](const string &str)
                { return str.size() >= sz; });
    auto count_ = wc - words.begin();
    cout << count_ << " " << make_plural(count_, "word", "s") << " of length " << sz << " or longer" << endl;
    for_each(words.begin(), wc, [] (const string &s)
            { cout << s << " ";});
    cout << endl;
}

int main()
{
    vector<string> vs{ "arc", "vxcc", "acx", "scs", "vscf", "arc", "acf" };
    biggies(vs, 4);

    return 0;
}
