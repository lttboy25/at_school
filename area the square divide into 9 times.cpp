/*Team A doesn't prepare for the group exercise so the teacher punishes by filling the board size 1mx1m  with 10 different colors, 
each color belongs to a square or a rectangle. After discussing, the team decided to then
Divide the square becomes two squares that have equal areas, fill the first color on the first square, 
go on divide the second square into two equal squares, fill the second color in half, and repeat the 
progress with the remaining colors. After 9 times filling color getting 9 different colors, the remained 
part has white color and does not fill color. what is the area of the white part?
Write a program to display on the screen the area of the white part
*/
//Code
#include <stdio.h>

int main() {
    int i;
// area square before divide
    double square_before =1.0,square_after=0.0;

// loop i to 1 to 9 becase the square divide into 9 times
for (i=1;i<=9;i++) {
        square_before -= square_before-square_before/2.0; //
        square_after = square_before;
    }
// print in display
    printf("%lf",square_after);
    return 0;
}
