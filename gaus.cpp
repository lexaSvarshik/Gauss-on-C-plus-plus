#include <iostream>
#include "math.h"
#include "random"

using namespace std;

 /*double _null (double a31,a21)
{
    double a_out, koef_null;
    koef_null = a31/a21;
    a_out =
}*/

int main()
{
    //in
    int razm;
    cout << "RAZMERNOST' : ";
    cin >> razm;
    //define variables
    double matrix[razm][razm];
    double vecter[razm];
    double vecter_done[razm];
    //matrix in
    bool rand_or_direct=0;
    cout << "RANDOM ILI VRUCHNUYI 1/0: ";
    cin >> rand_or_direct;
    if (rand_or_direct){
         for (int i = 0; i <razm; i++)
            {
             //for vecter
             vecter[i]=rand()%10;
             vecter_done[i]=0;
                          //for matrix
             for (int j = 0; j <razm; j++)
                 {
                 matrix[i][j] = rand() % 10;
                 cout << matrix[i][j] << " ";
                 }
             cout << endl;
            }
        }

    else{

    }
    //nulling matrix. triрle cyclus here
    int str=0, col=0;
cout<<endl<<"----------------DEBUG-----------------"<<endl<<endl<< "razmernostb= "<<razm<<endl<<endl;
for (int i=0;i<razm-2;i++){
    for (col=0;col<razm-i;col++) {
            cout<<endl<<"TURN: "<<col+1<<endl;
            for (str=razm-1;str>0+col;str--) {

                cout<<endl<< "str= "<<str+1<<" col= "<<col+1<< " matrix= "<<matrix[str][col]<<endl;

                if (matrix[str][col]!=0){

                if (matrix[str-1][col]!=0){
                    double koef_null = matrix[str][col]/matrix[str-1][col];

                                    cout<<"nulling koef- "<<koef_null<<endl<<endl;

                //nulling all string. here all right
                cout<<"nulling string: "<<endl;
                    for (int col_counter=col;col_counter<razm;col_counter++){
                        matrix[str][col_counter]=matrix[str][col_counter] - (matrix[str-1][col_counter]*koef_null);
                        cout<<endl<<"Matrix after: str= "<<str+1<<" col= "<<col_counter+1<< " matrix= "<<matrix[str][col_counter]<<endl;
                    }
                }
                //if we cant count koef, then do it
                else {
                    cout<<"nulling string: "<<endl;
                        matrix[str][col]=0;
                        cout<<endl<<"Matrix after: str= "<<str+1<<" col= "<<col+1<< " matrix= "<<matrix[str][col]<<endl;
                                    }

                cout<<endl<<"--------------"<<endl;
                }
            }

    cout<<endl<<endl<< "MATRIX AFTER TURN "<<col+1<< ": "<<endl;
    for (int ii = 0; ii <razm; ii++){
            {
             for (int jj = 0; jj <razm; jj++)
                 {
                 cout << matrix[ii][jj] << " ";
                 }
             cout << endl;
            }
        }
     cout<< "====================="<<endl;
    }
}


//Вывод
cout << endl<<endl<< "---------------DEBUG----------------" <<endl<<endl<< "Out: "<<endl;
/*for (int i = 0; i <razm; i++){ //Округляем 3аодним
            {
             for (int j = 0; j <razm; j++)
                 {
                 matrix[i][j]=round(matrix[i][j]);
                 cout << matrix[i][j] << " ";
                 }
             cout << "       "<< vecter[i]<< endl;
            }
        }
*/
//Округление
for (int i = 0; i <razm; i++){ //Округляем 3аодним
            {
             for (int j = 0; j <razm; j++)
                 {
                 matrix[i][j]=round(matrix[i][j]);
                 cout << matrix[i][j] << " ";
                 }
            cout << "       "<< vecter[i]<< "      "<< vecter_done[i] << endl;
            }
        }
        //MATRIX DONE HERE. AFTER GOING CLEAN MATH, SEARCHING X's
double vecter_sum=0;
for (int v_c=razm;v_c>0;v_c--) {
    cout<<endl<< "TURN: "<<v_c<<endl;
    int t_numb=0;
     for(int t=razm-1;t>=0;t--){
            cout<<endl<< "t= " <<t<< " v_c= " <<v_c<< " matrix: " <<matrix[v_c-1][t]<< "  vecter: "<<vecter[t]<< "   vecter-sum: "<<vecter_sum<<endl;
            vecter_sum= vecter_sum + vecter[t]*matrix[v_c-1][t];
            cout<< " vecter-taken= "<<vecter[t]<< " matrix is: "<< matrix[v_c-1][t]<< " vecter-sum after= "<<vecter_sum <<endl;
            t_numb++;
    }
    vecter_done[v_c-1]=vecter_sum;
    vecter_sum=0;
    t_numb=0;
    cout<<endl<< "vecter-done is: "<< vecter_done[v_c]<<endl<< "-=-=-=-=--=-=-=-=--=-=-=--=-"<<endl;
    //OUT-------------------------
    cout<< " MATRIX AFTER TURN "<<v_c<<endl;
    for (int i = 0; i <razm; i++){ //Округляем 3аодним
            {
             for (int j = 0; j <razm; j++)
                 {
                 cout << matrix[i][j] << " ";
                 }
             cout << "       "<< vecter[i]<< "      "<< vecter_done[i] << endl;
            }
        }
    cout<<endl <<"-=-=-=-=--=-=-=-=--=-=-=--=-"<<endl;

}
//out
cout<<endl<<endl<< "MATRIX DONE: "<<endl;
for (int i = 0; i <razm; i++){ //Округляем 3аодним
            {
             for (int j = 0; j <razm; j++)
                 {
                 matrix[i][j]=round(matrix[i][j]);
                 cout << matrix[i][j] << " ";
                 }
             cout << "       "<< vecter[i]<< "      "<< vecter_done[i] << endl;
            }
        }

//end
}
