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

cout << "PERFIL COMPORTAMENTAL PARA L�DERES!" << endl << endl;
cout << "Adaptado da teoria postulado pelo psic�logo Dr. William  Marston em seu livro �Emotions of Normal People� (1928)." << endl;
cout << "Escolha a op��o que melhor representa sua caracter�stica, lembrando que n�o existe resposta correta!" << endl << endl;

corrigir1:
cout << "1- Animado 2- Aventureiro 3-Anal�tico 4-Adapt�vel" << endl;
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
cout << "1- Soci�vel 2- Energ�tico 3-Doador 4-Submisso" << endl;
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
cout << "1- Desembara�ado 2- Ativo 3-Questionador 4-Mediador"<< endl;
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
cout << "1- Metido 2- Mand�o 3-Acanhado 4-Comedido"<< endl;
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
cout << "1- Brincalh�o 2- Persuasivo 3-Persistente 4-Sereno"<< endl;
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
cout << "1- Espirituoso 2- Aut�nomo 3-Sens�vel 4-Satisfeito"<< endl;
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
cout << "1- Espont�neo 2- Seguro 3-Organizado 4-T�mido"<< endl;
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
cout << "1- Democr�tico 2- Decidido 3-Profundo 4-Ir�nico"<< endl;
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
cout << "1- Popular 2- Produtivo 3-Perfeccionista 4-Am�vel"<< endl;
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
cout << "1- Indisciplinado 2- Insens�vel 3-Rancoroso 4-Desinteressado"<< endl;
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
cout << "1- Engra�ado 2- Vigoroso 3-Fiel 4-Amig�vel"<< endl;
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
cout << "1- Comunicativo 2- Audacioso 3-Minucioso 4-Diplom�tico"<< endl;
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
cout << "1- Alegre 2- Confiante 3-Culto 4-Previs�vel"<< endl;
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
cout << "1- Vivo 2- L�der 3-Leal 4-Ouvinte"<< endl;
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
cout << "1- Falante 2- Posicionado 3-Sens�vel 4-Retra�do"<< endl;
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
cout << "1- Repet�vel 2- Inflex�vel 3-Ressentido 4-Relutante"<< endl;
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
cout << "1- Imprevis�vel 2- Frio 3-Calculista 4-Harm�nico"<< endl;
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
cout << "1- Casual 2- Vision�rio 3-Estrategista 4-Ponderado"<< endl;
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
cout << "1- Ing�nuo 2- Ousado 3-Negativo 4-Indiferente"<< endl;
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
    cout << "Voc� � um l�der CARISM�TICO" << endl;
    system ("pause");
    system ("pause");
    system ("cls");
cout<< "Perfil comportamental: carism�tico: " << endl;

cout << "S�o l�deres capazes de influenciar pessoas. Lideram para as pessoas e com as pessoas." << endl << endl;

cout << "Pontos Positivos:" << endl;
cout << "cren�a de que as pessoas norteiam a felicidade na sua vida." << endl;
cout << "Procuram criar um network forte e relacionamentos frequentes. " << endl;
cout << "Bons comunicadores, rela��es p�blicas," <<endl;
cout << "marketing e profissionais que tenham em sua carreira o v�nculo com as pessoas." << endl;
cout << "Como lideres procuram manter o astral da equipe sempre para cima e sempre tentam ouvir" << endl;
cout << "todos os envolvidos antes de tomar uma decis�o." <<endl;
cout << "Sorridentes, alegres e com �timo humor. " << endl << endl;

cout << "Pontos a Desenvolver:" << endl;
cout << "tendem a perder o foco dos objetivos e metas com muita facilidade." << endl;
cout << "Como pensam sempre em primeiro lugar nas pessoas, podem tomar decis�es de forma impulsiva." << endl;
cout << "S�o �timos para transmitir informa��es, mas podem n�o dar espa�o ao seu interlocutor." << endl;
cout << "Podem ser desorganizados em suas tarefas e documentos. Guardar segredo � algo muito dif�cil para eles." << endl;
cout << "Em situa��es extremas s�o propensos a ter temperamento imaturo e dram�tico." << endl << endl;
}else
if (perfil2>perfil1 && perfil2>perfil3 && perfil2>perfil4){
        system("pause");
    cout << "Voc� � um l�der RESOLUTIVO" << endl;
    system ("pause");
    system ("pause");
    system ("cls");
cout<< "Perfil comportamental: resolutivo: " << endl;

cout << "Pessoas com esse perfil t�m capacidade de entrega de resultados e atingimento de metas fora da curva normal." << endl;
cout << "Suas equipes s�o competitivas e muito focadas." << endl;

cout << "Pontos Positivos:" << endl;
cout << "cren�a de que alcan�ar metas e resultados d�o sentido � vida. S�o muito" << endl;
cout << "r�pidos na execu��o de suas atividades e no alcance de seus objetivos. Ultrapassam" <<endl;
cout << "barreiras com muita facilidade. S�o corajosos, objetivos e apresentam resultados em " <<endl;
cout << "pouqu�ssimo tempo. Ao se depararem com as dificuldades n�o se abatem facilmente " <<endl;
cout << "e s�o altamente combativos. Confiam em suas habilidades." << endl;
cout << "Procuram solu��es fora do convencional para atingir seus objetivos." << endl << endl;

cout << "Pontos a Desenvolver:" << endl;
cout << "tendem a buscar resultados a qualquer custo, quebrando regras" << endl;
cout << "importantes. S�o percebidos nas rela��es como frios e distantes. Em equipe, costumam " << endl;
cout << "ser individualistas, afetando o trabalho dos demais. Podem ter dificuldade em planejar" << endl;
cout << "suas atividades, pois apresentam ansiedade para come�ar a executar de imediato" << endl;
cout << "Podem aparentar ser o �sabe tudo� e n�o se permitem experimentar ou errar. L�deres " << endl;
cout << "resolutivos s�o propensos � frustra��o se a equipe n�o atinge o resultado esperado.  "<<endl;
cout << "Em casos extremos, apresentam comportamento assertivo em demasia e parecem "<<endl;
cout << "ofensivos quando as coisas n�o acontecem da forma como desejam. "<<endl << endl;
}else
if (perfil3>perfil1 && perfil3>perfil2 && perfil3>perfil4){
       system("pause");
    cout << "Voc� � um l�der ANAL�TICO" << endl;
    system ("pause");
    system ("pause");
    system ("cls");
cout<< "Perfil comportamental: anal�tico: " << endl;

cout << "L�deres anal�ticos s�o focados em fatos e dados. Sua lideran�a considera as tarefas e a organiza��o de sua equipe." << endl << endl;

cout << "Pontos Positivos:" << endl;
cout << "cren�a de que a perfei��o nas atividades � o caminho do �xito. " << endl;
cout << "Realizam trabalhos impec�veis, sem qualquer erro ou falta de informa��es. S�o muito " <<endl;
cout << "persistentes na realiza��o de suas tarefas. Bons ouvintes, ao receber uma tarefa,  " <<endl;
cout << "prestam aten��o nos detalhes. Procuram superar as expectativas de todos quanto �  " <<endl;
cout << "qualidade e � compet�ncia para desenvolver suas a��es. S�o organizados, detalhistas e perfeccionistas. " << endl << endl;

cout << "Pontos a Desenvolver:" << endl;
cout << "podem parecer arrogantes com perfis comportamentais que  " << endl;
cout << "n�o prezam a perfei��o e os dados. Quando tomam decis�es, n�o s�o receptivos �s " <<endl;
cout << "novas ideias. Ficam estressados quando as coisas n�o saem perfeitas. N�o conseguem  " <<endl;
cout << "equilibrar a vida pessoal e o trabalho. Demoram a entrar em a��o, pois precisam que   " <<endl;
cout << "tudo esteja perfeito para agirem. Costumam n�o delegar, pois ningu�m far� t�o perfeito como ele." << endl << endl;
}else
if (perfil4>perfil1 && perfil4>perfil2 && perfil4>perfil3){
        system("pause");
    cout << "Voc� � um l�der HARMONIOSO" << endl;
    system ("pause");
    system ("pause");
    system ("cls");
cout<< "Perfil comportamental: harmonioso: " << endl;

cout << "Lideram com base na confian�a e na parceria. Procuram a harmonia entre o grupo e se esfor�am para que isso aconte�a." << endl << endl;

cout << "Pontos Positivos:" << endl;
cout << "pessoas fi�is e de confian�a. �timos mediadores de conflitos e bom " << endl;
cout << "ouvintes num processo de grupo. Calmos, equilibrados e tranquilos em momentos de  " <<endl;
cout << "estresse. Prestativos no atendimento �s necessidades da empresa e dos liderados. S�o  " <<endl;
cout << "vistos como algu�m que se pode confiar e que ser� acolhido sem julgamentos." << endl << endl;

cout << "Pontos a Desenvolver:" << endl;
cout << "podem demorar para decidir. Gostam de executar as tarefas e  " << endl;
cout << "a��es no seu ritmo. Preferem realizar apenas uma tarefa de cada vez. Tendem a precisa " <<endl;
cout << "de informa��es extras para decidirem sobre algo. N�o s�o adeptos �s mudan�as " <<endl;
cout << "repentinas. Podem desanimar quando n�o percebem sentido em alguma a��o. Indecisos  " <<endl;
cout << "em momentos de press�o. Mais t�midos com pessoas que n�o conhecem ou n�o confiam. " << endl << endl;

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
