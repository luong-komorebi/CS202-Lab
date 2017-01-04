package Ex04;

/**
 * Created by LuongVo on 10/26/2016.
 */
public class DayMonthYear {
    private int day;
    private int month;
    private int year;


    public DayMonthYear (int day, int month, int year) {
        this.day = day;
        this.year = year;
        this.month = month;
    }

    public int getDayBefore(){
        if ( day == 1) {
            switch (month) {
                case 5:
                case 7:
                case 8:
                case 10:
                case 12: {
                    return 30;
                }
                case 1:
                case 2:
                case 4:
                case 6:
                case 9:
                case 11: {
                    return 31;
                }
                case 3: {
                    if (checkLeapYear() == 1) {
                        return 29;
                    } else return 28;
                }
                default:
                    break;
            }
        }
        int m = day-1;
        return m;
    }

    public int getDayAfter() {
        int m = day+1;
        if ( day == 30 && ( month == 4 ||  month == 6 || month == 9 || month == 11) )
            return 1;
        else if ( day == 31 && ( month == 1 ||  month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) )
            return 1;
        else if ( (day == 29 || day == 28) && month == 2 )
            return 1;
        else return m;
    }

    public int getMonthBefore() {
        int m = month - 1;
        if (month == 1)
            return 12;

        else return m;
    }
    public int getMonthAfter(){
        int m = month + 1;
        if ( month == 12 )
            return 1;
        else return m;
    }

    public int getDay() {
        return day;
    }

    public int getMonth() {
        return month;
    }

    public int getYear() {
        return year;
    }

    private int checkLeapYear () {
        if ( year % 400 == 0 ){
            return 1;
        }
        else if ( year % 100 != 0 && year % 4 == 0) {
            return 1;
        }
        else return 0;
    }
 }
