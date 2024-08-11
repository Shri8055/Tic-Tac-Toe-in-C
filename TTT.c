#include<stdio.h>
void main(){
    int p1,p2,i,count=0;
    char spaceOcc[9]={'1','2','3','4','5','6','7','8','9'};
    printf("\n\n\t\t TIC-TAC-TOE\n");
    printf("\n\t        Game controls");
    printf("\n\n\n\t\t 1 | 2 | 3 \n\t\t---|---|---\n\t\t 4 | 5 | 6 \n\t\t---|---|---\n\t\t 7 | 8 | 9 \n\n\n");
    for(i=0;i<9 && count<9;i++){
        printf("\nPlayer 1 move: ");
        scanf("%d",&p1);
        if(spaceOcc[p1-1]!='X' && spaceOcc[p1-1]!='O'){
            spaceOcc[p1-1]=(i%2==0)?'X':'O';
            count++;
        }else{
            printf("Invalid move! Try again.\n");
            i--;
            continue;
        }
        printf("\n\t");
        for(int j=0;j<9;j++){
            printf(" %c ",spaceOcc[j]);
            if(j==2||j==5){
                printf("\n\t---|---|---\n\t");
            }else if(j < 8){
                printf("|");
            }
        }
        if((spaceOcc[0] == spaceOcc[1] && spaceOcc[1] == spaceOcc[2]) || 
           (spaceOcc[3] == spaceOcc[4] && spaceOcc[4] == spaceOcc[5]) || 
           (spaceOcc[6] == spaceOcc[7] && spaceOcc[7] == spaceOcc[8]) || 
           (spaceOcc[0] == spaceOcc[3] && spaceOcc[3] == spaceOcc[6]) || 
           (spaceOcc[1] == spaceOcc[4] && spaceOcc[4] == spaceOcc[7]) || 
           (spaceOcc[2] == spaceOcc[5] && spaceOcc[5] == spaceOcc[8]) || 
           (spaceOcc[0] == spaceOcc[4] && spaceOcc[4] == spaceOcc[8]) || 
           (spaceOcc[2] == spaceOcc[4] && spaceOcc[4] == spaceOcc[6])){
            printf("\nPlayer %d wins!\n",(i%2)+1);
            break;
        }
    }
    if(count==9){
        printf("\nIt's a draw!\n");
    }
}