package Ex02;

import static java.lang.Math.pow;
import static java.lang.StrictMath.abs;
import static java.lang.StrictMath.sqrt;

/**
 * Created by LuongVo on 10/26/2016.
 */
public class pointXy {
    public pointXy() {
        x = 0;
        y = 0;
    }
    public pointXy ( int a , int b){
        x = a;
        y = b;
    }
    public double distance (pointXy b) {
        return sqrt(abs((pow(this.x, 2) - pow(b.x, 2)) + (pow(this.y, 2) - pow(b.y, 2))));
    }
    public void display () {
        System.out.println("(" + x + "," + y + ")");
    }
    private int x;
    private int y;
}
