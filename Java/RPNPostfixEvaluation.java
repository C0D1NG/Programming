import java.util.Scanner;
public class PostfixEvaluation  {

    Stack2  stack2=new Stack2();

    public int evaluatePostfix(String e){


        for (int i=0;i<e.length();i++){
            char c=e.charAt(i);
            if (c==' ')
                continue;

            else if(Character.isDigit(c)) {
                int n=0;
                //extract the characters and store in n
                while (Character.isDigit(c)){
                    n=n*10+ (int)(c-'0');
                    i++;
                    c=e.charAt(i);
                }
                //push the number into the stack
                stack2.push(n);
            }
            //if the scanned character is an operator pop two elements from the stack and apply the operator
            else {
                int value1=stack2.pop();
                int value2=stack2.pop();

                switch (c){

                    case '+':
                        stack2.push(value2+value1);
                        break;
                    case '-':
                        stack2.push(value2-value1);
                        break;
                    case '/':
                        stack2.push(value2/value1);
                        break;
                    case '*':
                        stack2.push(value2*value1);
                        break;
                }
            }
        }
        return stack2.pop();

    }
    public static void main(String[] args){
        PostfixEvaluation postfixEvaluation=new PostfixEvaluation();
        //System.out.println(postfixEvaluation.evaluatePostfix(" 1 5 + 8 4 1 - - * "));
        //System.out.println(postfixEvaluation.evaluatePostfix(" 2 3 4 + * "));
        Scanner scanner = new Scanner(System.in);
        int choice;

        while(true){
            System.out.println("Enter 1 to use the calculator and 0 to exit");
            choice = scanner.nextInt();
            scanner.nextLine();
            if(choice==1){
                System.out.println("Enter a postfix expression");
                String expression = scanner.nextLine();
                String expr = String.valueOf(expression).replaceAll(".", "$0  ");
                System.out.println(postfixEvaluation.evaluatePostfix(expr));
            }
            else if (choice==0){
                System.exit(0);
            }
            else {
                System.out.println("Invalid input");
            }
        }
    }
}
