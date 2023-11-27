package TD2;

import java.util.Random;
import java.util.Scanner;

public class Questao3 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);
		Random random = new Random();

		int N, i = 0;
		int maior = Integer.MIN_VALUE;
		int indice = -1;

		System.out.println("Digite o número de elementos:");
		N = scan.nextInt();

		int[] A = new int[N];

		for (i = 0; i < N; i++) {
			A[i] = random.nextInt(N) + 1;

			if (A[i] > maior) {
				maior = A[i];
				indice = i;
			}
		}

		for (i = 0; i < N; i++) {
			System.out.println(A[i]);
		}

		System.out.println("Maior numero: " + maior + ", no indice " + indice);

	}

}
