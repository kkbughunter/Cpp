package customer;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

import bank.Bank;

public class CustomerFileHandler {

  private static String fileName = "data_file/bank_db.txt";
  private Bank bank;

  public CustomerFileHandler(Bank bank) {
    this.bank = bank;
  }

  public void customerDataInit() throws IOException {

    BufferedReader reader = new BufferedReader(new FileReader(fileName));

    String row;
    row = reader.readLine(); // eleminate column name
    while ((row = reader.readLine()) != null) {
      // System.out.println(row);
      String[] splitedRow = row.split(" ");

      int id = Integer.parseInt(splitedRow[0]);
      int accountId = Integer.parseInt(splitedRow[1]);
      String name = splitedRow[2];
      double balance = Double.parseDouble(splitedRow[3]);
      String passwd = splitedRow[4];

      Customer newCustomer = new Customer(id, accountId, name, balance, passwd);

      // call Add new Customer in Bank class.
      bank.addCustomer(newCustomer);
    }
    reader.close();
  }

}
