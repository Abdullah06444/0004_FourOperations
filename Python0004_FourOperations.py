user = input("Enter username : ")
print("Hello Hello! Mr/Ms ",user,", welcome to the python service. :D")

number1 = float(input("Enter 1st number : "))
''' TypeCasting, input komutuyla sayiyi girdigimizde string olarak algilamasin diye float oldugunu belirtmek zorundayiz '''
print("Type of Number1 : ",type(number1))

number2 = float(input("Enter 2nd number : "))

print("Addition       : ",float(number1+number2))
print("Subtraction    : ",abs(float(number1-number2))) # used absolute to the minValue-maxValue for is positive
print("Multiplication : ",float(number1*number2))
print("Division       : ",float(number1/number2), " or : ",float(number2/number1))
print("Mod/Remainder  : ",number1%number2, " or : ",number2%number1)

number3 = int(input())
number4 = int(input())
# format() ifadesi string deger icinde otomatik ayni tip olan kismi algilayip dynamic olarak oraya sonucu yazar
print("Number 3 : {0} + Number 4 : {1} = {2}".format(number3,number4,number3+number4))
print("Number 3 : {0} - Number 4 : {1} = {2}".format(number3,number4,number3-number4))
print("Number 3 : {number3} x Number 4 : {number4} = {mult}".format(number3=number3,number4=number4,mult=number3*number4))
print("Number 3 : {number3} / Number 4 : {number4} = {div}".format(number3=number3,number4=number4,div=number3/number4))
