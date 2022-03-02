import sqlite3

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
