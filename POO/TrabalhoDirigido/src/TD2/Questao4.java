package TD2;

import java.util.Scanner;

public class Questao4 {

	public static void main(String[] args) {

		Scanner input = new Scanner(System.in);
		String senhaInput, senha;

		do {

			System.out.println("Digite sua senha: ");
			senhaInput = input.next();
			senha = "a76dk09";

			if (senhaInput.equals(senha)) {
				System.out.println("ACESSO PERMITIDO");
				return;
			} else {
				System.out.println("SENHA INVÁLIDA");
			}
		} while (senhaInput != senha);

	}
}
