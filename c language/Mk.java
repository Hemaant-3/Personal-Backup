import java.util.Scanner;
public class Mk
{
public static void main(String[] args) 
{
    // System.out.println("Hello Java");
    System.out.println("please enter a number to get table");
    Scanner sc = new Scanner(System.in);
    int x = sc.nextInt();
    System.out.println("The number of " + x +" table is:");

for(int i = 1; i <= 10; i++)
{
    System.out.println(x +" X "+ i+ "   = " +i*x);

}
}
}