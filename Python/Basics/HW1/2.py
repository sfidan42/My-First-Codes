## QUESTION: 2-a
faculty_codes={
'01':'civil engineering',
'02':'Architecture',
'03':'Mechanical Engineering',
'04':'Electrical and Electronics Engineering',
'05':'Mines',
'06':'Chemical and Metallurgical Engineering',
'07':'Management',
'08':'Naval Architecture and Ocean Engineering',
'09':'Science and Letters',
'10':'Aeronautics and Astrounatics',
'11':'Turkish music state conservatory',
'12':'Maritime',
'13':'Textile technologies and design',
'14':'Computer and Informatics Engineering'}

print(faculty_codes)
print(type(faculty_codes))


 ## QUESTION: 2-b
ID=input('please enter student ID')
ID=ID.split()
faculty_code=ID[0][0]+ID[0][1]
faculty_code=str(faculty_code)
print(faculty_code)
acceptance_year=ID[0][3]+ID[0][4]
if int(acceptance_year)<=20:
    acceptance_year='20'+acceptance_year
else:
    acceptance_year='19'+acceptance_year
print(acceptance_year)
l=len(ID)
locthree=l-4
ranking=ID[0][locthree]+ID[0][locthree+1]+ID[0][locthree+2]
print(ranking)

## QUESTION: 2-c
print('you were admitted to the ',faculty_codes[str(faculty_code)],' in the year of ',acceptance_year,' with the ranking of ',ranking)
