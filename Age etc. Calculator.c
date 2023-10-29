#include <stdio.h>

int main() {
    int birthYear, birthMonth, birthDay;
    int currentYear, currentMonth, currentDay;
    int totalDays1, totalDays2, totalDays;
    int years, months, days, daysLeft, birthday;

    // Get the user's birthdate
    printf("Enter your birth year: ");
    scanf("%d", &birthYear);
    printf("Enter your birth month: ");
    scanf("%d", &birthMonth);
    printf("Enter your birth day: ");
    scanf("%d", &birthDay);

    if (birthMonth < 1 || birthDay < 1) {
        printf("Birth month and day cannot be negative or zero. Please enter valid values.");
        return 0;
    }
    else if (birthMonth > 12 || birthDay > 31) {
        printf("Birth month cannot be greater than 12, and birth day cannot be greater than 31.");
        return 0;
    }

    // Get the current date
    printf("Enter the current year: ");
    scanf("%d", &currentYear);
    printf("Enter the current month: ");
    scanf("%d", &currentMonth);
    printf("Enter the current day: ");
    scanf("%d", &currentDay);

    if (currentMonth < 1 || currentDay < 1) {
        printf("Current month and day cannot be negative or zero.");
        return 0;
    }
    else if (currentMonth > 12 || currentDay > 31) {
        printf("Current month cannot be greater than 12, and current day cannot be greater than 31.");
        return 0;
    }

    if ((birthYear > currentYear) || (birthYear == currentYear && (birthMonth > currentMonth || (birthMonth <= currentMonth && birthDay > currentDay)))) {
        // Convert all dates to days
        totalDays1 = currentYear * 365 + currentMonth * 30 + currentDay;
        totalDays2 = birthYear * 365 + birthMonth * 30 + birthDay;
        totalDays = (totalDays2 - totalDays1);
        years = ((-totalDays) / 365);
        months = (((-totalDays) % 365) / 30);
        days = (((-totalDays) % 365) % 30);

        printf("You are %d years, %d months, and %d days old\n", years, months, days);
    }
    else {
        totalDays1 = currentYear * 365 + currentMonth * 30 + currentDay;
        totalDays2 = birthYear * 365 + birthMonth * 30 + birthDay;
        totalDays = (totalDays1 - totalDays2);
        years = (totalDays / 365);
        months = ((totalDays % 365) / 30);
        days = ((totalDays % 365) % 30);
    }

    // Print the result
    printf("Your age: %d years, %d months, %d days\n", years, months, days);

    // Check the user's birthday
    if (totalDays % 365 == 0 && birthYear < currentYear) {
        printf("HAPPY BIRTHDAY!\n");
    }
    else if (birthYear <= currentYear) {
        daysLeft = 365 - (totalDays % 365);
        printf("%d days until your next birthday\n", daysLeft);
    }
    else {
        daysLeft = totalDays;
        printf("%d days until your birthday\n", daysLeft);
    }

    // Determine the zodiac sign
    birthday = birthMonth * 30 + birthDay;
    if (birthYear > currentYear)
        printf("Your zodiac sign: Can't have a zodiac sign if you haven't been born yet");
    else if (birthday > 20 && birthday < 50)
        printf("Your zodiac sign: Aquarius");
    
    else if (birthday > 50 && birthday < 80)
        printf("Your zodiac sign: Aquarius");
    else if (birthday > 80 && birthday < 110)
        printf("Your zodiac sign: Pisces");
    else if (birthday > 110 && birthday < 140)
        printf("Your zodiac sign: Aries");
    else if (birthday > 140 && birthday < 170)
        printf("Your zodiac sign: Taurus");
    else if (birthday > 170 && birthday < 200)
        printf("Your zodiac sign: Gemini");
    else if (birthday > 200 && birthday < 230)
        printf("Your zodiac sign: Cancer");
    else if (birthday > 230 && birthday < 260)
        printf("Your zodiac sign: Leo");
    else if (birthday > 260 && birthday < 290)
        printf("Your zodiac sign: Virgo");
    else if (birthday > 290 && birthday < 320)
        printf("Your zodiac sign: Libra");
    else if (birthday > 320 && birthday < 350)
        printf("Your zodiac sign: Scorpio");
    else if (birthday > 350 || birthday < 380)
        printf("Your zodiac sign: Sagittarius");
    else
        printf("Your zodiac sign: Capricorn");

    return 0;
}
