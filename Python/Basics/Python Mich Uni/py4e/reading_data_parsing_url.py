# To run this, download the BeautifulSoup zip file
# http://www.py4e.com/code3/bs4.zip
# and unzip it in the same directory as this file

from urllib.request import urlopen
from bs4 import BeautifulSoup
import ssl
import re
import xml.etree.ElementTree as ET
# Ignore SSL certificate errors
ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

url = 'http://py4e-data.dr-chuck.net/comments_1027472.xml'
html = urlopen(url, context=ctx).read()
soup = BeautifulSoup(html, "html.parser")
data=str(soup)
print(data)

stuff = ET.fromstring(data)
lst = stuff.findall('comments/comment')
print('User count:', len(lst))

sum=0
for item in lst:
    print('Number', item.find('count').text)
for item in lst:
    sum+=int(item.find('count').text)
print(sum)
