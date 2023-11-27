package TD2;

import java.util.Scanner;

public class Questao1 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int n1, n2;
		String op;

		System.out.println("Digite um numero + operacao + outro numero ex:(2 + 2)");
		n1 = scan.nextInt();
		op = scan.next();
		n2 = scan.nextInt();

		switch (op) {

		case "+":
			int soma = n1 + n2;
			System.out.println("SOMA= " + soma);
			break;

		case "-":
			int sub = n1 - n2;
			System.out.println("SUBTRACAO= " + sub);
			break;

		case "*":
			int mult = n1 * n2;
			System.out.println("MULTIPLICACAO= " + mult);
			break;

		case "/":
			float div;

			if (n2 != 0) {
				div = n1 / n2;
				System.out.println("DIVISAO= " + div);
			} else {
				System.out.println("Erro: Divisão por zero!");
				System.exit(1);
			}
			break;

		default:
			System.out.println("Operacao Invalida!");
			break;

		}
	}

}
