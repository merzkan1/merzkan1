import datetime

# Get the user's birthdate
birthYear = int(input("Enter your birth year: "))
birthMonth = int(input("Enter your birth month: "))
birthDay = int(input("Enter your birth day: "))

if birthMonth < 1 or birthDay < 1:
    print("Birth month and day cannot be negative or zero. Please enter valid values.")
    exit()
elif birthMonth > 12 or birthDay > 31:
    print("Birth month cannot be greater than 12, and birth day cannot be greater than 31.")
    exit()

# Get the current date
currentYear = int(input("Enter the current year: "))
currentMonth = int(input("Enter the current month: "))
currentDay = int(input("Enter the current day: "))

if currentMonth < 1 or currentDay < 1:
    print("Current month and day cannot be negative or zero.")
    exit()
elif currentMonth > 12 or currentDay > 31:
    print("Current month cannot be greater than 12, and current day cannot be greater than 31.")
    exit()

# Calculate age
birth_date = datetime.date(birthYear, birthMonth, birthDay)
current_date = datetime.date(currentYear, currentMonth, currentDay)
age = current_date - birth_date

# Print the result
print(f"You are {age.days // 365} years, {(age.days % 365) // 30} months, and {(age.days % 365) % 30} days old")

# Check the user's birthday
if current_date.month == birth_date.month and current_date.day == birth_date.day:
    print("HAPPY BIRTHDAY!")
else:
    next_birthday = datetime.date(currentYear, birthMonth, birthDay)
    if next_birthday < current_date:
        next_birthday = datetime.date(currentYear + 1, birthMonth, birthDay)
    days_left = (next_birthday - current_date).days
    print(f"{days_left} days until your next birthday")

# Determine the zodiac sign
birthday = birthMonth * 30 + birthDay
if birthYear > currentYear:
    print("Your zodiac sign: Can't have a zodiac sign if you haven't been born yet")
elif 20 < birthday < 50:
    print("Your zodiac sign: Aquarius")
elif 50 < birthday < 80:
    print("Your zodiac sign: Pisces")
elif 80 < birthday < 110:
    print("Your zodiac sign: Aries")
elif 110 < birthday < 140:
    print("Your zodiac sign: Taurus")
elif 140 < birthday < 170:
    print("Your zodiac sign: Gemini")
elif 170 < birthday < 200:
    print("Your zodiac sign: Cancer")
elif 200 < birthday < 230:
    print("Your zodiac sign: Leo")
elif 230 < birthday < 260:
    print("Your zodiac sign: Virgo")
elif 260 < birthday < 290:
    print("Your zodiac sign: Libra")
elif 290 < birthday < 320:
    print("Your zodiac sign: Scorpio")
elif 320 < birthday < 350:
    print("Your zodiac sign: Sagittarius")
else:
    print("Your zodiac sign: Capricorn")
