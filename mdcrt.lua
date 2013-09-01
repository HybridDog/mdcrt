function say_topic_mod(owner, modname, desc, depends, license, screenshor_link)
	local giturl = "[url=https://github.com/"..owner.."/"..modname
	local ziplink = giturl.."/archive/master.zip]zip[/url]"
	local tarlink = giturl.."/archive/master.tar.gz]tar.gz[/url]"

	local title = "[Mod] "..desc.." ["..modname.."]"

	local list_1 = "[b]Depends:[/b] "..depends
	local list_2 = "[b]License:[/b] "..license
	local list_3 = "[b]Download:[/b] "..ziplink..", "..tarlink
	local list_4 = "[b]github:[/b] "..giturl.."]"..modname.."[/url]"

	local screenshot = "[img]"..screenshor_link.."[/img]"

	print(title.."\n\n"..list_1.."\n"..list_2.."\n"..list_3.."\n"..list_4.."\n\n"..screenshot)
end
