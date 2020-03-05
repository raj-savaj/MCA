import re

str="The rain in Spain"
##x = re.findall("ai",str)
##
##print(x)
#return the List if not match return empty

# ~ The Search() Function
x = re.search("S",str,re.I);
if x :
     print("Pattern Found")
else:
     print("Not Found")
