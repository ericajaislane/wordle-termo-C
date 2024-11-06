
#include "backupPalavras.h"

#include <locale.h>


void BackupPalavras(FILE *arquivo) {

    setlocale(LC_ALL, "Portuguese");


    arquivo = fopen("../palavras.txt", "a");
    char *backupPalavras[] = {
        "FESTA", "PAPEL", "GATOS", "MANGA", "AMIGO",
        "BOLAS", "CHEIO", "DENTE", "VENTO", "CERTA",
        "SAÚDE", "SORTE", "NOTAS", "PLENO", "FOLHA",
        "CINTO", "VINHA", "JOVEM", "ÁGUA", "BATER",
        "CURVA", "DOIDO", "ENFIM", "FARDO", "GARFO",
        "HOTEL", "JANTA", "LIGAR", "MOVER", "NOBRE",
        "OSSOS", "PADRE", "QUASE", "ROUPA", "SABOR",
        "TARDE", "URANO", "VIVER", "XEQUE", "ZONAL",
        "ADUBO", "BEBER", "CHUVA", "DENTE", "EXATO",
        "FOLGA", "ABRIU", "BRISA", "GRATO", "HORTA",
        "JUROS", "MARCHA", "PLANTA", "QUEDA", "REZAR",
        "SAMPA", "TIGRE", "VARAL", "ZUMBI",
        "ALOHA", "BAIXO", "CALMA", "DUCHA", "ENTAO",
        "FERVO", "GANHO", "HUMOR", "IDEIA", "JOVEM",
        "LETRA", "MANIA", "OBTER", "POSAR", "RITMO",
        "SALVO", "TURMA", "URINA", "VIRAR", "ZEALO",
        "BRASA", "TREVO", "VIOLA", "QUERO", "RENDA",
        "DITAR", "LIVRO", "ÓRGÃO", "CAFÉ", "VAZIO",
        "PECAR", "BOINA", "NAVIO", "CHEFE", "SIGLA",
        "RISCO", "MUDAR", "PUNIR", "TIROS", "CHÃOS",
        "SÉRIE", "CERTO", "DUROS", "LOIRO", "PODER",
        "BOLSO", "FALSA", "MOTEL", "HOTEL", "JUBAS"
     // Palavras adicionais
        "AROMA", "BEIJO", "CORRER", "DESTINO", "ELEGÂNCIA",
        "FORÇA", "GEMA", "HONRA", "INTUITO", "JEITO",
        "KARATÊ", "LEVEZA", "MORADA", "NECESSÁRIO", "ORVALHO",
        "PODER", "QUEIJO", "RITMO", "SÁBIO", "TEMPO",
        "UNIR", "VERSO", "XADREZ", "ZELO", "ALEGRE",
        "BRILHO", "CORDIAL", "DECENTE", "ENERGIA", "FIRMEZA",
        "GELO", "HARMONIA", "INTENSO", "JUSTIÇA", "LÁGRIMA",
        "MUDANÇA", "NORMAL", "ORGULHO", "PAZ", "QUIMERA",
        "RADIANTE", "SOFRER", "TRILHA", "UMIDADE", "VIÇO",
        "XILOFONE", "ZONA", "ALENTO", "BRASA", "CÉU",
        "DÓCIL", "EUFORIA", "FÁBULA", "GALHO", "HÁBIL",
        "IDEIA", "JAZIDA", "LAMENTO", "MISTER", "NAVIO",
        "OÁSIS", "PINGO", "QUERIDO", "ROMANCE", "SERENO",
        "TERNURA", "USADO", "VIRTUDE", "XAMPU", "ZUMBIDO",
        "ANTIGO", "BELEZA", "CHAVE", "DECORO", "ESMERO",
        "FLUIR", "GAIOLA", "HABITAR", "ÍMPETO", "JUSTO",
        "LUZIR", "MEDO", "NÉVOA", "ORDEM", "PRESENTE",
        "QUENTE", "RISO", "SONHO", "TREMOR", "UTOPIA",
        "VOLTAR", "XOXO", "ZIGUE"

    };

    for (int i = 0; i < sizeof(backupPalavras) / sizeof(char *); i++) {
        fprintf(arquivo, "%s \n", backupPalavras[i]);
    }

    fclose(arquivo);
};
