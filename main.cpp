#include <iostream>
#include <stdio.h>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
refazer:
setlocale(LC_ALL, "Portuguese");

int escolha=0,perfil1=0,perfil2=0,perfil3=0,perfil4=0,i=1;
char sim_nao=0;

cout << "PERFIL COMPORTAMENTAL PARA LÍDERES!" << endl << endl;
cout << "Adaptado da teoria postulado pelo psicólogo Dr. William  Marston em seu livro “Emotions of Normal People” (1928)." << endl;
cout << "Escolha a opção que melhor representa sua característica, lembrando que não existe resposta correta!" << endl << endl;

corrigir1:
cout << "1- Animado 2- Aventureiro 3-Analítico 4-Adaptável" << endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir1;
}
corrigir2:
cout << "1- Sociável 2- Energético 3-Doador 4-Submisso" << endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir2;
}
corrigir3:
cout << "1- Estimulante 2- Habilidoso 3-Respeitoso 4-Reservado "<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir3;
}
corrigir4:
cout << "1- Charmoso 2- Assertivo 3-Planejador 4-Paciente "<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir4;
}
corrigir5:
cout << "1- Inspirador 2- Independente 3-Idealista 4-Observador"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir5;
}
corrigir6:
cout << "1- Desembaraçado 2- Ativo 3-Questionador 4-Mediador"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir6;
}
corrigir7:
cout << "1- Atraente 2- Comandante 3-Detalhista 4-Contente"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir7;
}
corrigir8:
cout << "1- Metido 2- Mandão 3-Acanhado 4-Comedido"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir8;
}
corrigir9:
cout << "1- Brincalhão 2- Persuasivo 3-Persistente 4-Sereno"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir9;
}
corrigir10:
cout << "1- Convincente 2- Competitivo 3-Atencioso 4-Controlado"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir10;
}
corrigir11:
cout << "1- Espirituoso 2- Autônomo 3-Sensível 4-Satisfeito"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir11;
}
corrigir12:
cout << "1- Espontâneo 2- Seguro 3-Organizado 4-Tímido"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir12;
}
corrigir13:
cout << "1- Democrático 2- Decidido 3-Profundo 4-Irônico"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir13;
}
corrigir14:
cout << "1- Conversador 2- Firme 3-Pensativo 4-Tolerante"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir14;
}
corrigir15:
cout << "1- Popular 2- Produtivo 3-Perfeccionista 4-Amável"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir15;
}
corrigir16:
cout << "1- Indisciplinado 2- Insensível 3-Rancoroso 4-Desinteressado"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir16;
}
corrigir17:
cout << "1- Otimista 2- Franco 3-Ordeiro 4-Servidor"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir17;
}
corrigir18:
cout << "1- Engraçado 2- Vigoroso 3-Fiel 4-Amigável"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir18;
}
corrigir19:
cout << "1- Comunicativo 2- Audacioso 3-Minucioso 4-Diplomático"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir19;
}
corrigir20:
cout << "1- Alegre 2- Confiante 3-Culto 4-Previsível"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir20;
}
corrigir21:
cout << "1- Pessoas 2- Resultados 3-Dados 4-Fatos"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir21;
}
corrigir22:
cout << "1- Vivo 2- Líder 3-Leal 4-Ouvinte"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir22;
}
corrigir23:
cout << "1- Vivaz 2- Valente 3-Comportado 4-Equilibrado"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir23;
}
corrigir24:
cout << "1- Falante 2- Posicionado 3-Sensível 4-Retraído"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir24;
}
corrigir25:
cout << "1- Repetível 2- Inflexível 3-Ressentido 4-Relutante"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir25;
}
corrigir26:
cout << "1- Esquecido 2- Franco 3-Complicado 4-Medroso"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir26;
}
corrigir27:
cout << "1- Inoportuno 2- Impaciente 3-Inseguro 4-Indeciso"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir27;
}
corrigir28:
cout << "1- Imprevisível 2- Frio 3-Calculista 4-Harmônico"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir28;
}

corrigir29:
cout << "1- Casual 2- Visionário 3-Estrategista 4-Ponderado"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir29;
}
corrigir30:
cout << "1- Permissivo 2- Orgulhoso 3-Cauteloso 4-Simples"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir30;
}
corrigir31:
cout << "1- Ingênuo 2- Ousado 3-Negativo 4-Indiferente"<< endl;
cin >> escolha;
cout << endl;
if (escolha==1){
    perfil1+=+1;
} else
if (escolha==2){
    perfil2+=+1;
} else
if (escolha==3){
    perfil3+=+1;
} else
if (escolha==4){
    perfil4+=+1;
} else
if (escolha!='1','2','3','4'){
cout << "Escolha apenas de(1)a(4)" << endl;
goto corrigir31;
}
if (perfil1>perfil2 && perfil1>perfil3 && perfil1>perfil4){
    system("pause");
    cout << "Você é um líder CARISMÁTICO" << endl;
    system ("pause");
    system ("pause");
    system ("cls");
cout<< "Perfil comportamental: carismático: " << endl;

cout << "São líderes capazes de influenciar pessoas. Lideram para as pessoas e com as pessoas." << endl << endl;

cout << "Pontos Positivos:" << endl;
cout << "crença de que as pessoas norteiam a felicidade na sua vida." << endl;
cout << "Procuram criar um network forte e relacionamentos frequentes. " << endl;
cout << "Bons comunicadores, relações públicas," <<endl;
cout << "marketing e profissionais que tenham em sua carreira o vínculo com as pessoas." << endl;
cout << "Como lideres procuram manter o astral da equipe sempre para cima e sempre tentam ouvir" << endl;
cout << "todos os envolvidos antes de tomar uma decisão." <<endl;
cout << "Sorridentes, alegres e com ótimo humor. " << endl << endl;

cout << "Pontos a Desenvolver:" << endl;
cout << "tendem a perder o foco dos objetivos e metas com muita facilidade." << endl;
cout << "Como pensam sempre em primeiro lugar nas pessoas, podem tomar decisões de forma impulsiva." << endl;
cout << "São ótimos para transmitir informações, mas podem não dar espaço ao seu interlocutor." << endl;
cout << "Podem ser desorganizados em suas tarefas e documentos. Guardar segredo é algo muito difícil para eles." << endl;
cout << "Em situações extremas são propensos a ter temperamento imaturo e dramático." << endl << endl;
}else
if (perfil2>perfil1 && perfil2>perfil3 && perfil2>perfil4){
        system("pause");
    cout << "Você é um líder RESOLUTIVO" << endl;
    system ("pause");
    system ("pause");
    system ("cls");
cout<< "Perfil comportamental: resolutivo: " << endl;

cout << "Pessoas com esse perfil têm capacidade de entrega de resultados e atingimento de metas fora da curva normal." << endl;
cout << "Suas equipes são competitivas e muito focadas." << endl;

cout << "Pontos Positivos:" << endl;
cout << "crença de que alcançar metas e resultados dão sentido à vida. São muito" << endl;
cout << "rápidos na execução de suas atividades e no alcance de seus objetivos. Ultrapassam" <<endl;
cout << "barreiras com muita facilidade. São corajosos, objetivos e apresentam resultados em " <<endl;
cout << "pouquíssimo tempo. Ao se depararem com as dificuldades não se abatem facilmente " <<endl;
cout << "e são altamente combativos. Confiam em suas habilidades." << endl;
cout << "Procuram soluções fora do convencional para atingir seus objetivos." << endl << endl;

cout << "Pontos a Desenvolver:" << endl;
cout << "tendem a buscar resultados a qualquer custo, quebrando regras" << endl;
cout << "importantes. São percebidos nas relações como frios e distantes. Em equipe, costumam " << endl;
cout << "ser individualistas, afetando o trabalho dos demais. Podem ter dificuldade em planejar" << endl;
cout << "suas atividades, pois apresentam ansiedade para começar a executar de imediato" << endl;
cout << "Podem aparentar ser o “sabe tudo” e não se permitem experimentar ou errar. Líderes " << endl;
cout << "resolutivos são propensos à frustração se a equipe não atinge o resultado esperado.  "<<endl;
cout << "Em casos extremos, apresentam comportamento assertivo em demasia e parecem "<<endl;
cout << "ofensivos quando as coisas não acontecem da forma como desejam. "<<endl << endl;
}else
if (perfil3>perfil1 && perfil3>perfil2 && perfil3>perfil4){
       system("pause");
    cout << "Você é um líder ANALÍTICO" << endl;
    system ("pause");
    system ("pause");
    system ("cls");
cout<< "Perfil comportamental: analítico: " << endl;

cout << "Líderes analíticos são focados em fatos e dados. Sua liderança considera as tarefas e a organização de sua equipe." << endl << endl;

cout << "Pontos Positivos:" << endl;
cout << "crença de que a perfeição nas atividades é o caminho do êxito. " << endl;
cout << "Realizam trabalhos impecáveis, sem qualquer erro ou falta de informações. São muito " <<endl;
cout << "persistentes na realização de suas tarefas. Bons ouvintes, ao receber uma tarefa,  " <<endl;
cout << "prestam atenção nos detalhes. Procuram superar as expectativas de todos quanto à  " <<endl;
cout << "qualidade e à competência para desenvolver suas ações. São organizados, detalhistas e perfeccionistas. " << endl << endl;

cout << "Pontos a Desenvolver:" << endl;
cout << "podem parecer arrogantes com perfis comportamentais que  " << endl;
cout << "não prezam a perfeição e os dados. Quando tomam decisões, não são receptivos às " <<endl;
cout << "novas ideias. Ficam estressados quando as coisas não saem perfeitas. Não conseguem  " <<endl;
cout << "equilibrar a vida pessoal e o trabalho. Demoram a entrar em ação, pois precisam que   " <<endl;
cout << "tudo esteja perfeito para agirem. Costumam não delegar, pois ninguém fará tão perfeito como ele." << endl << endl;
}else
if (perfil4>perfil1 && perfil4>perfil2 && perfil4>perfil3){
        system("pause");
    cout << "Você é um líder HARMONIOSO" << endl;
    system ("pause");
    system ("pause");
    system ("cls");
cout<< "Perfil comportamental: harmonioso: " << endl;

cout << "Lideram com base na confiança e na parceria. Procuram a harmonia entre o grupo e se esforçam para que isso aconteça." << endl << endl;

cout << "Pontos Positivos:" << endl;
cout << "pessoas fiéis e de confiança. Ótimos mediadores de conflitos e bom " << endl;
cout << "ouvintes num processo de grupo. Calmos, equilibrados e tranquilos em momentos de  " <<endl;
cout << "estresse. Prestativos no atendimento às necessidades da empresa e dos liderados. São  " <<endl;
cout << "vistos como alguém que se pode confiar e que será acolhido sem julgamentos." << endl << endl;

cout << "Pontos a Desenvolver:" << endl;
cout << "podem demorar para decidir. Gostam de executar as tarefas e  " << endl;
cout << "ações no seu ritmo. Preferem realizar apenas uma tarefa de cada vez. Tendem a precisa " <<endl;
cout << "de informações extras para decidirem sobre algo. Não são adeptos às mudanças " <<endl;
cout << "repentinas. Podem desanimar quando não percebem sentido em alguma ação. Indecisos  " <<endl;
cout << "em momentos de pressão. Mais tímidos com pessoas que não conhecem ou não confiam. " << endl << endl;

}else
if (perfil1==perfil2 && perfil1>perfil3 && perfil1>perfil4 || perfil2==perfil3 && perfil2>perfil1 && perfil2>perfil4 || perfil1==perfil3 && perfil1>perfil2 && perfil1>perfil4 || perfil1==perfil4 & perfil1>perfil2 && perfil1>perfil3){
system ("pause");
cout << "O teste deu empate entre alguns quesitos, por favor repita o teste!" << endl;
system("pause");
cout << endl;
getchar();
system("cls");
goto refazer;
}
cout << endl;
cout <<"total 1: "<< perfil1 << endl;
cout <<"total 2: "<< perfil2 << endl;
cout <<"total 3: "<< perfil3 << endl;
cout <<"total 4: "<< perfil4 << endl;
system("pause");
system ("cls");

menu:
cout << "Refazer o teste?" << endl;
cout << "Digite (S) para prosseguir e (N) para encerrar!" << endl;
cin >> sim_nao;
cout << endl;

if (sim_nao=='s' || sim_nao=='S'){
goto refazer;
}else
if (sim_nao=='n' || sim_nao=='N'){
system ("cls");
return 0;
}else
if (sim_nao != 's' || sim_nao!= 'S' || sim_nao != 'n' || sim_nao != 'N'){
system("pause");
cout << "Digite apenas (S) ou (N) !" << endl;
system ("cls");
goto menu;
}
return 0;
}
