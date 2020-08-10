# include "iGraphics.h"
#include<math.h>
#include<string.h>

double ball_x = 250, ball_y = 150 , ball_z = 152, x = -99, y = 270 , p =10 , a = 25, f = 13, i = 0;
double dx = 1, dy = 1 , sum = -89 ,c=5;
int all  , n = 0 ,m = 0 , z = 0,j=0,phase = 0 ;
double n1,n2,n3,n4,n5,n6,n7,n8,n9,n10 ;

void eqn(void)
{
    char s[] = "       ( n1 * (x^n2) + n3 )^n4 " ;
    printf("%s\n",s);

    int i = 0 ;

    printf("y  =  [ ");
    for(i = 0 ; i < 25 ; i++)
    {
        printf("_");
    }
    printf(" ]^n9  +  n10 ");
    printf("\n\n");
    char c[] = "       ( n5 * (x^n6) + n7 )^n8 " ;
    printf("%s\n",c);



    printf("Enter n1(double) : ");
    scanf("%lf",&n1);
    printf("\n\nEnter n2(double) : ");
    scanf("%lf",&n2);
    printf("\n\nEnter n3(double) : ");
    scanf("%lf",&n3);
    printf("\n\nEnter n4(double) : ");
    scanf("%lf",&n4);
    printf("\n\nEnter n5(double) : ");
    scanf("%lf",&n5);
    printf("\n\nEnter n6(double) : ");
    scanf("%lf",&n6);
    printf("\n\nEnter n7(double) : ");
    scanf("%lf",&n7);
    printf("\n\nEnter n8(double) : ");
    scanf("%lf",&n8);
    printf("\n\nEnter n9(double) : ");
    scanf("%lf",&n9);
    printf("\n\nEnter n10(double) : ");
    scanf("%lf",&n10);
}





void ploteqn(void)
{

   double z ;
   for(i=-360 ; i < 360 ; i+=0.001)
    {

        z = pow(( pow(( n3 * pow(i,n1) + n2) , n4 ) ) / ( pow(( n5 * pow(i,n6) + n7) , n8 ) )  ,n9);
        y = z*360;
        iPoint(600+i,350+y,0);


    }
}



void tanzent(void)
{
    for(i = -89 ; i <=89  ; i+=0.00001){

        y = 270+ f*3 * tan(i);
        i += 0.001;
        iPoint(95+i*a*3,y,0);

    }
}


void cotanzent(void)
{
    for(i = -89 ; i <=1340  ; i+=0.00001)
    {
        y = 270+ f*(cos(i/7)/sin(i/7));
        i += 0.001 ;
        iPoint(i*a,y,0);

    }
}


void sine(void)
{

    for(i = -360 ; i <=1340  ; i+=0.01){

        y = 270 + a*sin(i + phase*.09);

        iPoint(5+i*f,y,0);
    }
}


void cosine(void)
{

    for(i = 0 ; i <=1208  ; i+=0.01){
        y = 270 + a*cos(i + phase/15);
        iPoint(5+i*f,y,0);
    }
}




void secant(void)
{
    for(i = 0 ; i <=1340 && i != 90  ; i+=0.001){

        y = 270+ a*(1/cos(i));
        iPoint(i*f,y,0);
    }
}


void cosecant(void)
{
    for(i = 1 ; i <=1340  ; i+=0.001){

        y =  270 + a*(1/sin(i*0.05));
        iPoint(i,y,0);
    }
}


void parrabolla(void)
{
    y = 270 ;
    for(i = 0 ; i <=1340  ; i+=0.01){

        y = sqrt(4 * a * i);
        x = i ;
        iPoint(i+40,300+y,0);
        iPoint(i+40,300-y,0);
    }
}

void parrabolla2(void)
{
    y = 270 ;
    for(i = 0 ; i <=1340  ; i+=0.01){

        y = (i*i)/(7*a);
        x = i ;
        iPoint(i+520,250+y,0);

        iPoint(520-i,250+y,0);
    }
}

void rot_hyp(void)
{
    for(i = 1 ; i <=1355  ; i+=0.01){

        y = 20*a*(1/i);
        iPoint(i+550,282+y,0);
        iPoint(520-i,260-y,0);
    }
}

void e_x(void)
{
    for(i = -360 ; i <=1353  ; i+= 1){

        y = 1.5*pow(2.718281,i*.01) + 300;
        iPoint(i+150,y,0);
        //iPoint(520-i,260-y,0);
    }
}

void a_x(void)
{
    for(i = -90 ; i <=1353; i+=0.1){
        y = 1.5*pow((2.718281),i*.01)+300;
        iPoint(i+360,y,0);
    }
}

void hyp(void)
{
    for(i =1 ; i <=1355  ; i+=0.1){

        y = (f*3/a)*(sqrt(i*i - a*a));
        iPoint(i+520,300+y,0);
        iPoint(520-i,300-y,0);
        iPoint(520-i,300+y,0);
        iPoint(520+i,300-y,0);
    }
}



void iDraw()
{

    switch(all)
    {
        case 1 :iClear();
                iSetColor(0,0,255);
                sine();
                iSetColor(20,150,24);
                iRectangle(0,270,1152,1);
                iRectangle(5,70,1,640);
                break;


        case 3 :iClear();
                iSetColor(0,255,0);
                tanzent();
                iSetColor(120,25,170);
                iRectangle(0,270,1152,1);
                iRectangle(571,70,1,640);
                break ;
        case 4 :iClear();
                iSetColor(255,0,0);
                iRectangle(0,270,1152,1);
                iRectangle(550,70,1,640);
                iSetColor(0,0,255);
                cotanzent();
                break;
        case 5 :iClear();
                iSetColor(2,120,70);
                iRectangle(0,270,1152,1);
                iRectangle(571,70,1,640);
                iSetColor(40,120,220);
                secant();
                break;
        case 6 :iClear();
                iSetColor(22,10,170);
                cosecant();
                iSetColor(200,200,200);
                iRectangle(0,270,1152,1);
                iRectangle(626.5,70,1,640);
                break;
        case 7: iClear();
                iSetColor(70,40,120);
                iRectangle(0,300,1152,1);
                iRectangle(39,70,1,640);
                iSetColor(170,170,170);
                parrabolla();
                break;
        case 8:iClear();
                iSetColor(120,40,170);
                iRectangle(0,247,1152,1);
                iRectangle(520,70,1,640);
                iSetColor(140,220,140);
                parrabolla2();
                break;

        case 10 :iClear();
                 iSetColor(120,70,120);
                 iRectangle(0,270,1152,1);
                 iRectangle(5,70,1,640);
                 iSetColor(40,140,140);
                 cosine();
                 break;
        case 11:iClear();
                iSetColor(255,14,54);
                rot_hyp();
                iSetColor(140,140,230);
                iRectangle(0,270,1152,1);
                iRectangle(535,70,1,640);
                iText(150,500,"ROTATED HYPERBOLLA");
                break;
        case 12 :iClear();
                iSetColor(10,165,182);
                eqn();
                ploteqn();
                break;
        case 13:iClear();
                iSetColor(251,254,255);
                hyp();
                iRectangle(0,300,1152,1);
                iRectangle(520,70,1,640);
                break;
        case 14:iClear();
                iSetColor(251,254,255);
                e_x();

                iRectangle(0,300,1152,1);
                iRectangle(520,70,1,640);
                break;
        case 15 :iClear();
                iSetColor(251,254,255);
                a_x();
                iRectangle(0,300,1152,1);
                iRectangle(520,70,1,640);
                break;

    }




    iSetColor(0,255,0);
    iRectangle(1150,150,1,650);
    iText(1180,630,"press  ->  eqn");
    iText(1160,600,"1. t  -> y = tan(x)");
    iText(1160,570,"2. c  -> y = cot(x)");
    iText(1160,540,"3. s  -> y = sin(x)");
    iText(1160,510,"4. x  -> y = cosec(x)");
    iText(1160,480,"5. e  -> y = sec(x)");
    iText(1160,450,"6. m  -> x  = 4ay");
    iText(1240,460,"2");
    iText(1160,420,"7. k  -> y  = 4ax");
    iText(1240,430,"2");
    iText(1160,390,"8. o  -> y = cos(x)");
    iText(1160,360,"9. R  -> xy = 1");
    iText(1160,333,"          2    2 ");
    iText(1160,330,"10. h -> x    y");
    iText(1160,327,"         __ _ __  = 1");
    iText(1160,319,"          2     2");
    iText(1160,317,"         a     b");
    iText(1160,285,"              x");
    iText(1160,283,"11. E -> y = e");
    iText(1160,255,"              x");
    iText(1160,253,"12. a -> y = a");
    iText(1160,223,"13. z  -> Input an eqn!");


    iSetColor(125,152,125);
    iFilledRectangle(500+z,100,7,13);
    iFilledRectangle(500,107,350,1);

    iFilledRectangle(920+m,100,7,13);
    iFilledRectangle(920,107,360,1);

    iFilledRectangle(50+n,100,7,13);
    iFilledRectangle(50,107,350,1);





    while(j <= 350)
    {
        iFilledRectangle(50+j,105,1,4);
        j += 35 ;
    }

    iText(50,92,"0");
    iText(50+35,92,"1");
    iText(50+70,92,"2");
    iText(50+105,92,"3");
    iText(50+140,92,"4");
    iText(50+175,92,"5");
    iText(50+210,92,"6");
    iText(50+245,92,"7");
    iText(50+280,92,"8");
    iText(50+315,92,"9");
    iText(50+350,92,"10");
    iText(50+125,60,"CHANGE FREQUENCY !") ;


    j = 0 ;
    while(j <= 350)
    {
        iFilledRectangle(500+j,105,1,4);
        j += 25 ;
    }

    iText(500,92,"1");

    iText(500+45,92,"50");

    iText(500+95,92,"100");

    iText(500+145,92,"150");

    iText(500+195,92,"200");

    iText(500+245,92,"250");

    iText(500+295,92,"300");

    iText(500+345,92,"350");

    iText(500+125,60,"CHANGE AMPLITUDE !");

    j = 0 ;
    while(j <= 360)
    {
        iFilledRectangle(920+j,105,1,4);
        j += 30 ;
    }

    iText(920,92,"0");
    iText(920+25,92,"30");
    iText(920+55,92,"60");
    iText(920+85,92,"90");
    iText(920+115,92,"120");

    iText(920+175,92,"180");

    iText(920+235,92,"240");
    iText(920+295,92,"300");

    iText(920+355,92,"360");


    iText(920+125,60,"CHANGE PHASE !");


}


void iMouseMove(int mx, int my)
{

	if(mx <= 850 && mx>= 500 && my <= 115){
            z = mx % 500;
            a = z % 351 ;
	}
    if(mx >=920 && mx <= 1280 && my <= 115){
            m = mx%920;
            phase = m % 89 ;
    }
    if(mx >=50 && mx <= 400 && my <= 115 )
    {
        n = mx-50 ;

        if(mx <= 55)f = 12 ;
        else if(mx <= 90 && mx>55)f = 11 ;
        else if(mx<=125 && mx >90)f=9;
        else if(mx<=160 && mx > 125)f=8;
        else if(mx <= 195 && mx > 160)f = 7 ;
        else if(mx <= 230 && mx > 195)f = 6 ;
        else if(mx <= 265 && mx > 230)f = 5 ;
        else if(mx <= 295 && mx > 265)f = 4 ;
        else if(mx <= 330 && mx > 295)f = 3 ;
        else if(mx <= 360 && mx > 330 )f = 1 ;
    }

}


void iMouse(int button, int state, int mx, int my)
{
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{

    if(key == 't')
    {
        all = 3 ;
    }
    if(key == 'c')
    {
        all = 4 ;
    }
    if(key == 's')
    {
        all = 1 ;
    }
    if(key == 'e')
    {
        all = 5 ;
    }
    if(key == 'x')
    {
        all = 6 ;
    }

    if(key == 'k')
    {
        all = 7 ;
    }
    if(key == 'm')
    {
        all = 8;
    }

    if(key == 'f')
    {
        phase = 1 ;
    }
    if(key == 'F')
    {
        phase = 0 ;
    }
    if(key == 'o')
    {
        all = 10 ;
    }
    if(key == 'R')
    {
        all = 11 ;
    }
    if(key == 'z')
    {
        all = 12 ;
    }
    if(key == 'h')
    {
        all = 13 ;
    }
    if(key == 'E')
    {
        all = 14 ;
    }
    if(key == 'a')
    {
        all = 15 ;
    }


}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

    if(key == GLUT_KEY_END)
    {
        exit(0);
    }

}

void ballChange()
{

}

int main()
{

    iInitialize(1350,650, "Ball Demo");

    return 0;
}

