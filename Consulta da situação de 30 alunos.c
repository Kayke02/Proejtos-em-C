#include <stdio.h>
int main() {
// Declaração das variáveis linha, coluna, vetor que armazena os códigos, variável para consulta a partir do código, número de aprovados, número de alunos em recuperação e número de reprovados
int L,C,vetorC[30],testeC,NAPR,NREC,NREP;
// Declaração das variáveis reais matriz que armazena notas, vetor que armazena médias, maior média, menor média, média geral
float matrizNOT[30][3],vetorM[30],maiorM,menorM,mediaG;
// Declaração da matriz do tipo caractere que está sendo usada para armazenar os nomes dos alunos e variável para verificar se o usuário quer verificar
char matrizNOM[30][50],verificar;
// Atribuição inicial das variáveis que serão usadas
NAPR = 0;
NREC = 0;
NREP = 0;
maiorM = 0;
menorM = 10;
mediaG = 0;
// loop para pegar nome e código
for (L=0;L<30;L=L+1) {
 printf ("Por favor digite o nome do aluno %d: ", L+1);
 scanf ("%s", &matrizNOM[L]);
 printf ("Por favor digite o código do aluno %d: ", L+1);
 scanf ("%d", &vetorC[L]);
// loop para pegar as 3 notas
 for (C=0;C<3;C=C+1) {
 printf ("Digite a nota %d do aluno %d: ", C+1, L+1);
 scanf ("%f", &matrizNOT[L][C]);
 }
// cálculo da média individual do aluno
 vetorM[L] = (matrizNOT[L][0]+matrizNOT[L][1]+matrizNOT[L][2])/3;
// teste para saber se o aluno está aprovado ou não e cálculo de quantos alunos estão aprovados, em recuperação e reprovados
 if (vetorM[L]>=7) {
 printf ("Aluno %s, de código %d foi aprovado com média %.2f \n nota na avaliação 1: %.2f \n nota na avaliação 2: %.2f \n nota na avaliação 3: %.2f \n", matrizNOM[L], vetorC[L], vetorM[L], matrizNOT[L][0], matrizNOT[L][1], matrizNOT[L][2]);
 NAPR = NAPR + 1;
 }
 else if (vetorM[L]<7 && vetorM[L]>=4) {
 printf ("Aluno %s, de código %d ficou de recuperação com média %.2f \n nota na avaliação 1: %.2f \n nota na avaliação 2: %.2f \n nota na avaliação 3: %.2f \n", matrizNOM[L], vetorC[L], vetorM[L], matrizNOT[L][0], matrizNOT[L][1], matrizNOT[L][2]);
 NREC = NREC + 1;
 }
 else {
 printf ("Aluno %s, de código %d foi reprovado com média %.2f \n nota na avaliação 1: %.2f \n nota na avaliação 2: %.2f \n nota na avaliação 3: %.2f \n", matrizNOM[L], vetorC[L], vetorM[L], matrizNOT[L][0], matrizNOT[L][1], matrizNOT[L][2]);
 NREP = NREP + 1;
 }

}
// Cálculo da média geral, verificação da maior e menor média
for (L=0;L<30;L=L+1) {
mediaG = mediaG + vetorM[L];
 if (maiorM < vetorM[L]) {
 maiorM = vetorM[L];
 }
 if (menorM > vetorM[L]) {
 menorM = vetorM[L]; }

}
// Relatório geral dos dados requeridos
printf (" Média geral da turma: %f \n Maior média da turma: %f \n Menor média da turma: %f \n", (mediaG/3),maiorM,menorM);
printf (" Número de aprovados: %d \n Número de alunos em recuperação: %d \n Número de reprovados: %d \n",NAPR, NREC, NREP);
// Pergunta se o usuário quer verificar alguma média
printf ("Você deseja verificar a situação de algum aluno? digite V (Verificar) e E (Encerrar): ");
scanf (" %c", &verificar);
// Se o usuário quiser é requerido o código do aluno e verifica sua média e se está aprovado, em recuperação ou reprovado
if (verificar == 'V' || verificar == 'v') {
 printf ("Digite o código do aluno que você deseja procurar: ");
 scanf (" %d", &testeC);
 for (L=0;L<30;L=L+1) {
 if (testeC == vetorC[L]) {
 if (vetorM[L] >= 7) {
 printf ("O aluno %s de código %d foi aprovado com média %.2f", matrizNOM[L],
testeC, vetorM[L]);
 }
 else if (vetorM[L]<7 && vetorM[L]>=4) {
 printf ("O aluno %s de código %d ficou de recuperação com média %.2f",
matrizNOM[L], testeC, vetorM[L]);
 }
 else {
 printf ("O aluno %s de código %d ficou reprovado com média %.2f", matrizNOM[L], testeC, vetorM[L]);
 }
 }
 }
}
// Se não o programa encerra normalmente
else {
 printf ("Programa encerrado.");
}
}

