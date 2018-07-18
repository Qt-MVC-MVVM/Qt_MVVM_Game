#include "swmodel.h"

SWModel::SWModel()
{
    sp_SWMatrix = std::make_shared<SWMatrix>();
}

std::shared_ptr<SWMatrix> SWModel::getSWMatrix(){
    return sp_SWMatrix;
}

void SWModel::newLayout(int level)
{
    lastRow = 0;
    lastCol = 0;
    if(level == 1){
        int row = 5;
        int col = 5;
        sp_SWMatrix->initialMatrix(row,col);

        sp_SWMatrix->setMatrixPointIsExist(1,1,0);
        sp_SWMatrix->setMatrixPointIsExist(1,5,0);
        sp_SWMatrix->setMatrixPointIsExist(1,1,0);
        sp_SWMatrix->setMatrixPointIsExist(5,1,0);
        sp_SWMatrix->setMatrixPointIsExist(5,5,0);

        for(int j=1;j<=col;j++){
            sp_SWMatrix->setMatrixPointColor(3,j,1);
        }
        sp_SWMatrix->setMatrixPointIsStart(3,1,1);
        Fire_OnPropertyChanged("SWMatrix");
    }
    if(level == 2){
        int row = 5;
        int col = 4;
        sp_SWMatrix->initialMatrix(row,col);
        for(int i=1;i<=row;i++){
            sp_SWMatrix->setMatrixPointColor(i,3,1);
        }
        for(int j=1;j<=col;j++){
            sp_SWMatrix->setMatrixPointColor(3,j,1);
        }
        sp_SWMatrix->setMatrixPointColor(3,3,0);
        sp_SWMatrix->setMatrixPointIsStart(1,3,1);
        sp_SWMatrix->setMatrixPointIsStart(3,4,1);
        Fire_OnPropertyChanged("SWMatrix");
    }
    if(level==3){
        int row = 5;
        int col = 4;
        sp_SWMatrix->initialMatrix(row,col);

        sp_SWMatrix->setMatrixPointIsExist(1,2,0);
        sp_SWMatrix->setMatrixPointIsExist(1,3,0);
        sp_SWMatrix->setMatrixPointIsExist(1,4,0);
        sp_SWMatrix->setMatrixPointIsExist(5,1,0);
        sp_SWMatrix->setMatrixPointIsExist(5,2,0);
        sp_SWMatrix->setMatrixPointIsExist(5,3,0);

        sp_SWMatrix->setMatrixPointColor(2,1,1);
        sp_SWMatrix->setMatrixPointColor(3,2,1);
        sp_SWMatrix->setMatrixPointColor(3,3,1);
        sp_SWMatrix->setMatrixPointColor(4,4,1);
        sp_SWMatrix->setMatrixPointIsStart(2,1,1);
        sp_SWMatrix->setMatrixPointIsStart(4,4,1);

        Fire_OnPropertyChanged("SWMatrix");
    }
    if(level==4){
        int row = 5;
        int col = 4;
        sp_SWMatrix->initialMatrix(row,col);
        for(int j=1;j<=col;j++){
            sp_SWMatrix->setMatrixPointColor(2,j,1);
            sp_SWMatrix->setMatrixPointColor(4,j,1);
        }
        sp_SWMatrix->setMatrixPointIsStart(5,1,1);
        sp_SWMatrix->setMatrixPointIsStart(5,4,1);

        Fire_OnPropertyChanged("SWMatrix");
    }
    if(level==5){
        int row = 6;
        int col = 5;
        sp_SWMatrix->initialMatrix(row,col);

        sp_SWMatrix->setMatrixPointColor(1,2,1);
        sp_SWMatrix->setMatrixPointColor(1,4,1);
        sp_SWMatrix->setMatrixPointColor(2,2,1);
        sp_SWMatrix->setMatrixPointColor(2,4,1);
        sp_SWMatrix->setMatrixPointColor(3,1,1);
        sp_SWMatrix->setMatrixPointColor(3,3,1);
        sp_SWMatrix->setMatrixPointColor(3,5,1);
        sp_SWMatrix->setMatrixPointColor(4,2,1);
        sp_SWMatrix->setMatrixPointColor(4,4,1);
        sp_SWMatrix->setMatrixPointColor(5,2,1);
        sp_SWMatrix->setMatrixPointColor(5,3,1);
        sp_SWMatrix->setMatrixPointColor(5,4,1);

        sp_SWMatrix->setMatrixPointIsStart(1,2,1);
        sp_SWMatrix->setMatrixPointIsStart(3,5,1);
        Fire_OnPropertyChanged("SWMatrix");
    }
    if(level==6){
        int row = 6;
        int col = 5;
        sp_SWMatrix->initialMatrix(row,col);

        sp_SWMatrix->setMatrixPointIsExist(1,1,0);
        sp_SWMatrix->setMatrixPointIsExist(1,5,0);

        sp_SWMatrix->setMatrixPointColor(1,2,1);
        sp_SWMatrix->setMatrixPointColor(2,1,1);
        sp_SWMatrix->setMatrixPointColor(2,3,1);
        sp_SWMatrix->setMatrixPointColor(2,4,1);
        sp_SWMatrix->setMatrixPointColor(3,2,1);
        sp_SWMatrix->setMatrixPointColor(3,4,1);
        sp_SWMatrix->setMatrixPointColor(4,2,1);
        sp_SWMatrix->setMatrixPointColor(4,4,1);
        sp_SWMatrix->setMatrixPointColor(5,2,1);
        sp_SWMatrix->setMatrixPointColor(5,3,1);
        sp_SWMatrix->setMatrixPointColor(5,5,1);
        sp_SWMatrix->setMatrixPointColor(6,4,1);

        sp_SWMatrix->setMatrixPointIsStart(1,2,1);
        sp_SWMatrix->setMatrixPointIsStart(6,4,1);
        Fire_OnPropertyChanged("SWMatrix");
    }
    if(level==7){
        int row = 6;
        int col = 5;
        sp_SWMatrix->initialMatrix(row,col);

        for(int i=2;i<=5;i++){
            sp_SWMatrix->setMatrixPointColor(i,1,1);
            sp_SWMatrix->setMatrixPointColor(i,2,1);
            sp_SWMatrix->setMatrixPointColor(i,4,1);
            sp_SWMatrix->setMatrixPointColor(i,5,1);
        }

        sp_SWMatrix->setMatrixPointIsStart(6,1,1);
        sp_SWMatrix->setMatrixPointIsStart(6,5,1);
        Fire_OnPropertyChanged("SWMatrix");
    }
    if(level==8){
        int row = 5;
        int col = 4;
        sp_SWMatrix->initialMatrix(row,col);

        sp_SWMatrix->setMatrixPointColor(1,1,1);
        sp_SWMatrix->setMatrixPointColor(2,1,1);
        sp_SWMatrix->setMatrixPointColor(4,1,1);
        sp_SWMatrix->setMatrixPointColor(5,1,1);
        sp_SWMatrix->setMatrixPointColor(1,3,1);
        sp_SWMatrix->setMatrixPointColor(5,3,1);

        sp_SWMatrix->setMatrixPointIsStart(1,2,1);
        sp_SWMatrix->setMatrixPointIsStart(3,4,1);
        sp_SWMatrix->setMatrixPointIsStart(5,2,1);

        Fire_OnPropertyChanged("SWMatrix");
    }
    if(level==9){
        int row = 6;
        int col = 5;
        sp_SWMatrix->initialMatrix(row,col);

        sp_SWMatrix->setMatrixPointIsExist(1,1,0);
        sp_SWMatrix->setMatrixPointIsExist(1,2,0);
        sp_SWMatrix->setMatrixPointIsExist(1,4,0);
        sp_SWMatrix->setMatrixPointIsExist(1,5,0);

        sp_SWMatrix->setMatrixPointColor(2,2,1);
        sp_SWMatrix->setMatrixPointColor(2,4,1);
        sp_SWMatrix->setMatrixPointColor(3,2,1);
        sp_SWMatrix->setMatrixPointColor(3,4,1);
        sp_SWMatrix->setMatrixPointColor(4,1,1);
        sp_SWMatrix->setMatrixPointColor(4,2,1);
        sp_SWMatrix->setMatrixPointColor(4,4,1);
        sp_SWMatrix->setMatrixPointColor(4,5,1);
        sp_SWMatrix->setMatrixPointColor(5,1,1);
        sp_SWMatrix->setMatrixPointColor(5,5,1);
        sp_SWMatrix->setMatrixPointColor(6,1,1);
        sp_SWMatrix->setMatrixPointColor(6,2,1);
        sp_SWMatrix->setMatrixPointColor(6,4,1);
        sp_SWMatrix->setMatrixPointColor(6,5,1);

        sp_SWMatrix->setMatrixPointIsStart(1,3,1);
        sp_SWMatrix->setMatrixPointIsStart(6,3,1);

        Fire_OnPropertyChanged("SWMatrix");
    }
    if(level==10){
        int row = 6;
        int col = 5;
        sp_SWMatrix->initialMatrix(row,col);

        sp_SWMatrix->setMatrixPointIsExist(1,4,0);
        sp_SWMatrix->setMatrixPointIsExist(1,5,0);
        sp_SWMatrix->setMatrixPointIsExist(2,4,0);
        sp_SWMatrix->setMatrixPointIsExist(2,5,0);
        sp_SWMatrix->setMatrixPointIsExist(5,1,0);
        sp_SWMatrix->setMatrixPointIsExist(5,2,0);
        sp_SWMatrix->setMatrixPointIsExist(6,1,0);
        sp_SWMatrix->setMatrixPointIsExist(6,2,0);

        sp_SWMatrix->setMatrixPointColor(1,1,1);
        sp_SWMatrix->setMatrixPointColor(2,1,1);
        sp_SWMatrix->setMatrixPointColor(2,2,1);
        sp_SWMatrix->setMatrixPointColor(3,2,1);
        sp_SWMatrix->setMatrixPointColor(4,4,1);
        sp_SWMatrix->setMatrixPointColor(5,4,1);
        sp_SWMatrix->setMatrixPointColor(5,5,1);
        sp_SWMatrix->setMatrixPointColor(6,5,1);


        sp_SWMatrix->setMatrixPointIsStart(1,1,1);
        sp_SWMatrix->setMatrixPointIsStart(1,1,1);

        Fire_OnPropertyChanged("SWMatrix");
    }

}

void SWModel::mouseMoveChange(int curRow, int curCol)
{

    int cur_IsStart = sp_SWMatrix->getMatrixPointIsStart(curRow,curCol);
    bool cur_IsMoveOn = sp_SWMatrix->getMatrixPointIsMoveOn(curRow,curCol);




    if(lastRow==0 && lastCol==0){
        if(cur_IsStart){
            lastRow = curRow;
            lastCol = curCol;
            sp_SWMatrix->setMatrixPointIsMoveOn(curRow,curCol,1);
        }
    }



    else if(curRow==lastRow && curCol==lastCol){
        int nrow = sp_SWMatrix->getMatrixRow();
        int ncol = sp_SWMatrix->getMatrixCol();
        bool curColor = sp_SWMatrix->getMatrixPointColor(curRow,curCol);
        bool flag = 0;
        for(int i=1; i<=nrow; i++){
            for(int j=1;j<=ncol;j++){
                if(i!=curRow || j!=curCol){
                    bool tempColor = sp_SWMatrix->getMatrixPointColor(i,j);
                    if(tempColor == curColor){
                        flag =1;
                        break;
                    }
                }
            }
            if(flag){
                break;
            }
        }
        if(!flag){
            if(curColor==0){
                sp_SWMatrix->setMatrixPointColor(curRow,curCol,1);
            }
            else{
                sp_SWMatrix->setMatrixPointColor(curRow,curCol,0);
            }
            sp_SWMatrix->setMatrixPointIsStart(lastRow,lastCol,0);

            Fire_OnPropertyChanged("GameComplete");
        }
    }







    else if(curRow!=lastRow || curCol!=lastCol){

        int delta_row = curRow - lastRow;
        int delta_col = curCol - lastCol;
        int lastIsStart = sp_SWMatrix->getMatrixPointIsStart(lastRow,lastCol);
        int curIsWall = sp_SWMatrix->getMatrixPointIsExist(curRow,curCol);

        if(!lastIsStart){
            //do nothing
        }


        else if(!curIsWall){
            sp_SWMatrix->setMatrixPointIsStart(lastRow,lastCol,0);
        }


        else if(!cur_IsMoveOn){


            if((delta_row==0 && delta_col==1)||(delta_row==0 && delta_col==-1)||(delta_row==-1 && delta_col==0)||(delta_row==1 && delta_col==0)){
                sp_SWMatrix->setMatrixPointIsStart(curRow,curCol,1);
                sp_SWMatrix->setMatrixPointIsStart(lastRow,lastCol,0);
                sp_SWMatrix->setMatrixPointIsMoveOn(curRow,curCol,1);
                if(sp_SWMatrix->getMatrixPointColor(lastRow,lastCol)==0){
                    sp_SWMatrix->setMatrixPointColor(lastRow,lastCol,1);
                }
                else{
                    sp_SWMatrix->setMatrixPointColor(lastRow,lastCol,0);
                }
                lastRow = curRow;
                lastCol = curCol;
            }




            else if(cur_IsStart){
                int nrow = sp_SWMatrix->getMatrixRow();
                int ncol = sp_SWMatrix->getMatrixCol();
                for(int i=1; i<=nrow; i++){
                    for(int j=1;j<=ncol;j++){
                        sp_SWMatrix->setMatrixPointIsMoveOn(i,j,0);
                    }
                }
            sp_SWMatrix->setMatrixPointIsMoveOn(3,3,0);
                sp_SWMatrix->setMatrixPointIsStart(lastRow,lastCol,0);
                sp_SWMatrix->setMatrixPointIsMoveOn(curRow,curCol,1);

                if(sp_SWMatrix->getMatrixPointColor(lastRow,lastCol)==0){
                    sp_SWMatrix->setMatrixPointColor(lastRow,lastCol,1);
                }
                else{
                    sp_SWMatrix->setMatrixPointColor(lastRow,lastCol,0);
                }
                lastRow = curRow;
                lastCol = curCol;
            }

        }
    }

    Fire_OnPropertyChanged("SWMatrix");
}
