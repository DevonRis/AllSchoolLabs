import javax.swing.*;
import ExtensionMethods.InventoryCheck;

public class JumpinJive {
    public static void main(String[] args) {
        final int NUM_ITEMS = 5;
        String addIn;
        boolean foundIt;
        String[] addIns = {"Cream", "Cinnamon", "Chocolate", "Amaretto", "Whiskey"};
        var cream = addIns[0];
        var cinnamon = addIns[1];
        var chocolate = addIns[2];
        var amaretto = addIns[3];
        var whiskey = addIns[4];
        double[] addInPrices = {.89, .25, .59, 1.50, 1.75};
        double orderTotal = 2.00;
        double totalPrice;

        addIn = JOptionPane.showInputDialog("Enter coffee add-in or XXX to quit: ");
        while (!addIn.equalsIgnoreCase("XXX"))
        {
            InventoryCheck inventoryCheck = new InventoryCheck(addIn, addIns, NUM_ITEMS);
            foundIt = inventoryCheck.getIfItemIsFound();
            if(!foundIt)
            {
                JOptionPane.showMessageDialog(
                        null,
                        "Sorry, we do not carry that. Your order total is $" + String.format("%.2f", orderTotal),
                        "Error",
                        JOptionPane.ERROR_MESSAGE
                );
                break;
            }
            else if(foundIt && addIn.equalsIgnoreCase(cream))
            {
                totalPrice = orderTotal + addInPrices[0];
                JOptionPane.showMessageDialog(null, "Order Total is $" + String.format("%.2f", totalPrice));
            }
            else if(foundIt && addIn.equalsIgnoreCase(cinnamon))
            {
                totalPrice = orderTotal + addInPrices[1];
                JOptionPane.showMessageDialog(null, "Order Total is $" + String.format("%.2f", totalPrice));
            }
            else if(foundIt && addIn.equalsIgnoreCase(chocolate))
            {
                totalPrice = orderTotal + addInPrices[2];
                JOptionPane.showMessageDialog(null, "Order Total is $" + String.format("%.2f", totalPrice));
            }
            else if(foundIt && addIn.equalsIgnoreCase(amaretto))
            {
                totalPrice = orderTotal + addInPrices[3];
                JOptionPane.showMessageDialog(null, "Order Total is $" + String.format("%.2f", totalPrice));
            }
            else if(foundIt && addIn.equalsIgnoreCase(whiskey))
            {
                totalPrice = orderTotal + addInPrices[4];
                JOptionPane.showMessageDialog(null, "Order Total is $" + String.format("%.2f", totalPrice));
            }
            addIn = JOptionPane.showInputDialog("Enter coffee add-in or XXX to quit: ");
        }
    }
}