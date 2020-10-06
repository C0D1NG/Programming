import java.util.*;
class Calculator
{
    public static void main (String args[])
    {
        Scanner in=new Scanner(System.in);
        int res = 0;
        System.out.println(" Enter the first No." );
        int a = in.nextInt();
        System.out.println(" Enter the Second No." );
        int b = in.nextInt();
        System.out.println(" Enter the Operator." );
        in.nextLine();
        String opp =in.nextLine();
        char op=opp.charAt(0);
        switch(op)
        {
            case '+':
            res = a+b;
            break;
            case '-':
            res = a-b;
            break;
            case '*':
            res =a*b;
            break;
            default :
            System.out.println("Invalid operation");
        }
        System.out.println("The result is "+res);
    }
}
