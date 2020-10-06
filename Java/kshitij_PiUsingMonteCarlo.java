//The area of a circle is defined as pi*r^2. Estimate π to 3 decimal places using a MonteCarlo method.

import java.util.*;
public class AreaOfPi {
	public static void main(String[] args) {
		double INTERVAL = 10000;
		
		int i;
		double rand_x, rand_y, origin_dist, pi=0;
		int circle_points=0, square_points=0;
		
		Random rand = new Random();
		
		for(i=0;i<(INTERVAL*INTERVAL);i++) {
			
			//Randomly generated x and y points
			rand_x = (double)(rand.nextInt() % (INTERVAL + 1)) / INTERVAL;
			rand_y = (double)(rand.nextInt() % (INTERVAL + 1)) / INTERVAL;
			
			//Distance between (x,y) from origin
			origin_dist = (rand_x * rand_x) + (rand_y * rand_y);
			
			//Check if (x,y) lies inside the defined circle with radius = 1
			if(origin_dist <= 1) {
				circle_points++;
			}
			
			//Total no. of points
			square_points++;
			
			//Estimated Pi - MonteCarlo Method
			pi = (double) (4 * circle_points) / square_points;
			
			//System.out.print(rand_x + " " + rand_y + " " + circle_points + " " + square_points + " - " + pi + "\n");
		}
		
		//Final Value
		System.out.println("\n PI = " + pi);
	}
}
