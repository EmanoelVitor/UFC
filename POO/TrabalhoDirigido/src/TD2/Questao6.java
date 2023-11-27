package TD2;

import java.util.Scanner;

public class Questao6 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		while(true) {
		int h1, m1, h2, m2;

		h1 = sc.nextInt();
		m1 = sc.nextInt();
		h2 = sc.nextInt();
		m2 = sc.nextInt();
		
		if(h1 == 0 && m1 == 00 && h2 == 00 && m2 ==0) {
			break;
		}
		
		int hora1 = (h1 * 60) + m1;
		int hora2 = (h2 * 60) + m2;

		int subtHoras = hora1 - hora2;

		if (hora1 > hora2) {
			hora1 -= 1440;
			subtHoras = hora1 - hora2;
		}

		if (subtHoras < 0) {
			subtHoras *= (-1);
		}

		System.out.println(subtHoras);
		
		}
		
	}

}