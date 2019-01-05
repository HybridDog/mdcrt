-- this is out of date.

function say_topic_mod(owner, modname, desc, depends, license, screenshot_link)
	local giturl = "[url=https://github.com/"..owner.."/"..modname
	local ziplink = giturl.."/archive/master.zip]zip[/url]"
	local tarlink = giturl.."/archive/master.tar.gz]tar.gz[/url]"

	print("[Mod] "..desc.." ["..modname.."]\n")

	print("[b]Depends:[/b] "..depends)
	print("[b]License:[/b] "..license)
	print("[b]Download:[/b] "..ziplink..", "..tarlink)
	print("[b]github:[/b] "..giturl.."]"..modname.."[/url]\n")

	print("[img]"..screenshot_link.."[/img]")

end
