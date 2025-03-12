package ExtensionMethods;
import java.util.List;

public class EndOfJob {
    private String outputStatement = "";
    private int year;
    private int month;
    private int day;

    public EndOfJob(boolean validDate, List<Integer> dateInts)
    {
        year = dateInts.get(0);
        month = dateInts.get(1);
        day = dateInts.get(2);
        if(validDate)
        {
            outputStatement = month + "/" + day + "/" + year + " is a valid date.";
        }
        else
        {
            outputStatement = month + "/" + day + "/" + year + " is an invalid date.";
        }
    }
    public String GetOutputStatement()
    {
        return outputStatement;
    }
}
