package customer;

public class Customer {
  public int id;
  public int accountId;
  public String name;
  public double balance;
  public String passwd;

  public Customer(int id, int accountId, String name, double balance, String passwd) {
    this.id = id;
    this.accountId = accountId;
    this.name = name;
    this.balance = balance;
    this.passwd = passwd;
  }
}
