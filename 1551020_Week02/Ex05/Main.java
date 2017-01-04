package Ex05;

import java.util.Scanner;

/**
 * Created by LuongVo on 10/26/2016.
 */
public class Main {
    public static void main (String[] args){
        int sec, min, hour;
        Scanner in = new Scanner(System.in);
        System.out.println("Input sec : ");
        sec = in.nextInt();
        System.out.println("Input min: ");
        min = in.nextInt();
        System.out.println("Input hour");
        hour = in.nextInt();

        SecMinHour secMinHour = new SecMinHour(sec, min, hour);
        System.out.println("Time increase after 1 second : " + secMinHour.getsecBefore() + " : second ");
        if ( secMinHour.getsecBefore() == 59 ){
            System.out.println( secMinHour.getminBefore()+ " : minute ");
            if (secMinHour.getminBefore() == 59) {
                System.out.println( (secMinHour.gethour()-1) + " : hour");
            }
        }
        else {
            System.out.println(secMinHour.getmin() + " : minute");
            System.out.println(secMinHour.gethour() + " : hour");
        }


        System.out.println("Time increase after 1 second : " + secMinHour.getsecAfter() + " : second ");
        if ( secMinHour.getsecAfter() == 0 ){
            System.out.println( secMinHour.getminAfter()+ " : minute ");
            if (secMinHour.getminAfter() == 0) {
                System.out.println( (secMinHour.gethour()+1) + " : hour");
            }
        }
        else {
            System.out.println(secMinHour.getmin() + " : minute");
            System.out.println(secMinHour.gethour() + " : hour");
        }



    }
}
