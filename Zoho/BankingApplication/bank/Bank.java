package bank;

import java.util.ArrayList;
import java.util.List;

import customer.Customer;

public class Bank {

  List<Customer> customers;

  public Bank() {
    this.customers = new ArrayList<>();
  }

  public void addCustomer(Customer customer) {
    this.customers.add(customer);
  }

  public List<Customer> getAllCustomers() {
    return customers;
  }

  public void printAllCustomers() {
    for (Customer customer : customers) {
      System.out.printf("%d %d %s %f %s\n", customer.id, customer.accountId, customer.name, customer.balance,
          customer.passwd);
    }
  }
}