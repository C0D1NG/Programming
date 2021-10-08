if(choice=="1"):#Sign up: register to the system

    #instatiate new class object called newAccount
    newAccount=Account()
     
    # newAccount allows for sign up by calling function namely SignUp
    newAccount.signUp()

    #append the signup values to accounts db
    accounts.append(newAccount)

    #saves the account values in the file by calling function namely saveAccounts()
    saveAccounts(accounts,FILE_NAME)

elif(choice=="2"):#Sign in

    #ask users to input username
    username =input("Enter the username of the account: ")

    #ask users to input usernam
    password =input("Enter the password of account: ")

       
    #deactivate accountExit to execute loop
    accountExist=False

    #check every value in accounts
    for acc in accounts:

        #next quiz
elif(choice=="3"):#Search for a user

    #Ask user to input name
    name =input("Enter the name of account: ")

    #ask user to input surname
    surname =input("Enter the surname of the account: ")

       
    #set accountExit to False
    accountExist=False

    #check every value in accounts
    for acc in accounts:

        #Compares input values with the one in db and if they are the same
        if acc.getName()==name and acc.getSuname()==surname:

            #displays account information by callin displayAccountInformation()
            acc.displayAccountInformation()

            print("")

            #accountExist changes to False to stop the loop if account exist
            accountExist=True

        #set accountExist to false if account does not exist and print the error
        if accountExist==False:

        print("\nThe account does not exist.\n")
        