# To run this, download the BeautifulSoup zip file
# http://www.py4e.com/code3/bs4.zip
# and unzip it in the same directory as this file

import urllib.request, urllib.parse, urllib.error
from bs4 import BeautifulSoup
import ssl

#inputs:
url = 'http://py4e-data.dr-chuck.net/known_by_Renars.html'
while True:
    try:
        count=input('Enter count:')
        pos=input('Enter position:')
        count=int(count)
        pos=int(pos)
        break
    except:
        print("Please enter positive integer values:\n")
    continue

# Ignore SSL certificate errors:
ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

i=1
#choosing the url wanted:
while i<=count:

    html = urllib.request.urlopen(url, context=ctx).read()
    soup = BeautifulSoup(html, 'html.parser')

    s=str()
    # Retrieve all of the anchor tags:
    tags = soup('a')
    for tag in tags:
        s=s+(tag.get('href', str))+' '
    #adding them into a list named lst by splitting
    lst=s.split()
    url=lst[pos-1]
    i+=1

print(url[39:url.find('.html')])
