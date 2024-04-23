# Compound-Interest-Program

#Summarize the project and what problem it was solving. 

This project is a compound interest calculator. It is meant to be the base program to help teach students fiscal responsibility. The program is interactive and will only stop when the user wants to. The user can enter an interest rate, initial investment amount, an amount of time in years, and if they want a monthly deposit. The program will then print two reports for the user to read and see how different amounts and rates affect their balance.  

 

#What did you do particularly well? 

In this program, I abstracted much of the information from the user. Only allowing them to see the report. I also used OOP, and the main function is short. The code is also quite easy to maintain and if changes need to be made only a few places need updated.  

 

#Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on? 

I could make some improvements to the menu that the program outputs. It is quite simple and gets the job done. However, it could be improved to be better maintained, easier to read and more dynamic. I also would rewrite the getUserInput function to be more efficient. However, for the sake of this program, it does fine. 

 

#Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network? 

The hardest part of this code was trying to figure out a way to compound monthly. I kept getting incorrect balances even though my “math” was correct. To solve this problem, I had to debug the program to see how the computer was handling the “math.” The problem was not my math but how I was telling the computer to do it. I saw that by not having another for loop and a way to reset the interest each year was causing the balances to be much higher than they should be. 

 

 

 

#What skills from this project will be particularly transferable to other projects or coursework? 

In this project, I learned how to better use OOP. And I learned how to better debug a program. This project helped me visualize how math can be different from programming because of the way computers are being told to do it. In this project, I also used pass-by reference for the first time allowing me to use the get user input function and “return” or pass multiple numbers from user input with one function. 

 

#How did you make this program maintainable, readable, and adaptable? 

	I made this program maintainable by using OOP. If this program needs to be updated or added upon it could be done easily. Much of the information is abstracted and variables are used in most places. I made it as readable as I could by allowing for more whitespace than needed between lines. This helps me write the code and read it myself. I also added lots of comments for me and anyone else reading the code. The program is adaptable because even though the balance will only go so high because of integer overflow. It allows the user to enter any positive number for input and show them the balance. The underlying math in the functions also could be used in other programs or settings. 
