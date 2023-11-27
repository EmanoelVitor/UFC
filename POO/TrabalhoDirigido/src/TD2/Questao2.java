package TD2;

import java.util.Scanner;

public class Questao2 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int N, contPar = 0, contImpar = 0, contPos = 0, contNeg = 0, contNeu = 0;

		System.out.println("Digite o numero de elementos");
		N = scan.nextInt();

		int[] A = new int[N];

		System.out.println("Digite " + N + " numeros: ");

		for (int i = 0; i < N; i++) {

			A[i] = scan.nextInt();
		}

		for (int i = 0; i < N; i++) {
			if (A[i] % 2 == 0) {
				contPar++;
			} else {
				contImpar++;
			}

			if (A[i] >= 1) {
				contPos++;
			} else if (A[i] <= -1) {
				contNeg++;
			} else {
				contNeu++;
			}
		}

		System.out.println("PARES: " + contPar);
		System.out.println("IMPARES: " + contImpar);
		System.out.println("POSITIVOS:" + contPos);
		System.out.println("NEGATIVOS: " + contNeg);
		System.out.println("NEUTROS: " + contNeu);

	}

}
