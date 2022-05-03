import java.util.Scanner;
 
public class Watermelon{
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
 
		//System.out.println("Enter the weight of watermelon. ");
		int weigth = scan.nextInt();
		if(weigth >= 1 && weigth <= 100){
		if(weigth <= 2){
				System.out.println("No");
		}
		else if(weigth % 2 == 0){
				System.out.println("Yes");
		}
		else System.out.println("No");
		
	}
}
}
