package ExtensionMethods;

public class InventoryCheck {
    boolean itemFound;

    public InventoryCheck(String addIn, String[] addIns, final int NUM_ITEMS)
    {
        for (int i = 0; i < NUM_ITEMS; i++)
        {
            if (addIns[i].equalsIgnoreCase(addIn)) {
                itemFound = true;
                return;
            }
        }
    }
    public boolean getIfItemIsFound()
    {
        return itemFound;
    }
}
