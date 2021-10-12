import datetime

name= input("What is your name?\n")
allowedusers=['Seyi','Mike','Love']
allowedPassword = ['passwordSeyi', 'passwordMike', 'passwordLove']
now = datetime.datetime.now()


if (name in allowedusers):
    password= input('Your password?\n')
    userId= allowedusers.index(name)
    if (password==allowedPassword[userId]):
        print('Welcome ', name)
        print('Current date and time is:')
        print(now.strftime('%y-%m-%d %H:%M:%S'))
        print('These are the available options:')
        print('1.Withdraw')
        print('2.Deposit')
        print('3.Complaint')
        selectedOption=int(input('Please select Option:'))
        
        if (selectedOption==1):
            print('You have selected option 1.\n')
            withdraw= float(input('How much do you want to withdraw?'))
            print('Please take your cash.')
        elif (selectedOption==2):
            print('You have selected option 2.\n')
            deposit = float(input('How much do you want to deposit?'))
            print('Your Current balance is',deposit);
        elif (selectedOption==3):
            print('You have selected option 3.\n')
            complain =input(print('What issue will you like to report?'))
            print('Thank you for contacting us.')
        else:
            print('Invalid option selected, Please try again.')

    else:
        print('Invalid password, Please try again.')

else:
    print('Invalid Username, Please try again.')

