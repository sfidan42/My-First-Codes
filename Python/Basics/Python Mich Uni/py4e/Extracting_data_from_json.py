from urllib.request import urlopen
from bs4 import BeautifulSoup
import ssl
import json
# Ignore SSL certificate errors
ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

url = 'http://py4e-data.dr-chuck.net/comments_1027473.json'
html = urlopen(url, context=ctx).read()

soup = BeautifulSoup(html, "html.parser")
data=str(soup)
#print(data)
#print(type(data))
info = json.loads(data)

#print(info['comments'])
lst=info['comments']

sum=0
for i in range(len(lst)):
    sum+=lst[i]['count']
print(sum)
