num = int(input("Enter th number: "))
temp = num
rev=0
while(temp!=0):
    rem = temp%10
    rev = (rev *10)+rem
    temp = temp//10
if(num==rev):
    print("This is Palindrome")
else:
    print("Not a Palindrome")
    
    


    
    
    
    
