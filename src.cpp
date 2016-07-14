#include<iostream>
#include<map>
#include<string>
#include<fstream>
#include<set>
#include<utility>
using namespace std;
map <string, size_t> word_count;
int main()
{
	set<string> exclude = { "The","But","And","Or","An","A",
		"the","but","and","or","an","a" };
	ifstream fin("D:\\a.txt");
	string s;
	while (fin >> s)
	{
		if (exclude.find(s) != exclude.end())
		{
			++word_count[s];
		}
	}
	for (const auto &w : word_count)
	{
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? "times" : "time") << endl;
	}
	return 0;
}
