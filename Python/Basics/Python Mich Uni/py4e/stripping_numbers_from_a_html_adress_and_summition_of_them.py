# To run this, download the BeautifulSoup zip file
# http://www.py4e.com/code3/bs4.zip
# and unzip it in the same directory as this file

from urllib.request import urlopen
from bs4 import BeautifulSoup
import ssl
import re

# Ignore SSL certificate errors
ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

url = 'http://py4e-data.dr-chuck.net/comments_1027470.html'
html = urlopen(url, context=ctx).read()
soup = BeautifulSoup(html, "html.parser")

# Retrieve all of the tr'nchor tags
tags = soup('tr')
lst=[]



lst=[]
for line in tags:
    stuff=re.findall('[0-9]+',str(line))
    if stuff ==[] : continue
    lst=lst+stuff
sum=0
for numbers in lst:
    sum+=int(numbers)
print(sum)
