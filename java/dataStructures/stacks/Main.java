/** Stacks are LIFO(Last In First Out) data structures.
 * Stores objects in a vertical tower like structure.
 * push() method is used to push object in top of stack.
 * pop() method is used to pop from the top of the stack.
 *
 * Other useful methods are: empty(), 
 *
 */
 
import java.util.Stack;

public class Main {
  
  public static void main(String[] args) {
    Stack<String> stack = new Stack<String>();

    stack.push("Football");
    stack.push("Volleyball");
    stack.push("Tennis");

    stack.pop(); // returns the topmost object of the stack and removes it.

    System.out.println(stack); // Printing the stack.
    // System.out.println(stack.empty()); // Checking if the stack is empty.
  }
}
