while True:
    print('''Any COVID symptoms
a high body temperature, new
continuous cough, lost taste or
lost sense of smell?\n''')
    ans=input('yes or no?: ')
    if ans=='no' or ans=='No' or ans=='NO'  :
        print('Go to school')
        break
    elif ans=='yes' or ans=='Yes' or ans=='YES':
        print('''Take a COVID test.
What is the result?\n''')
        while True:
            ans=input('negative or positive: ')
            if ans=='negative' or ans=='Negative' or ans=='NEGATIVE':
                break
            elif ans=='positive' or ans=='Positive' or ans=='POSITIVE':
                print('Stay at home for 14 days\n')
                break
            else:
                print('please enter your answer correctly!\n')
    else:
        print('please enter your answer correctly!\n')
