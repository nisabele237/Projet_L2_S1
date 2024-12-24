#include"fonction_Nishimwe.h"

//Fonction d'initialisation des pions de la matrice
void initialisationNi( ){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          pionNi[i][j]=" ";
        }
    }
}
//Fonction de verification des valeurs en entree

int verifNi(char *posNi ){
    if(strcmp(posNi,"1")==0||strcmp(posNi,"2")==0|| strcmp(posNi,"3")==0||strcmp(posNi,"4")==0||strcmp(posNi,"5")==0||strcmp(posNi,"6")==0||strcmp(posNi,"7")==0||strcmp(posNi,"8")==0||strcmp(posNi,"9")==0)
     return 1;
    else
        return 0;
}

//Fonction d 'affichage du quadrillage de jeu
void QuadrillageNi( ){
        printf(Gras Italic Grey "\t\t\t\t\t\t C'EST PARTI!!!   \n"end);
        printf("\n");
        printf("\t\t                           |                              |                           \n");
        printf("\t\t                           |                              |                           \n");
        printf("\t\t            %s              |             %s                |            %s           \n",  pionNi[0][0],  pionNi[0][1],  pionNi[0][2]);
        printf("\t\t                           |                              |                           \n");
        printf("\t\t___________________________|______________________________|___________________________\n");
        printf("\t\t                           |                              |                           \n");
        printf("\t\t                           |                              |                           \n");
        printf("\t\t            %s              |             %s                |            %s             \n",  pionNi[1][0],  pionNi[1][1],  pionNi[1][2]);
        printf("\t\t                           |                              |                           \n");
        printf("\t\t__________________________ |______________________________|___________________________\n");
        printf("\t\t                           |                              |                           \n");
        printf("\t\t                           |                              |                           \n");
        printf("\t\t            %s              |              %s               |            %s            \n",  pionNi[2][0],  pionNi[2][1],  pionNi[2][2]);
        printf("\t\t                           |                              |                           \n");
        printf("\t\t                           |                              |                           \n");
        printf("\n\n\n");
}
int estPleinNi( ){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(strcmp(  pionNi[i][j]," ")==0)
                return 0;
        }
    }
        return 1;
}

//Fonction permettant de designer un gagnant le cas echeant
int victoireNi(char* nom1Ni,char*nom2Ni){

if((strcmp( pionNi[0][0],Gras bleu"O"end)==0 && strcmp(  pionNi[0][1],Gras bleu"O"end)==0 && strcmp(  pionNi[0][2],Gras bleu"O"end )==0)
||(strcmp(  pionNi[1][0],Gras bleu"O"end)==0 && strcmp(  pionNi[1][1],Gras bleu"O"end)==0 && strcmp(  pionNi[1][2],Gras bleu"O"end)==0)
||(strcmp(  pionNi[2][0],Gras bleu"O"end)==0 && strcmp(  pionNi[2][1],Gras bleu"O"end)==0 && strcmp(  pionNi[2][2],Gras bleu"O"end)==0)
||(strcmp(  pionNi[0][0],Gras bleu"O"end)==0 && strcmp(  pionNi[1][1],Gras bleu"O"end)==0 && strcmp(  pionNi[2][2],Gras bleu"O"end)==0)
||(strcmp(  pionNi[0][2],Gras bleu"O"end)==0 && strcmp(  pionNi[1][1],Gras bleu"O"end)==0 && strcmp(  pionNi[2][0],Gras bleu"O"end)==0) 
||(strcmp(  pionNi[0][0],Gras bleu"O"end)==0 && strcmp(  pionNi[1][0],Gras bleu"O"end)==0 && strcmp(  pionNi[2][0],Gras bleu"O"end)==0)
||(strcmp(  pionNi[0][1],Gras bleu"O"end)==0 && strcmp(  pionNi[1][1],Gras bleu"O"end)==0 && strcmp(  pionNi[2][1],Gras bleu"O"end)==0)
||(strcmp(  pionNi[0][2],Gras bleu"O"end)==0 && strcmp(  pionNi[1][2],Gras bleu"O"end)==0 && strcmp(  pionNi[2][2],Gras bleu"O"end)==0)){    
  
    return 0;
}
else if((strcmp(  pionNi[0][0],Gras rouge"X"end)==0 &&strcmp(  pionNi[0][1],Gras rouge"X"end)==0 && strcmp(  pionNi[0][2],Gras rouge"X"end )==0)
||(strcmp(  pionNi[1][0],Gras rouge"X"end)==0 && strcmp(  pionNi[1][1],Gras rouge"X"end)==0 && strcmp(  pionNi[1][2],Gras rouge"X"end)==0)
||(strcmp(  pionNi[2][0],Gras rouge"X"end)==0 && strcmp(  pionNi[2][1],Gras rouge"X"end)==0 && strcmp(  pionNi[2][2],Gras rouge"X"end)==0)
||(strcmp(  pionNi[0][0],Gras rouge"X"end)==0 && strcmp(  pionNi[1][1],Gras rouge"X"end)==0 && strcmp(  pionNi[2][2],Gras rouge"X"end)==0)
||(strcmp(  pionNi[0][2],Gras rouge"X"end)==0 && strcmp(  pionNi[1][1],Gras rouge"X"end)==0 && strcmp(  pionNi[2][0],Gras rouge"X"end)==0) 
||(strcmp(  pionNi[0][0],Gras rouge"X"end)==0 && strcmp(  pionNi[1][0],Gras rouge"X"end)==0 && strcmp(  pionNi[2][0],Gras rouge"X"end)==0)
||(strcmp(  pionNi[0][1],Gras rouge"X"end)==0 && strcmp(  pionNi[1][1],Gras rouge"X"end)==0 && strcmp(  pionNi[2][1],Gras rouge"X"end)==0)
||(strcmp(  pionNi[0][2],Gras rouge"X"end)==0 && strcmp(  pionNi[1][2],Gras rouge"X"end)==0 && strcmp(  pionNi[2][2],Gras rouge"X"end)==0)
){

    return 1;
}
else{
    return 2;
}
}
int victoireAINi( ){

if((strcmp(  pionNi[0][0],Gras bleu"O"end)==0 && strcmp(  pionNi[0][1],Gras bleu"O"end)==0 && strcmp(  pionNi[0][2],Gras bleu"O"end )==0)
||(strcmp(  pionNi[1][0],Gras bleu"O"end)==0 && strcmp(  pionNi[1][1],Gras bleu"O"end)==0 && strcmp(  pionNi[1][2],Gras bleu"O"end)==0)
||(strcmp(  pionNi[2][0],Gras bleu"O"end)==0 && strcmp(  pionNi[2][1],Gras bleu"O"end)==0 && strcmp(  pionNi[2][2],Gras bleu"O"end)==0)
||(strcmp(  pionNi[0][0],Gras bleu"O"end)==0 && strcmp(  pionNi[1][1],Gras bleu"O"end)==0 && strcmp(  pionNi[2][2],Gras bleu"O"end)==0)
||(strcmp(  pionNi[0][2],Gras bleu"O"end)==0 && strcmp(  pionNi[1][1],Gras bleu"O"end)==0 && strcmp(  pionNi[2][0],Gras bleu"O"end)==0) 
||(strcmp(  pionNi[0][0],Gras bleu"O"end)==0 && strcmp(  pionNi[1][0],Gras bleu"O"end)==0 && strcmp(  pionNi[2][0],Gras bleu"O"end)==0)
||(strcmp(  pionNi[0][1],Gras bleu"O"end)==0 && strcmp(  pionNi[1][1],Gras bleu"O"end)==0 && strcmp(  pionNi[2][1],Gras bleu"O"end)==0)
||(strcmp(  pionNi[0][2],Gras bleu"O"end)==0 && strcmp(  pionNi[1][2],Gras bleu"O"end)==0 && strcmp(  pionNi[2][2],Gras bleu"O"end)==0)){    
  
    return 0;
}
else if((strcmp(  pionNi[0][0],Gras rouge"X"end)==0 &&strcmp(  pionNi[0][1],Gras rouge"X"end)==0 && strcmp(  pionNi[0][2],Gras rouge"X"end )==0)
||(strcmp(  pionNi[1][0],Gras rouge"X"end)==0 && strcmp(  pionNi[1][1],Gras rouge"X"end)==0 && strcmp(  pionNi[1][2],Gras rouge"X"end)==0)
||(strcmp(  pionNi[2][0],Gras rouge"X"end)==0 && strcmp(  pionNi[2][1],Gras rouge"X"end)==0 && strcmp(  pionNi[2][2],Gras rouge"X"end)==0)
||(strcmp(  pionNi[0][0],Gras rouge"X"end)==0 && strcmp(  pionNi[1][1],Gras rouge"X"end)==0 && strcmp(  pionNi[2][2],Gras rouge"X"end)==0)
||(strcmp(  pionNi[0][2],Gras rouge"X"end)==0 && strcmp(  pionNi[1][1],Gras rouge"X"end)==0 && strcmp(  pionNi[2][0],Gras rouge"X"end)==0) 
||(strcmp(  pionNi[0][0],Gras rouge"X"end)==0 && strcmp(  pionNi[1][0],Gras rouge"X"end)==0 && strcmp(  pionNi[2][0],Gras rouge"X"end)==0)
||(strcmp(  pionNi[0][1],Gras rouge"X"end)==0 && strcmp(  pionNi[1][1],Gras rouge"X"end)==0 && strcmp(  pionNi[2][1],Gras rouge"X"end)==0)
||(strcmp(  pionNi[0][2],Gras rouge"X"end)==0 && strcmp(  pionNi[1][2],Gras rouge"X"end)==0 && strcmp(  pionNi[2][2],Gras rouge"X"end)==0)
){

    return 1;
}
else{
    return 2;
}
}
//Fonction fondamentale de gestion du jeu
void Mode_MultiJoueurNi(char *nom1Ni,char *nom2Ni ){
    char *posNi=malloc(3*sizeof(char));
    int joueur=rand()%2;
    while(estPleinNi()==0){
        ICI:
        system("clear");
        QuadrillageNi();
        if(joueur==0){
            printf("%s,c'est a toi de jouer : ",nom1Ni);
            scanf("%s",posNi);
                if(verifNi(posNi)!=1){
                    printf("Expression non identifiée\n");
                    sleep(1);
                    system("clear");
                    goto ICI;
                }
             if(strcmp(posNi,"1")==0 && strcmp(  pionNi[0][0]," ")==0)
                  pionNi[0][0]= Gras bleu"O"end;
            else if(strcmp(posNi,"2")==0 && strcmp(  pionNi[0][1]," ")==0)
                  pionNi[0][1]=Gras bleu"O"end;
            else if(strcmp(posNi,"3")==0 && strcmp(  pionNi[0][2]," ")==0)
                  pionNi[0][2]=Gras bleu"O"end;
            else if(strcmp(posNi,"4")==0 && strcmp(  pionNi[1][0]," ")==0)
                  pionNi[1][0]=Gras bleu"O"end;
            else if(strcmp(posNi,"5")==0&& strcmp(  pionNi[1][1]," ")==0)
                  pionNi[1][1]=Gras bleu"O"end;
            else if(strcmp(posNi,"6")==0 && strcmp(  pionNi[1][2]," ")==0)
                  pionNi[1][2]=Gras bleu"O"end;
            else if(strcmp(posNi,"7")==0 && strcmp(  pionNi[2][0]," ")==0)
                  pionNi[2][0]=Gras bleu"O"end;
            else if(strcmp(posNi,"8")==0 && strcmp(  pionNi[2][1]," ")==0)
                  pionNi[2][1]=Gras bleu"O"end;
            else if(strcmp(posNi,"9")==0 && strcmp(  pionNi[2][2]," ")==0)
                  pionNi[2][2]=Gras bleu"O"end;  
            else{
                printf("Case deja occupee\n"); 
                sleep(1);
                system("clear");
                goto ICI;
            }
               joueur=1;        
        }
        
        else{
            printf("%s,c'est toi : ",nom2Ni);
            scanf("%s",posNi);
             if(verifNi(posNi)!=1){
                    printf("Expression non identifiée\n");
                    sleep(1);
                    system("clear");    
                    goto ICI;
                }
             else if(strcmp(posNi,"1")==0 && strcmp(  pionNi[0][0]," ")==0)
                  pionNi[0][0]=Gras rouge"X"end;
            else if(strcmp(posNi,"2")==0 && strcmp(  pionNi[0][1]," ")==0)
                  pionNi[0][1]=Gras rouge"X"end;
            else if(strcmp(posNi,"3")==0 && strcmp(  pionNi[0][2]," ")==0)
                  pionNi[0][2]=Gras rouge"X"end;
            else if(strcmp(posNi,"4")==0 && strcmp(  pionNi[1][0]," ")==0)
                  pionNi[1][0]=Gras rouge"X"end;
            else if(strcmp(posNi,"5")==0 && strcmp(  pionNi[1][1]," ")==0)
                  pionNi[1][1]=Gras rouge"X"end;
            else if(strcmp(posNi,"6")==0 && strcmp(  pionNi[1][2]," ")==0)
                  pionNi[1][2]=Gras rouge"X"end;
            else if(strcmp(posNi,"7")==0 && strcmp(  pionNi[2][0]," ")==0)
                  pionNi[2][0]=Gras rouge"X"end;
            else if(strcmp(posNi,"8")==0 && strcmp(  pionNi[2][1]," ")==0) 
                  pionNi[2][1]=Gras rouge"X"end;
            else if(strcmp(posNi,"9")==0 && strcmp(  pionNi[2][2]," ")==0)
                  pionNi[2][2]=Gras rouge"X"end;
            else{
                printf("Case deja occupee!\n");
                sleep(1);
                system("clear");
                goto ICI;
            }
            joueur=0;
        }
        int t;
        t=victoireNi(nom1Ni,nom2Ni);
        if(t==0){
            system("clear");
            printf("\n\n"whitebg jaune"%s ,Vous avez gagné(e) la partie !"end"\n",nom1Ni);           
            QuadrillageNi();
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while(getchar()!='\n');             
            break;

        }else if(t==1){
            system("clear");
            printf("\n\n"whitebg jaune"%s ,Vous avez gagné(e) la partie !"end"\n",nom2Ni);           
            QuadrillageNi();
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while(getchar()!='\n');          
            break;
        }
        else if(estPleinNi()){
            system("clear");
            printf("\n\n"whitebg green "Match Null!!"end"\n");
            QuadrillageNi();
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while(getchar()!='\n');          
            break;
        }
        
    }
    printf("\n\n"Gras blackbg"Termine!!"end"\n");
}

//Fonction de gestion du Mode Joueur Solo
void Mode_JoueurSoloNi(char *nom1Ni,char *nom2Ni ){
    char *posNi=malloc(3*sizeof(char));
    int joueur=rand()%2;
    while(estPleinNi()==0){
        ICI:
        system("clear");
        QuadrillageNi();
        if(joueur==0){
            printf("%s,c'est a toi de jouer : ",nom1Ni);
            scanf("%s",posNi);

                if(verifNi(posNi)!=1){
                    printf("Expression non identifiée\n");
                    sleep(1);
                    system("clear");
                    goto ICI;
                }
             if(strcmp(posNi,"1")==0 && strcmp(  pionNi[0][0]," ")==0)
                  pionNi[0][0]=Gras bleu"O"end;
            else if(strcmp(posNi,"2")==0 && strcmp(  pionNi[0][1]," ")==0)
                  pionNi[0][1]=Gras bleu"O"end;
            else if(strcmp(posNi,"3")==0 && strcmp(  pionNi[0][2]," ")==0)
                  pionNi[0][2]=Gras bleu"O"end;
            else if(strcmp(posNi,"4")==0 && strcmp(  pionNi[1][0]," ")==0)
                  pionNi[1][0]=Gras bleu"O"end;
            else if(strcmp(posNi,"5")==0&& strcmp(  pionNi[1][1]," ")==0)
                  pionNi[1][1]=Gras bleu"O"end;
            else if(strcmp(posNi,"6")==0 && strcmp(  pionNi[1][2]," ")==0)
                  pionNi[1][2]=Gras bleu"O"end;
            else if(strcmp(posNi,"7")==0 && strcmp(  pionNi[2][0]," ")==0)
                  pionNi[2][0]=Gras bleu"O"end;
            else if(strcmp(posNi,"8")==0 && strcmp(  pionNi[2][1]," ")==0)
                  pionNi[2][1]=Gras bleu"O"end;
            else if(strcmp(posNi,"9")==0 && strcmp(  pionNi[2][2]," ")==0)
                  pionNi[2][2]=Gras bleu"O"end;  
            else{
                printf("Case deja occupee\n"); 
                sleep(1);
                system("clear");
                goto ICI;
            }
               joueur=1;        
        }
        
        else{
            sleep(1);
   
//Premier tour
            if(strcmp(  pionNi[0][0]," ")==0)
              pionNi[0][0]=Gras rouge"X"end;
//Contre-attaque
            else if(strcmp(  pionNi[2][2],Gras bleu"O"end)==0 && strcmp(  pionNi[2][0],Gras bleu"O"end)==0)
              pionNi[2][1]=Gras rouge"X"end;
            else if(strcmp(  pionNi[2][2],Gras bleu"O"end)==0 && strcmp(  pionNi[2][1],Gras bleu"O"end)==0)
              pionNi[1][0]=Gras rouge"X"end;
            else if(strcmp(  pionNi[2][0],Gras bleu"O"end)==0 && strcmp(  pionNi[2][1],Gras bleu"O"end)==0)
              pionNi[2][2]=Gras rouge"X"end;
            else if(strcmp(  pionNi[1][1],Gras bleu"O"end)==0 && strcmp(  pionNi[1][2],Gras bleu"O"end)==0)
              pionNi[1][0]=Gras rouge"X"end;                   
            else if(strcmp(  pionNi[1][2],Gras bleu"O"end)==0 && strcmp(  pionNi[1][0],Gras bleu"O"end)==0)
              pionNi[1][1]=Gras rouge"X"end;
            else if(strcmp(  pionNi[0][2],Gras bleu"O"end)==0 && strcmp(  pionNi[0][0],Gras bleu"O"end)==0)
              pionNi[0][1]=Gras rouge"X"end; 
            else if(strcmp(  pionNi[0][2],Gras bleu"O"end)==0 && strcmp(  pionNi[0][1],Gras bleu"O"end)==0)
              pionNi[0][0]=Gras rouge"X"end;
            else if(strcmp(  pionNi[0][1],Gras bleu"O"end)==0 && strcmp(  pionNi[0][0],Gras bleu"O"end)==0)
              pionNi[0][2]=Gras rouge"X"end;
            else if(strcmp(  pionNi[1][0],Gras bleu"O"end)==0 && strcmp(  pionNi[0][0],Gras bleu"O"end)==0)
              pionNi[2][0]=Gras rouge"X"end; 
            else if(strcmp(  pionNi[0][1],Gras bleu"O"end)==0 && strcmp(  pionNi[1][1],Gras bleu"O"end)==0)
              pionNi[2][1]=Gras rouge"X"end;
            else if(strcmp(  pionNi[0][1],Gras bleu"O"end)==0 && strcmp(  pionNi[2][1],Gras bleu"O"end)==0)
              pionNi[1][1]=Gras rouge"X"end;
            else if(strcmp(  pionNi[1][1],Gras bleu"O"end)==0 && strcmp(  pionNi[2][1],Gras bleu"O"end)==0)
              pionNi[0][1]=Gras rouge"X"end; 
            else if(strcmp(  pionNi[1][2],Gras bleu"O"end)==0 && strcmp(  pionNi[0][1],Gras bleu"O"end)==0)
              pionNi[2][2]=Gras rouge"X"end;
            else if(strcmp(  pionNi[2][2],Gras bleu"O"end)==0 && strcmp(  pionNi[1][1],Gras bleu"O"end)==0)
              pionNi[2][0]=Gras rouge"X"end;
            else if(strcmp(  pionNi[1][1],Gras bleu"O"end)==0 && strcmp(  pionNi[2][2],Gras bleu"O"end)==0)
              pionNi[0][0]=Gras rouge"X"end;  
            else if(strcmp(  pionNi[1][1],Gras bleu"O"end)==0 && strcmp(  pionNi[0][2],Gras bleu"O"end)==0)
              pionNi[2][2]=Gras rouge"X"end; 
             else if(strcmp(  pionNi[1][0],Gras bleu"O"end)==0 && strcmp(  pionNi[1][1],Gras bleu"O"end)==0&& strcmp(  pionNi[1][2]," ")==0)
              pionNi[1][2]=Gras rouge"X"end;   
             else if(strcmp(  pionNi[0][2],Gras bleu"O"end)==0 && strcmp(  pionNi[1][2],Gras bleu"O"end)==0)
              pionNi[2][2]=Gras rouge"X"end;  
             else if(strcmp(  pionNi[0][0],Gras bleu"O"end)==0 && strcmp(  pionNi[1][1],Gras bleu"O"end)==0)
              pionNi[2][2]=Gras rouge"X"end;
            else if(strcmp(  pionNi[1][2],Gras bleu"O"end)==0 && strcmp(  pionNi[2][2],Gras bleu"O"end)==0)
              pionNi[0][2]=Gras rouge"X"end;            
             
 //Attaque
            else if(strcmp(  pionNi[2][0],Gras rouge"X"end)==0 && strcmp(  pionNi[2][1],Gras rouge"X"end)==0 && strcmp(  pionNi[2][2]," ")==0)
              pionNi[2][2]=Gras rouge"X"end; 
             else if(strcmp(  pionNi[2][1],Gras rouge"X"end)==0 && strcmp(  pionNi[2][2],Gras rouge"X"end)==0 && strcmp(  pionNi[2][0]," ")==0)
              pionNi[2][0]=Gras rouge"X"end; 
             else if(strcmp(  pionNi[1][1],Gras rouge"X"end)==0 && strcmp(  pionNi[1][0],Gras rouge"X"end)==0 && strcmp(  pionNi[1][2]," ")==0)
              pionNi[1][2]=Gras rouge"X"end;
             else if(strcmp(  pionNi[1][1],Gras rouge"X"end)==0 && strcmp(  pionNi[1][2],Gras rouge"X"end)==0 && strcmp(  pionNi[1][0]," ")==0 )
              pionNi[1][0]=Gras rouge"X"end; 
              else if(strcmp(  pionNi[1][1],Gras rouge"X"end)==0 && strcmp(  pionNi[0][2],Gras rouge"X"end)==0&& strcmp(  pionNi[2][0]," ")==0)
              pionNi[2][0]=Gras rouge"X"end; 
             else if(strcmp(  pionNi[2][0],Gras rouge"X"end)==0 && strcmp(  pionNi[0][2],Gras rouge"X"end)==0 && strcmp(  pionNi[1][1]," ")==0)
              pionNi[1][1]=Gras rouge"X"end;
             else if(strcmp(  pionNi[0][1],Gras rouge"X"end)==0 && strcmp(  pionNi[1][1],Gras rouge"X"end)==0 && strcmp(  pionNi[2][1]," ")==0)
              pionNi[2][1]=Gras rouge"X"end; 
              else if(strcmp(  pionNi[0][0],Gras rouge"X"end)==0 && strcmp(  pionNi[1][1],Gras rouge"X"end)==0 && strcmp(  pionNi[2][2]," ")==0)
              pionNi[2][2]=Gras rouge"X"end;    
             else if(strcmp(  pionNi[0][2],Gras rouge"X"end)==0 && strcmp(  pionNi[1][2],Gras rouge"X"end)==0 && strcmp(  pionNi[2][2]," ")==0)
              pionNi[2][2]=Gras rouge"X"end; 
             else if(strcmp(  pionNi[0][2],Gras rouge"X"end)==0 && strcmp(  pionNi[2][2],Gras rouge"X"end)==0 && strcmp(  pionNi[1][2]," ")==0)
              pionNi[1][2]=Gras rouge"X"end;
            else if(strcmp(  pionNi[0][0],Gras rouge"X"end)==0 && strcmp(  pionNi[1][0],Gras rouge"X"end)==0&& strcmp(  pionNi[2][0]," ")==0 )
              pionNi[2][0]=Gras rouge"X"end;
             else if(strcmp(  pionNi[0][0],Gras rouge"X"end)==0 && strcmp(  pionNi[2][2],Gras rouge"X"end)==0 && strcmp(  pionNi[1][1]," ")==0)
              pionNi[1][1]=Gras rouge"X"end; 
             else if(strcmp(  pionNi[2][1],Gras rouge"X"end)==0 && strcmp(  pionNi[1][1],Gras rouge"X"end)==0 && strcmp(  pionNi[1][1]," ")==0)
              pionNi[1][1]=Gras rouge"X"end; 
              else if(strcmp(  pionNi[0][0],Gras rouge"X"end)==0 && strcmp(  pionNi[0][1],Gras rouge"X"end)==0 && strcmp(  pionNi[0][2]," ")==0)
              pionNi[0][2]=Gras rouge"X"end;
            else if(strcmp(  pionNi[0][0],Gras rouge"X"end)==0 && strcmp(  pionNi[0][2],Gras rouge"X"end)==0 && strcmp(  pionNi[0][1]," ")==0)
              pionNi[0][1]=Gras rouge"X"end;                         

//dernier tour
    else if(strcmp(  pionNi[1][0]," ")==0)
          pionNi[1][0]=Gras rouge"X"end;
    else if(strcmp(  pionNi[0][1]," ")==0)
      pionNi[0][2]=Gras rouge"X"end;
    else if(strcmp(  pionNi[2][0]," ")==0)
      pionNi[2][0]=Gras rouge"X"end;
    else if(strcmp(  pionNi[2][2]," ")==0)
      pionNi[2][2]=Gras rouge"X"end;
    else if(strcmp(  pionNi[1][2]," ")==0 && strcmp(  pionNi[1][0]," ")!=0 && strcmp(  pionNi[1][1]," ")!=0)
      pionNi[1][2]=Gras rouge"X"end;
    else if(strcmp(  pionNi[2][1]," ")==0 && strcmp(  pionNi[2][2]," ")==0 && strcmp(  pionNi[2][0]," ")!=0)
      pionNi[2][1]=Gras rouge"X"end;
     else if(strcmp(  pionNi[2][1]," ")==0 && strcmp(  pionNi[2][0]," ")==0 && strcmp(  pionNi[2][0]," ")!=0)
      pionNi[2][1]=Gras rouge"X"end;  
     else if(strcmp(  pionNi[2][1]," ")!=0 && strcmp(  pionNi[2][2]," ")!=0 && strcmp(  pionNi[2][0]," ")==0)
      pionNi[2][0]=Gras rouge"X"end;     
//Troisieme tour
        else { 
        int choix=random()%3;
          pionNi[choix][random()%2]=Gras rouge"X"end;
        }
        
    
      joueur=0;
        }
        int t;
        t=victoireAINi();
        if(t==0){
            system("clear");
            printf("\n\n"whitebg jaune"FELICITATION %s ,VOUS AVEZ GAGNÉ LA PARTIE!!!"end"\n",nom1Ni);           
            QuadrillageNi();
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while(getchar()!='\n');     
            break;

        }else if(t==1){
            system("clear");
            printf("\n\n"whitebg jaune"%s ,L'ALGORITHME INTELLIGENT VOUS À BATTUE!!"end"\n",nom2Ni);           
            QuadrillageNi( );
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while(getchar()!='\n');           
            break;
        }
 	else if (estPleinNi()==1) {
            system("clear");
            printf("\n\n" whitebg green "MATCH NULL!!" end "\n");
            QuadrillageNi();
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while (getchar() != '\n');
            break;
 
        }
        
    }
    printf("\n\n"Gras blackbg"Termine!!"end"\n");
}

//Fonctions d'affichage et d'embellisement
void barre_chargementNi(){
  char chaineNi[400]= Gras bleu "Chargement en cours["end;
     for(int i=0;i<6;i++){
        if(i==5){
            strcat(chaineNi,Gras bleu"]"end );
        }else{
            strcat(chaineNi,whitebg"  "end" ");
        }

       printf(Gras rouge "\t\t\t"Blinklw" BIENVENUE "end"\n\n\n");
       printf("\n");
       printf("%s",chaineNi);
       printf("\n");
       sleep(1);
       system("clear");
        fflush(stdout);//Vider le tampon(permet l'affichage sur le terminale)
     }
     printf("\n");

}
void LogoNi(){
    printf(Gras whitebg"\t\t\t                                "end"\n");
    printf("\t\t\t\t"Gras purple"  TIC TAC TOE"end"\n");
    printf(Gras whitebg"\t\t\t                                "end"\n");
}
