package com.thano.hacktoberfest;

import java.util.Scanner;

public class ThanoshanMV_Number {
    public static void main(String[] args) {
        // create scanner object to read user input
        Scanner sc = new Scanner(System.in);
        System.out.println("Please enter a number: ");
        int number = sc.nextInt();
        String result = checkPositiveOrNegative(number);
        System.out.println(number + " is " + result);
    }

    /**
     * method to check whether the given number is positive or negative.
     *
     * @param num given number to check
     * @return whether the number is positive or negative
     */
    private static String checkPositiveOrNegative(int num) {
        if (num > 0) {
            return "Positive";
        } else if (num == 0) {
            return "Zero";
        } else {
            return "Negative";
        }
    }
}
