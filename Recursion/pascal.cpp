//pascal.cpp

#include <iostream>

//a triangle
//with 1s down the sides
//each row is made up of outside numbers that are 1s
//inside numbers are the sum of the 2 numbers abov

int pascal(int row, int col){

    //if its on the outside edge, return 1
    //base case
    if(col == 1 or col == row) {
        return 1;
    } else {
        return (pascal(row - 1, col - 1) + pascal(row - 1, col));
    }
    
    return 1;
}

void drawTri(int rows){
    //row
    for (int i = 1; i < rows; i++) {

        //leading spaces
        for (int l = 0; l < (rows - i) / 2; l++) std::cout << "\t";

            // column
            for (int j = 1; j <= i; j++) {

                //odd spaces
                if (i % 2 == 1) std::cout << "    ";

                //row, col num
                std::cout << pascal(i, j) << "\t";  // indent
            }
        std::cout << std::endl;
     }
 }

 void invertDrawTri(int rows){
    //remove the first line
    for (int i = rows - 2; i >= 0; i--) {

        //leading spaces
        for (int l = 0; l < (rows - i) / 2; l++) std::cout << "\t";

            // column
            for (int j = 1; j <= i; j++) {

                //odd spaces
                if (i % 2 == 1) std::cout << "    ";

                //row, col num
                std::cout << pascal(i, j) << "\t";  // indent
            }
        std::cout << std::endl;
     }
 }

int main(){
    drawTri(14);
    invertDrawTri(14);
    drawTri(14);
    invertDrawTri(14);

    drawTri(12);
    invertDrawTri(12);
    drawTri(10);
    invertDrawTri(10);
    drawTri(8);
    invertDrawTri(8);
    drawTri(6);
    invertDrawTri(6);
    drawTri(4);
    invertDrawTri(4);
    return 0;
}
