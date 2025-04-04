import javax.swing.*;

public class Main {
    public static void main(String[] args) {

        //First Section
        String employeeName;
        double numTransactions;
        String transactString;
        double numShifts;
        String shiftString;
        double dollarValue;
        String dollarString;
        double score;
        double bonus = 0;
        final double BONUS_1 = 50.00;
        final double BONUS_2 = 75.00;
        final double BONUS_3 = 100.00;
        final double BONUS_4 = 200.00;

        final int THIRTY = 30;
        final int SIXTY_NINE = 69;
        final int ONE_HUNDRED_NINETY_NINE = 199;

        employeeName = JOptionPane.showInputDialog("Enter employee's name: ");
        JOptionPane.showMessageDialog(null, "Employee's name: " + employeeName);

        shiftString = JOptionPane.showInputDialog("Enter number of shifts: ");
        JOptionPane.showMessageDialog(null, "Number of shifts: " + shiftString);

        transactString = JOptionPane.showInputDialog("Enter number of transactions: ");
        JOptionPane.showMessageDialog(null, "Number of transactions: " + transactString);

        dollarString = JOptionPane.showInputDialog("Enter transactions dollar value: ");
        JOptionPane.showMessageDialog(null, "Transaction dollar value: " + dollarString);

        //Second Section.
        numShifts = Double.parseDouble(shiftString);
        numTransactions = Double.parseDouble(transactString);
        dollarValue = Double.parseDouble(dollarString);

        double result = Math.round((dollarValue / numTransactions) * 100.0) / 100.0;
        score = Math.round((result / numShifts) * 100.0) / 100.0;

        //Third Section
        if (score <= THIRTY)
        {
            bonus = BONUS_1;
        }
        else if (score <= SIXTY_NINE)
        {
            bonus = BONUS_2;
        }
        else if (score <= ONE_HUNDRED_NINETY_NINE)
        {
            bonus = BONUS_3;
        }
        else
        {
            bonus = BONUS_4;
        }

        //Output
        System.out.println("Employee Name: " + employeeName);
        System.out.println("Employee Bonus: $" + bonus);
    }
}