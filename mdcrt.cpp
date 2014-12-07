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

	string giturl = "[url=https://github.com/" + owner + "/" + modname;
	string ziplink = giturl + "/archive/master.zip]zip[/url]";
	string tarlink = giturl + "/archive/master.tar.gz]tar.gz[/url]";


	cout << "--------------------------" << endl << endl;

	cout << "[Mod] " << modname << " [" << modname << "]" << endl << endl;

	cout << "[b]Depends:[/b] " << depends << endl;
	cout << "[b]License:[/b] " << license << endl;
	cout << "[b]Download:[/b] " << ziplink << ", " << tarlink << endl;
	cout << "[b]github:[/b] " << giturl << "]" << modname << "[/url]" << endl << endl;

	cout << "[img]" << screenshot_link << "[/img]" << endl << endl;

	cout << "If you got ideas or found bugs, please tell them to me." << endl << endl;

	cout << "--------------------------" << endl;

}
