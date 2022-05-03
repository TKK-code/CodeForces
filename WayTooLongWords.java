import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        String[] str = new String[a];
        for (int i = 0; i < a ; i++) {
            str[i] = scan.next();
        }
        for (int i = 0; i < str.length; i++) {
            if(str[i].length() <= 10){
                System.out.println(str[i]);
            }
            else if(str[i].length() > 10){
                format(str[i]);
            }
        }
    }
 
    public static void format(String str){
        int strlen = str.length()-2;
        char a = str.charAt(0);
        char b = str.charAt(str.length()-1);
        System.out.printf("%c%d%c\n",a,strlen,b);
    }
}
