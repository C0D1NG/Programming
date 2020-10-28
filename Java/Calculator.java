import java.util.*;
class Calculator
{
    public static void main (String args[])
    {
        Scanner in=new Scanner(System.in);
        float res = 0;
        System.out.println(" Enter the first No." );
        float a = in.nextFloat();
        System.out.println(" Enter the Second No." );
        float b = in.nextFloat();
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
            case '/':
            res = a/b;
            default :
            System.out.println("Invalid operation");
        }
        System.out.println("The result is "+res);
    }
}
