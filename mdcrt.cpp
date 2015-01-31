#include <iostream>
#include <string>

using namespace std;

int main() {

	string owner, modname, depends, license, screenshot_link;

	cout << "owner = ";
	cin >> owner;
	cout << "modname = ";
	cin >> modname;
	cout << "depends = ";
	cin >> depends;
	cout << "license = ";
	cin >> license;
	cout << "screenshot_link = ";
	cin >> screenshot_link;

	if (owner == "n")
		owner = "HybridDog";

	if (screenshot_link == "n")
		screenshot_link = "http://bit.ly/1wOCWpq";

	string giturl = "[url=https://github.com/" + owner + "/" + modname;
	string raw_giturl = "[url=https://raw.githubusercontent.com/" + owner + "/" + modname + "/master/";
	string ziplink = giturl + "/archive/master.zip]zip[/url]";
	string tarlink = giturl + "/archive/master.tar.gz]tar.gz[/url]";


	cout << "--------------------------" << endl << endl;

	cout << "[Mod] " << modname << " [" << modname << "]" << endl << endl;

	cout << raw_giturl << "depends.txt][b]Depends:[/b][/url] " << depends << endl;
	cout << raw_giturl << "LICENSE.txt][b]License:[/b][/url] " << license << endl;
	cout << "[b]Download:[/b] " << ziplink << ", " << tarlink << endl;
	cout << "[b]github:[/b] " << giturl << "]" << modname << "[/url]" << endl << endl;

	cout << "[img]" << screenshot_link << "[/img]" << endl << endl;

	cout << "If you got ideas or found bugs, please tell them to me." << endl << endl;

	cout << "--------------------------" << endl;

}
