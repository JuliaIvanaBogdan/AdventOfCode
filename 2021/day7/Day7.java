import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.lang.*;



public class Day7 {
	
	
	public static int parttwo() throws FileNotFoundException{
		File input = new File("C:\\Users\\julia\\eclipse-workspace\\AdventOfCode\\Day7\\day7input");
		Scanner sc = new Scanner(input);
		
		int max = 0;
	
		String line = sc.nextLine();
		String[] linevec = line.split(",");			
		int crabs[] = new int[linevec.length];
		
		for (int i=0;i<linevec.length;i++) {
			crabs[i] = Integer.parseInt(linevec[i]);
			if (crabs[i]>max) {
				max = crabs[i];
			}
		}
		
		max++;
		
		int[][] dp = new int[max][crabs.length];
		
		
		for (int i=0;i<max;i++) {
			int steps = Math.abs(crabs[0]-i);
			dp[i][0] = steps*(steps+1)/2;
		}
		
		for (int i=0;i<max;i++) {
			for (int j=1;j<crabs.length;j++) {
				int steps = Math.abs(crabs[j]-i);
				dp[i][j] = dp[i][j-1]+(steps*(steps+1)/2);
										
			}
		}
		
		int min = dp[0][crabs.length-1];
		for (int i=1;i<max;i++) {
			if (dp[i][crabs.length-1]<min) {
				min = dp[i][crabs.length-1];
			}
		}
		
		
		sc.close();
		return min;
	}
	
	
	
	public static int partone() throws FileNotFoundException{
		File input = new File("C:\\Users\\julia\\eclipse-workspace\\AdventOfCode\\Day7\\day7input");
		Scanner sc = new Scanner(input);
		
		int max = 0;
	
		String line = sc.nextLine();
		String[] linevec = line.split(",");			
		int crabs[] = new int[linevec.length];
		
		for (int i=0;i<linevec.length;i++) {
			crabs[i] = Integer.parseInt(linevec[i]);
			if (crabs[i]>max) {
				max = crabs[i];
			}
		}
		
		
		int[][] dp = new int[max][crabs.length];
		
		
		for (int i=0;i<max;i++) {
			dp[i][0] = crabs[0]-i;
		}
		
		for (int i=0;i<max;i++) {
			for (int j=1;j<crabs.length;j++) {
				dp[i][j] = dp[i][j-1]+ Math.abs(crabs[j]-i);
			}
		}
		
		int min = dp[0][crabs.length-1];
		for (int i=1;i<max;i++) {
			if (dp[i][crabs.length-1]<min) {
				min = dp[i][crabs.length-1];
			}
		}
		
		
		sc.close();
		return min;
	}
	
	public static void main(String[] args) throws FileNotFoundException {
		//int sol = partone();
		int sol = parttwo();
		System.out.println(sol);		
		return;
	}
	
	
}
