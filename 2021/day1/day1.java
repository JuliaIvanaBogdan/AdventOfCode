import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;


public class day1 {
	
	
	public static int partone() throws FileNotFoundException {
		File input = new File("input file location");
		Scanner sc = new Scanner(input);
		
		//int[] depth = new int[2000];
		//int c = 0;
		int increase = 0;
		int prev = sc.nextInt();
		int current = 0;
		while (sc.hasNextLine()) {
			//depth[c] = sc.nextInt();
			//c++;
			current = sc.nextInt();
			if (prev<current) {
				increase++;
				prev = current;
			} else {
				prev = current;
			}
			
		}
		
		return increase;
	}
	
	
	

	public static int parttwo() throws FileNotFoundException {
		File input = new File("input file location");
		Scanner sc = new Scanner(input);
		
		int increase = 0;
		
		
		int[] depth = new int[2000];
		int c = 0;
		
		
		while (sc.hasNextLine()) {
			depth[c] = sc.nextInt();
			c++;			
		}
		
		for (int i=0;i<depth.length-3;i++) {
			int A = depth[i]+depth[i+1]+depth[i+2];
			int B = depth[i+1]+depth[i+2]+depth[i+3];
			
			if (A<B) {
				increase++;
			}
		}
		
		return increase;
	}

	
	

	
	public static void main(String[] args) throws FileNotFoundException {
		//int solution = partone();
		int solution = parttwo();
		System.out.println(solution);
		return;
	}
	
}
