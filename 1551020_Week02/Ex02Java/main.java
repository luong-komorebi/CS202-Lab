package Ex02;

import java.util.Scanner;

/**
 * Created by LuongVo on 10/26/2016.
 */
public class main {
    public static void main (String [] args){
        pointXy customPoint[] = new pointXy[10];
        pointXy  p, furthest = new pointXy();
        int  i = 0, a, b, j, inputTime;
        double max = 0;
        Scanner in = new Scanner(System.in);
        System.out.println("How many points do you want to input ? ");
        inputTime = in.nextInt();
        while (inputTime != 0) {
            System.out.println("Input the first point.");
            System.out.print("X: ");
            a = in.nextInt();
            System.out.print("Y: ");
            b = in.nextInt();
            customPoint[i] = new pointXy(a,b);
            inputTime--;
            i++;
        }
        System.out.println("Please input Point P : ");
        System.out.print("X: ");
        a = in.nextInt();
        b = in.nextInt();
        p = new pointXy(a,b);
        j = i - 1;
        while ( j != 0){
            if (p.distance(customPoint[j]) > max){
                max = p.distance(customPoint[j]);
                furthest = customPoint[j];
            }
            j--;
        }
        System.out.println("Furthest point from P is : ");
        furthest.display();

    }
}
