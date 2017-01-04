package Ex04;

import java.util.Scanner;

/**
 * Created by LuongVo on 10/26/2016.
 */
public class main {
    public static void main (String[] args){
        int day, month, year;

        Scanner in = new Scanner(System.in);
        System.out.println("Input day : ");
        day = in.nextInt();
        System.out.println("Input month: ");
        month = in.nextInt();
        System.out.println("Input year");
        year = in.nextInt();

        DayMonthYear dayMonthYear = new DayMonthYear(day, month, year);
        System.out.println("The day before is: " + dayMonthYear.getDayBefore());
        if (dayMonthYear.getDayBefore() == 1) {
            System.out.println("In month: " + dayMonthYear.getMonthBefore());
            if (dayMonthYear.getMonthBefore() == 12)
                System.out.println("In year: " + (dayMonthYear.getYear()-1));
        }
        else {
            System.out.println("In month: " + dayMonthYear.getMonth());
            System.out.println("In year: " + dayMonthYear.getYear());
        }

        System.out.println("The day after is: " + dayMonthYear.getDayAfter());
        if (dayMonthYear.getDayAfter() == 1) {
            System.out.println("In month: " + dayMonthYear.getMonthAfter());
            if (dayMonthYear.getMonthBefore() == 1)
                System.out.println("In year: " + (dayMonthYear.getYear()+1));
        }
        else {
            System.out.println("In month: " + dayMonthYear.getMonth());
            System.out.println("In year: " + dayMonthYear.getYear());
        }

    }
}

