from cs50 import get_float

# ask user for change owed and check if number is positive and not zero
while True:
    change = get_float("change owed: ")
    if change >= 0:
        break
# round to the nearest integer 
cents = round(change * 100) 
coins = 0

while cents >= 25:
    cents -= 25
    coins += 1
    
while cents >= 10:
    cents -= 10
    coins += 1
    
while cents >= 5:
    cents -= 5
    coins += 1
    
while cents >= 1:
    cents -= 1
    coins += 1
    
print(coins)
        