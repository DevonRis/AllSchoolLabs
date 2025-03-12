import java.util.Scanner;
import ExtensionMethods.DetailLoop;
import ExtensionMethods.EndOfJob;
import ExtensionMethods.HouseKeeping;
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<String> dateInputs = new ArrayList<>();
        System.out.print("Enter year: ");
        String yearString = scanner.nextLine();
        dateInputs.add(yearString);
        System.out.print("Enter month: ");
        String monthString = scanner.nextLine();
        dateInputs.add(monthString);
        System.out.print("Enter day: ");
        String dayString = scanner.nextLine();
        dateInputs.add(dayString);


        HouseKeeping houseKeeping = new HouseKeeping(dateInputs);
        List<Integer> dateInts = houseKeeping.getDateInts();
        DetailLoop detailLoop = new DetailLoop(dateInts);
        boolean validDate = detailLoop.getIfValidDate();
        EndOfJob endOfJob = new EndOfJob(validDate, dateInts);
        String outputStatement = endOfJob.GetOutputStatement();
        System.out.println(outputStatement);
    }
}