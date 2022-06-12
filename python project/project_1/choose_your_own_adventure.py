name = input("Type your name: ")
print("Welcome", name,"to the adventure!")
print("You are trap in jungle with nothing but 1 bottle of water, a knife and a lighter")
print("In order to survive you must get out of jungle. So you start walking")
print("Its been how many hours you don't know but its starting to get dark. You are hungry and tired.")

answer = input("What do you do?\na.Find dry wood and light a fire\nb.continue your journey(Type a/b) ").lower()

if answer == "a":
    print("You light a fire, hunt a rabit eat it and rest for the night")
    print("\nDAY 2")

    answer = input("Now you come to point where you either can go right or left(Type left or right) ").lower()

    if answer == "left":

        answer = input("You saw a river you can either swim or walk around the river.(Type swim or walk) ").lower()

        if answer == "swim":
            print("You swam the river but you are attacked by an aligator you lose!")
        elif answer == "walk":
            print("You walk you don't have any water left and you lose!")
        else:
            print("Your entered a invalid value so you lose..")

    elif answer == "right":
        print("You found a bridge and on the other end there is man standing")

        answer = input("What do you do? Talk to man or ignore him.(Type talk/ignore) ").lower()

        if answer == "talk":
            print("Man help you and get you out of the jungle and you survive")
            print(name,"you completed your adventure.\nYOU WIN!!")
        elif answer == "ignore":
            print("You offeneded that person he attacks you.\nYOU LOSE..")
        else:
            print("You typed an invalid value so you lose..")
    else:
        print("You typed an invalid value so you lose..")


elif answer == "b":
    print("You continue your journey, it's dark you can't even see the sky because the forest is too dense. And out of no where you are attacked by a bear and you lose!")

else:
    print("You typed an invalid value so you lose..")


print("Thank you for playing this game:)")
