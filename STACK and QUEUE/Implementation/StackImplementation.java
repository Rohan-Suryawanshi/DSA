public class StackImplementation {
  private int MAX_SIZE;
  private int top;
  private int stack[];

  public StackImplementation(int MAX_SIZE) {
    this.MAX_SIZE = MAX_SIZE;
    this.top = -1;
    this.stack = new int[MAX_SIZE];
  }

  public boolean isFull() // O(1)
  {
    return top == (MAX_SIZE - 1);
  }

  public boolean isEmpty() { // O(1)
    return top == -1;
  }

  public void push(int x) { // O(1)
    if (!isFull()) {
      stack[++top] = x;
    } else {
      System.out.println("Stack is Overflow");
    }
  }

  public int pop() { // O(1)
    if (!isEmpty()) {
      return stack[top--];
    } else {
      System.out.println("Stack is Underflow");
      return -1;
    }
  }

  public int peek() { // O(1)
    if (!isEmpty()) {
      return stack[top];
    } else {
      System.out.println("Stack is Underflow");
      return -1;
    }
  }

  public void display() { // O(n)
    if (!isEmpty()) {
      for (int i = 0; i <= top; i++) {
        System.out.print(stack[i] + " - > ");
      }
      System.out.println("Null");
    } else {
      System.out.println("Stack is Underflow");
    }
  }

  public static void main(String[] args) {
    StackImplementation s = new StackImplementation(5);
    System.out.println(s.pop());
    s.push(10);
    System.out.println(s.peek());
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);
    s.display();

  }
}
