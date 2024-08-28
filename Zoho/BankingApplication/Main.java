import java.io.IOException;

import bank.Bank;
import customer.CustomerFileHandler;

public class Main {

   public static void main(String[] args) {
    Bank bank = new Bank();
    CustomerFileHandler customerFileHandler = new CustomerFileHandler(bank);
    
      try {
        
        customerFileHandler.customerDataInit();
        
      } catch (IOException e) {
        e.printStackTrace();
      }
      
      bank.printAllCustomers();
   }
}