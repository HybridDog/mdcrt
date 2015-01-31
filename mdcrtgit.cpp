#include <iostream>
#include <string>

using namespace std;

int main() {

	string owner, modname, screenshot_link;

	cout << "owner = ";
	cin >> owner;
	cout << "modname = ";
	cin >> modname;
	cout << "screenshot_link = ";
	cin >> screenshot_link;

	if (owner == "n")
		owner = "HybridDog";

	if (screenshot_link == "n")
		screenshot_link = "http://bit.ly/1wOCWpq";

	string giturl = "](https://github.com/" + owner + "/" + modname;
	string giturl_raw = "](https://raw.githubusercontent.com/" + owner + "/" + modname + "/master/";
	string ziplink = "[zip" + giturl + "/archive/master.zip)";
	string tarlink = "[tar.gz" + giturl + "/archive/master.tar.gz)";


	cout << "--------------------------" << endl << endl;

	cout << "[Mod] " << modname << " [" << modname << "]" << endl << endl;

	cout << "**Depends:** see [depends.txt" << giturl_raw << "depends.txt)  " << endl;
	cout << "**License:** see [LICENSE.txt" << giturl_raw << "LICENSE.txt)  " << endl;
	cout << "**Download:** " << ziplink << ", " << tarlink << "  " << endl << endl;

	cout << "![I'm a screenshot!](" << screenshot_link << ")" << endl << endl;

	cout << "If you got ideas or found bugs, please tell them to me." << endl << endl;

	cout << "--------------------------" << endl;

}
