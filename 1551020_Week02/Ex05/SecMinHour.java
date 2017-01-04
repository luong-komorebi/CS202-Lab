package Ex05;

/**
 * Created by LuongVo on 10/26/2016.
 */
public class SecMinHour {




    private int sec;
    private int min;
    private int hour;


    public SecMinHour (int sec, int min, int hour) {
        this.sec= sec;
        this.hour = hour;
        this.min = min;
    }

    public int getsecBefore(){
        if ( sec == 0) {
            return 59;
        }
        int m = sec-1;
        return m;
    }

    public int getsecAfter() {
        int m = sec+1;
        if (sec == 59)
            return 0;
        else return m;
    }

    public int getminBefore() {
        int m = min - 1;
        if (min == 0)
            return 59;

        else return m;
    }
    public int getminAfter(){
        int m = min + 1;
        if ( min == 59 )
            return 0;
        else return m;
    }


    public int getmin() {
        return min;
    }

    public int gethour() {
        return hour;
    }




}
