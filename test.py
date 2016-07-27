#coding=utf-8
import urllib
import re

def getHtml(url):
    page = urllib.urlopen(url)
    html = page.read()
    return html
test = "https://mp.weixin.qq.com/mp/getmasssendmsg?__biz=MzI0MzQ4NTc4MA==&uin=MTM1MTA0NzUwMA%3D%3D&key=8dcebf9e179c9f3aa75052019299e5ee273dc1f50fc46a052b36d5df57d82d6c6480bbc38e9ec3cfe94443ec8ba6165f&devicetype=iMac+MacBookPro12%2C1+OSX+OSX+10.11.5+build(15F34)&version=11020201&lang=zh_CN&pass_ticket=QPb9388B6PWcxvBohz2401VaLVgLpy96IADCxI9pFnJt6KMl98hAjjUwx3vT%2FZrY#wechat_webview_type=1"

html = getHtml(test)
f = open("text.txt","w")
f.write(html)
f.close()
a = re.search("1000000004",html).start()
'''html = html [a:-1]
c = re.search("content&quot;:&quot;",html).start()+ 20
b = re.search("&quot;}}",html).start()
html = html[c : b]
while  re.search("\\\\n",html):
	temp =  re.search("\\\\n",html).start()
	print html[:temp ]
	html = html[:temp]
'''

