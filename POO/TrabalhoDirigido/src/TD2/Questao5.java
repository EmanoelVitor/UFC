package TD2;

import java.util.Scanner;

public class Questao5 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = 0, i = 0, soma = 0, desvio = 0;
		float X = 0, S = 0;

		System.out.println("Digite o tamanho do array:");
		n = scan.nextInt();

		int[] v = new int[n];

		for (i = 0; i < n; i++) {
			System.out.println("");
			v[i] = scan.nextInt();
			soma += v[i];
		}

		X = soma / n;

		for (i = 0; i < n; i++) {
			v[i] = (int) Math.pow((v[i] - X), 2);

			desvio += v[i];
		}

		S = (float) Math.sqrt(desvio / n);

		System.out.printf("\nMedia = %.2f\n", X);
		System.out.printf("Desvio Padrao = %.2f", S);

	}

}
