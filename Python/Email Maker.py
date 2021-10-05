Name1 = input("Enter first name ")
middle_name1_index = int(len(Name1)//2)
index1 = middle_name1_index - 1
index2 = middle_name1_index + 2
Name2 = input("Enter last name ")
ID = int(input("Enter ID "))
ID_string = str(ID) #just to show how an int is converted to string
Email_end = "@gmail.com"
print(f"Email will be: {Name1[index1:index2]+Name2[:2]+ID_string[0]+Email_end}" )