#!/bin/bash

echo -n "github username: "
read owner
echo -n "mod name: "
read modname
echo -n "screenshot link: "
read screenshot_link

if [ "$owner" = "" ] ; then
	owner="HybridDog"
fi

if [ "$screenshot_link" = "" ] ; then
	screenshot_link="http://bit.ly/1wOCWpq"
fi

installhelp="http://wiki.minetest.net/Installing_Mods"
installdesc="How to install a mod?"

gpart=".com/"$owner"/"$modname
giturl="https://github"$gpart
ziplink=$giturl"/archive/master.zip"
tarlink=$giturl"/archive/master.tar.gz"
raw_giturl="https://raw.githubusercontent"$gpart"/master/"


echo "------------forum topic--------------

[Mod] "$modname" ["$modname"]

[url="$raw_giturl"depends.txt][b]Depends:[/b][/url] default
[url="$raw_giturl"LICENSE.txt][b]License:[/b][/url] WTFPL
[b]Download:[/b] [url="$ziplink"]zip[/url], [url="$tarlink"]tar.gz[/url]
[b]github:[/b] [url="$giturl"]"$modname"[/url]

[img]"$screenshot_link"[/img]

If you got ideas or found bugs, please tell them to me.

[url="$installhelp"]"$installdesc"[/url]


------------github readme-------------

[Mod] "$modname" ["$modname"]

**Depends:** see [depends.txt]("$raw_giturl"depends.txt)
**License:** see [LICENSE.txt]("$raw_giturl"LICENSE.txt)
**Download:** [zip]("$ziplink"), [tar.gz]("$tarlink")

![I'm a screenshot!]("$screenshot_link")

If you got ideas or found bugs, please tell them to me.

["$installdesc"]("$installhelp")


--------------------------"