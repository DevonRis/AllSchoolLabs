//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {

        String head1 = "Number: ";
        String head2 = "Multiplied by 2: ";
        String head3 = "Multiplied by 10: ";
        int numberCounter;
        int byTen = 10;
        int byTwo = 2;
        final int NUM_LOOPS = 10;

        System.out.println("0 through 10 multiplied by 2 and by 10" + "\n");
        //"For" Loop Below
        for(numberCounter = 0; numberCounter <= NUM_LOOPS; numberCounter++)
        {
            byTwo = numberCounter * 2;
            byTen = numberCounter * 10;
            System.out.println(head1 + numberCounter);
            System.out.println(head2 + byTwo);
            System.out.println(head3 + byTen);
        }
    }
}