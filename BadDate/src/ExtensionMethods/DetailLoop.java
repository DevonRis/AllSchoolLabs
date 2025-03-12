package ExtensionMethods;
import java.util.List;

public class DetailLoop {
    private int year;
    private int month;
    private int day;
    boolean validDate = true;
    private int februaryDays = 28;
    final int MinimumYEAR = 0, MinimumMONTH = 1, MinimumDAY = 1, MaxDAY = 31, MaxMonth = 12;

    public DetailLoop(List<Integer> dateInts)
    {
        year = dateInts.get(0);
        month = dateInts.get(1);
        day = dateInts.get(2);
        if(year <= MinimumYEAR)
        {
            validDate = false;
        }
        else if(month < MinimumMONTH || month > MaxMonth)
        {
            validDate = false;
        }
        else if (day < MinimumDAY || day> MaxDAY)
        {
            validDate = false;
        }
        else if (month == 2 && day > februaryDays)
        {
            validDate = false;
        }
    }
    public boolean getIfValidDate()
    {
        return validDate;
    }
}
