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

	string installhelp = "http://wiki.minetest.net/Installing_Mods";

	string gpart = ".com/" + owner + "/" + modname;

	string giturl = "[url=https://github" + gpart;
	string raw_giturl = "[url=https://raw.githubusercontent" + gpart + "/master/";
	string ziplink = giturl + "/archive/master.zip]zip[/url]";
	string tarlink = giturl + "/tarball/master]tar.gz[/url]";


	cout << "------------forum topic--------------" << endl << endl;

	cout << "[Mod] " << modname << " [" << modname << "]" << endl << endl;

	cout << raw_giturl << "depends.txt][b]Depends:[/b][/url] default" << endl;
	cout << raw_giturl << "LICENSE.txt][b]License:[/b][/url] WTFPL" << endl;
	cout << "[b]Download:[/b] " << ziplink << ", " << tarlink << endl;
	cout << "[b]github:[/b] " << giturl << "]" << modname << "[/url]" << endl << endl;

	cout << "[img]" << screenshot_link << "[/img]" << endl << endl;

	cout << "If you got ideas or found bugs, please tell them to me." << endl << endl;

	cout << "[/url=" << installhelp << "]How to install a mod?" << "[/url]" << endl << endl << endl;


	giturl = "](https://github" + gpart;
	string giturl_raw = "](https://raw.githubusercontent" + gpart + "/master/";
	ziplink = "[zip" + giturl + "/archive/master.zip)";
	tarlink = "[tar.gz" + giturl + "/tarball/master)";


	cout << "------------github readme-------------" << endl << endl;

	cout << "[Mod] " << modname << " [" << modname << "]" << endl << endl;

	cout << "**Depends:** see [depends.txt" << giturl_raw << "depends.txt)  " << endl;
	cout << "**License:** see [LICENSE.txt" << giturl_raw << "LICENSE.txt)  " << endl;
	cout << "**Download:** " << ziplink << ", " << tarlink << "  " << endl << endl;

	cout << "![I'm a screenshot!](" << screenshot_link << ")" << endl << endl;

	cout << "If you got ideas or found bugs, please tell them to me." << endl << endl;

	cout << "[How to install a mod?](" << installhelp << ")" << endl << endl;

	cout << "--------------------------" << endl;

}
