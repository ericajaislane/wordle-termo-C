
#include "backupPalavras.h"

#include <locale.h>


void BackupPalavras(FILE *arquivo) {

    setlocale(LC_ALL, "Portuguese");


    arquivo = fopen("../palavras.txt", "a");
    char *backupPalavras[] = {
        "Festa", "Papel", "Gatos", "Manga", "Casa",
        "Amigo", "Bolas", "Cheio", "Dente", "Vento",
        "Rios", "Luz", "Certa", "Saude", "Sorte",
        "Notas", "Lagoa", "Grande", "Cores", "Pleno",
        "Reais", "Sol", "Folha", "Cinto", "Vinha",
        "Livros", "Bicho", "Votos", "Jovem", "Chave",
        "Agua", "Bater", "Curva", "Doido", "Enfim",
        "Fardo", "Garfo", "Hotel", "Irmao", "Janta",
        "Karen", "Ligar", "Mover", "Nobre", "Ossos",
        "Padre", "Quase", "Roupa", "Sabor", "Tarde",
        "Urano", "Viver", "Xeque", "Zonal", "Adubo",
        "Beber", "Chuva", "Dente", "Exato", "Folga",
        "Abriu", "Brisa", "Cavalo", "Drama", "Escola",
        "Folclore", "Grato", "Horta", "Ignicao", "Juros",
        "Koala", "Laranja", "Marcha", "Nodôa", "Obito",
        "Planta", "Quadro", "Relógio", "Sumo", "Tênis",
        "Urina", "Viagem", "Xícara", "Zebra", "Amigo",
        "Bolha", "Carro", "Dúbio", "Ensino", "Flor",
        "Ativo", "Bomba", "Clara", "Dança", "Ecoar",
        "Falar", "Gasto", "Herói", "Ídolo", "Junta",
        "Koans", "Livre", "Mágoa", "Nuvem", "Óvulo",
        "Prato", "Queda", "Rezar", "Sampa", "Tigre",
        "Úteis", "Varal", "Xerife", "Zumbi", "Acorda",
        "Banho", "Crise", "Dados", "Exame", "Fundo",
        "Glória", "Hábito", "Iguana", "Janeiro", "Kraken",
        "Lenda", "Mente", "Notas", "Olhar", "Pista",
        "Quota", "Regras", "Somar", "Tempo", "Urgente",
        "Vista", "Xarope", "Zé", "Acaso", "Botas",
        "Custo", "Drama", "Especie", "Fauna", "Goma",
        "História", "Início", "Jogo", "Lado", "Modo"
    };

    for (int i = 0; i < sizeof(backupPalavras) / sizeof(char *); i++) {
        fprintf(arquivo, "%s \n", backupPalavras[i]);
    }
};