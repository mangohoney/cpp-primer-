#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>
#include <cctype>
#include <string>

using std::string;
using std::istream;
using std::ifstream;
using std::cin;
using std::cout;
using std::remove_if;
using Map = std::map<std::string, std::size_t>;

Map countw(istream &is)
{
    Map counts;
    for (string w; is >> w; ++counts[w]);
    return counts;
}

//for ex11.4
auto strip(string& str) -> string const&
{
    for (auto& ch : str) ch = tolower(ch);
    str.erase(remove_if(str.begin(), str.end(), ispunct), str.end());
    return str;
}

//for ex11.4
Map strip_and_count(istream &is)
{
    Map counts;
    for (string w; is >> w; ++counts[strip(w)]);
    return counts;
}

void print(Map const& m)
{
    for (auto const& kv : m)
        cout << kv.first << " : " << kv.second << "\n";
}

int main()
{
    cout << "[ex11.3] Enter a few words please:\n";
    ifstream ifs("god.txt");
    //print(countw(ifs));
    cout << "[ex11.4] Enter a few words please:\n";
    print(strip_and_count(ifs));

    return 0;
}
