from random import randint
        
t = ["Goo", "Choki", "Paa"]
computer = t[randint(0,2)]
player = False

while player == False:
    player = input("Goo, Choki, Paa?")
    if player == computer:
         print("Aiko")
    elif player == "Goo":
        if computer == "Paa":
            print("Make")
        else:
            print("Kachi")
    elif player == "Paa":
        if computer == "Choki":
            print("make")
        else:
            print("Kachi")
    elif player == "Choki":
        if computer == "Goo":
            print("make")
        else:
            print("Kachi")
    else:
        print("Please check your spelling")
    player = False
    computer = t[randint(0,2)]
    
