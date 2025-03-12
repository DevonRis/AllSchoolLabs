package ExtensionMethods;
import java.util.ArrayList;
import java.util.List;

public class HouseKeeping {
    private List<Integer> dateInts;

    public HouseKeeping(List<String> dateInputs)
    {
        dateInts = new ArrayList<>();
        for(var input : dateInputs)
        {
            dateInts.add(Integer.parseInt(input));
        }
    }
    public List<Integer> getDateInts()
    {
        return dateInts;
    }
}
