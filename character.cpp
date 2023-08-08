// You must have some Name(Lets say Hasan), Your TASK is Print Your name on the Screen
// Character By Character. Write a Function for each Character of your Name. For Example If your
// Name is ALI(then you have to make three functions Print_A(int Scale, char pChar), Print_L(int
// Scale), Print_I(int Scale)) which will print the Specific Character depending upon the value of
// Scale-value with made up of pChar(symbol).
// ● Write a program which will print your Name again but first it will print a smaller version of your
// First letter into the middle of the screen then it will slowly slowly grow until it reaches to whole
// screen dimension. And then it will print the 2nd Character and then the third character. You have
// to Print atleast
// ● 3 characters of your name(for both the first Part).

#include<iostream>
#include<windows.h>
#include<conio.h>
#include<math.h>

using namespace std;


void gotoRowCol(int rpos, int cpos)
{
	int xpos=cpos, ypos = rpos;
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = cpos;
	scrn.Y = rpos;
	SetConsoleCursorPosition(hOuput, scrn);
}


void sleep(int m)
{
        for(int j=0;j<m*21000;j++)
        {

        }
}

void Horizontal(int row, int col, int s_row, char p_char, int s_time){
    for(int i=s_row; i<col ; i++){
        gotoRowCol(row, i);
        cout<<p_char;
        sleep(s_time);
    }
}

void Slope(int row, int col, int s_row, int s_col, char p_char, int s_time){
    int i=s_row, j=s_col;
    if(col>row){ j=j+(col-(row*(col/row)))/2;}
    else if(row>col){i=i+(row-(row*(row/col)))/2;}
    while( i<row && j<col){
        gotoRowCol(i, j);
        cout<<p_char;
        sleep(s_time);
        if(col>row){ i++; j = j + (col/row);}
        else if(row>col){i = i + (row/col); j++;}
        else{i++; j++;}
    }
}


void Vertical(int row, int col, int s_col, char p_char, int s_time){
    for(int i=s_col; i<row ; i++){
        gotoRowCol(i, col);
        cout<<p_char;
        sleep(s_time);
    }
}

void print_A(int row, int col, int s_col, int s_row, char p_char, int s_time){
    Vertical(row, s_col, s_col, p_char, s_time);
    Horizontal(s_row, col, s_row, p_char, s_time);
    Vertical(row, col, s_col, p_char, s_time);
    Horizontal((row-s_row)/2 + s_row, col, s_row, p_char, s_time);

}

void print_F(int row, int col, int s_col, int s_row, char p_char, int s_time){
    Vertical(row, s_col, s_col, p_char, s_time);
    Horizontal(s_row, col, s_row, p_char, s_time);
    Horizontal((row-s_row)/2 + s_row, col, s_row, p_char, s_time);

}

void print_T(int row, int col, int s_col, int s_row, char p_char, int s_time){
    Horizontal(s_row, col, s_row, p_char, s_time);
    Vertical(row, (col-s_col)/2 + s_col - 1, s_col, p_char, s_time);
}

void print_N(int row, int col, int s_col, int s_row, char p_char, int s_time){
    Vertical(row, s_col, s_col, p_char, s_time);
    Slope(row, col, s_row, s_col, p_char, s_time);
    Vertical(row, col, s_col, p_char, s_time);

}

int main()
{
    int row = 15;
    int col = 15;
    int s_col =0, s_row = 0, s_time=1200;
    char c = '*';

    print_A(row, col, s_col, s_row, c, s_time);
    print_A(row, col, s_col, s_row, ' ', s_time);
    print_N(row, col, s_col, s_row, c, s_time);
    print_N(row, col, s_col, s_row, ' ', s_time);
    print_A(row, col, s_col, s_row, c, s_time);
    print_A(row, col, s_col, s_row, ' ', s_time);

    int n_row = (row / 2) + 1;
    int n_col = (col / 2) + 2;
    s_col = n_row - 2;
    s_row = n_row - 2;
    s_time = 0;
    while(n_row<row && n_col<col){
        print_A(n_row, n_col, s_col, s_row, c, s_time);
        sleep(2000);
        print_A(n_row, n_col, s_col, s_row, ' ', s_time);

        if(n_row<row){n_row ++;  s_row--;}
        if(n_col<col){n_col++; s_col--;}

        // n_row ++, n_col++, s_col--; s_row--;
    }

    n_row = (row / 2) + 1;
    n_col = (col / 2) + 2;
    s_col = n_row - 2;
    s_row = n_row - 2;
    s_time = 0;
    sleep(2000);
    while(n_row<row && n_col<col){
        print_N(n_row, n_col, s_col, s_row, c, s_time);
        sleep(2000);
        print_N(n_row, n_col, s_col, s_row, ' ', s_time);

        if(n_row<row){n_row ++;  s_row--;}
        if(n_col<col){n_col++; s_col--;}
    }

    n_row = (row / 2) + 1;
    n_col = (col / 2) + 2;
    s_col = n_row - 2;
    s_row = n_row - 2;
    s_time = 0;
    sleep(2000);
    while(n_row<row && n_col<col){
        print_A(n_row, n_col, s_col, s_row, c, s_time);
        sleep(2000);
        print_A(n_row, n_col, s_col, s_row, ' ', s_time);

        if(n_row<row){n_row ++;  s_row--;}
        if(n_col<col){n_col++; s_col--;}
    }

    s_col =0, s_row = 0, s_time=1200;
    c = '*';
    print_F(row, col, s_col, s_row, c, s_time);
    print_F(row, col, s_col, s_row, ' ', s_time);
    print_A(row, col, s_col, s_row, c, s_time);
    print_A(row, col, s_col, s_row, ' ', s_time);
    print_T(row, col, s_col, s_row, c, s_time);
    print_T(row, col, s_col, s_row, ' ', s_time);

    n_row = (row / 2) + 1;
    n_col = (col / 2) + 2;
    s_col = n_row - 2;
    s_row = n_row - 2;
    s_time = 0;
    while(n_row<row && n_col<col){
        print_F(n_row, n_col, s_col, s_row, c, s_time);
        sleep(2000);
        print_F(n_row, n_col, s_col, s_row, ' ', s_time);

        if(n_row<row){n_row ++;  s_row--;}
        if(n_col<col){n_col++; s_col--;}

        // n_row ++, n_col++, s_col--; s_row--;
    }

    n_row = (row / 2) + 1;
    n_col = (col / 2) + 2;
    s_col = n_row - 2;
    s_row = n_row - 2;
    s_time = 0;
    sleep(2000);
    while(n_row<row && n_col<col){
        print_A(n_row, n_col, s_col, s_row, c, s_time);
        sleep(2000);
        print_A(n_row, n_col, s_col, s_row, ' ', s_time);

        if(n_row<row){n_row ++;  s_row--;}
        if(n_col<col){n_col++; s_col--;}
    }

    n_row = (row / 2) + 1;
    n_col = (col / 2) + 2;
    s_col = n_row - 2;
    s_row = n_row - 2;
    s_time = 0;
    sleep(2000);
    while(n_row<row && n_col<col){
        print_T(n_row, n_col, s_col, s_row, c, s_time);
        sleep(2000);
        print_T(n_row, n_col, s_col, s_row, ' ', s_time);

        if(n_row<row){n_row ++;  s_row--;}
        if(n_col<col){n_col++; s_col--;}
    }
    return 0;
}