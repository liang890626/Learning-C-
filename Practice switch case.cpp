//Given a year and a month, how many days are in that month?
/*There are four possibilities:
 -31 days: Jan, Mar, May, Jul, Aug, Oct, Dec.
 -30 days: Apr, Jun, Sep, Nov.
 -29 days: Feb in a leap year.
 -28 days: Feb in an ordinary year.*/
/*A year a leap if:
 -It is a multiple of 400, or
 -It is a multiple of 4 but not a multiple of 100.*/

 #include <iostream>
using namespace std;


int main() {
    int year, month, days;

    // Get year and month from user
    cout << "Enter year: ";
    cin >> year;

    cout << "Enter month (1-12): ";
    cin >> month;

    // Check if the year is a leap year
    bool isLeapYear = false;
    if((year % 400 == 0) || (year % 4 == 0 && (year % 100 != 0))){
    	isLeapYear = true;
	}
	else{
		isLeapYear = false;
	}

    // Calculate number of days based on month and leap year status
    switch(month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            days = 30;
            break;
        case 2: // February
            if (isLeapYear) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        default:
            cout << "Invalid month";
            return 0;
    }

    // Display number of days
    cout << "Number of days: " << days;

    return 0;
}

 
