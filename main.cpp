#include <graphics.h>
#include <stdio.h>
#include <windows.h>
#include <cstdlib>

int main()
{
    initwindow(900, 700, "");

    int midlineX = 430;
    int midlineY1[1000] = {600, 500, 400, 300, 200, 100, 0, -100, -200, -300, -400, -500, -600, -700, -800, -900,
                          -1000, -1100, -1200, -1300, -1400, -1500, -1600, -1700, -1800, -1900, -2000, - 2100,
                          -2200, -2300, -2400, -2500, -2600, -2700, -2800, -2900, -3000, -3100, -3200, -3300,
                          -3400, -3500, -3600, -3700, -3800, -3900, -4000, -4100, -4200, -4300, -4400, -4500,
                          -4600, -4700, -4800, -4900, -5000, -5100, -5200, -5300, -5400, -5500, -5600, -5700,
                          -5800, -5900, -6000, -6100, -6200, -6300, -6400, -6500, -6600, -6700, -6800, -6900,
                          -7000, -7100, -7200, -7300, -7400, -7500, -7600, -7700, -7800, -7900, -8000, -8100,
                          -8200, -8300, -8400, -8500, -8600, -8700, -8800, -8900, -9000, -9100, -9200, -9300,
                          -9400, -9500, -9600, -9700, -9800, -9900, -10000};
    int midlineY2[1000] = {650, 550, 450, 350, 250, 150, 50, -50, -150, -250, -350, -450, -550, -650, -750, -850,
                          -950, -1050, -1150, -1250, -1350, -1450, -1550, -1650, -1750, -1850, -1950, -2050, -2150,
                          -2250, -2350, -2450, -2550, -2650, -2750, -2850, -2950, -3050, -3150, -3250, -3350, -3450,
                          -3550, -3650, -3750, -3850, -3950, -4050, -4150, -4250, -4350, -4450, -4550, -4650,
                          -4750, -4850, -4950, -5050, -5150, -5250, -5350, -5450, -5550, -5650, -5750, -5850, -5950,
                          -6050, -6150, -6250, -6350, -6450, -6550, -6650, -6750, -6850, -6950, -7050, -7150, -7250,
                          -7350, -7450, -7550, -7650, -7750, -7850, -7950, -8050, -8150, -8250, -8350, -8450, -8550,
                          -8650, -8750, -8850, -8950, -9050, -9150, -9250, -9350, -9450, -9550, -9650, -9750, -9850,
                          -9950};
    int borderlineX1 = 335, borderlineX2 = 515;
    int speed = 4, leftobcspeed = 7, rightobcspeed = 7, leftobcdefspeed = 1, rightobcdefspeed = 1, changeside = 100;
    int roadX1 = 330, roadX2 = 520, roadY1 = 0, roadY2 = 687;
    int finishlineY1 = -9400, finishlineY2 = -9470;
    int carheadX1 = 361, carheadY1 = 608, carheadX2 = 394, carheadY2 = 619;
    int carbodyX1 = 355, carbodyY1 = 620, carbodyX2 = 400, carbodyY2 = 677;
    double mapY1 = 200.00, mapY2 = 502.24;
    int page = 0;
    int obc1headX1 = 361, obc1headY1 = -1187, obc1headX2 = 394, obc1headY2 = -1176;
    int obc1bodyX1 = 355, obc1bodyY1 = -1177, obc1bodyX2 = 400, obc1bodyY2 = -1120;
    int obc2headX1 = 461, obc2headY1 = -1408, obc2headX2 = 494, obc2headY2 = -1419;
    int obc2bodyX1 = 455, obc2bodyY1 = -1420, obc2bodyX2 = 500, obc2bodyY2 = -1477;
    int obc3headX1 = 361, obc3headY1 = -1787, obc3headX2 = 394, obc3headY2 = -1776;
    int obc3bodyX1 = 355, obc3bodyY1 = -1777, obc3bodyX2 = 400, obc3bodyY2 = -1720;
    int obc4headX1 = 361, obc4headY1 = -1987, obc4headX2 = 394, obc4headY2 = -1976;
    int obc4bodyX1 = 355, obc4bodyY1 = -1977, obc4bodyX2 = 400, obc4bodyY2 = -1920;
    int obc5headX1 = 461, obc5headY1 = -2108, obc5headX2 = 494, obc5headY2 = -2119;
    int obc5bodyX1 = 455, obc5bodyY1 = -2120, obc5bodyX2 = 500, obc5bodyY2 = -2177;
    int obc6headX1 = 461, obc6headY1 = -3708, obc6headX2 = 494, obc6headY2 = -3719;
    int obc6bodyX1 = 455, obc6bodyY1 = -3720, obc6bodyX2 = 500, obc6bodyY2 = -3777;
    int obc7headX1 = 361, obc7headY1 = -3087, obc7headX2 = 394, obc7headY2 = -3076;
    int obc7bodyX1 = 355, obc7bodyY1 = -3077, obc7bodyX2 = 400, obc7bodyY2 = -3020;
    int obc8headX1 = 461, obc8headY1 = -4808, obc8headX2 = 494, obc8headY2 = -4819;
    int obc8bodyX1 = 455, obc8bodyY1 = -4820, obc8bodyX2 = 500, obc8bodyY2 = -4877;
    int obc9headX1 = 361, obc9headY1 = -3787, obc9headX2 = 394, obc9headY2 = -3776;
    int obc9bodyX1 = 355, obc9bodyY1 = -3777, obc9bodyX2 = 400, obc9bodyY2 = -3720;
    int obc10headX1 = 461, obc10headY1 = -5808, obc10headX2 = 494, obc10headY2 = -5819;
    int obc10bodyX1 = 455, obc10bodyY1 = -5820, obc10bodyX2 = 500, obc10bodyY2 = -5877;
    int obc11headX1 = 461, obc11headY1 = -6108, obc11headX2 = 494, obc11headY2 = -6119;
    int obc11bodyX1 = 455, obc11bodyY1 = -6120, obc11bodyX2 = 500, obc11bodyY2 = -6177;
    int obc12headX1 = 361, obc12headY1 = -4687, obc12headX2 = 394, obc12headY2 = -4676;
    int obc12bodyX1 = 355, obc12bodyY1 = -4677, obc12bodyX2 = 400, obc12bodyY2 = -4620;
    int obc13headX1 = 461, obc13headY1 = -6808, obc13headX2 = 494, obc13headY2 = -6819;
    int obc13bodyX1 = 455, obc13bodyY1 = -6820, obc13bodyX2 = 500, obc13bodyY2 = -6877;
    int obc14headX1 = 361, obc14headY1 = -5287, obc14headX2 = 394, obc14headY2 = -5276;
    int obc14bodyX1 = 355, obc14bodyY1 = -5277, obc14bodyX2 = 400, obc14bodyY2 = -5220;
    int obc15headX1 = 461, obc15headY1 = -7508, obc15headX2 = 494, obc15headY2 = -7519;
    int obc15bodyX1 = 455, obc15bodyY1 = -7520, obc15bodyX2 = 500, obc15bodyY2 = -7577;
    int obc16headX1 = 461, obc16headY1 = -7908, obc16headX2 = 494, obc16headY2 = -7919;
    int obc16bodyX1 = 455, obc16bodyY1 = -7920, obc16bodyX2 = 500, obc16bodyY2 = -7977;
    int obc17headX1 = 361, obc17headY1 = -6287, obc17headX2 = 394, obc17headY2 = -6276;
    int obc17bodyX1 = 355, obc17bodyY1 = -6277, obc17bodyX2 = 400, obc17bodyY2 = -6220;
    int obc18headX1 = 461, obc18headY1 = -8908, obc18headX2 = 494, obc18headY2 = -8919;
    int obc18bodyX1 = 455, obc18bodyY1 = -8920, obc18bodyX2 = 500, obc18bodyY2 = -8977;
    int midX = getmaxx() / 2;
    int midY = getmaxy() / 2;
    int width = textwidth("GAME OVER!");
    int height = textheight("GAME OVER!");

    while(1)
    {
        setactivepage(page);
        setvisualpage(1 - page);

        cleardevice();

        //Road
        setfillstyle(SOLID_FILL, DARKGRAY);
        bar(roadX1, roadY1, roadX2, roadY2);

        //Road Side lines
        for(int i = 0; i <= 4; i++)
        {
            setcolor(YELLOW);
            line(borderlineX1+i, roadY1, borderlineX1+i, roadY2);
            line(borderlineX2-i, roadY1, borderlineX2-i, roadY2);
        }

        //Road Middle Lines
        for(int j = 0; j < 106; j++)
        {
                for(int i = 0; i < 5; i++)
            {
                line(midlineX-i, midlineY1[j], midlineX-i, midlineY2[j]);
            }
        }

        //Finish Line
        setfillstyle(SOLID_FILL, WHITE);
        bar(340, finishlineY1, 370, finishlineY2);
        setfillstyle(SOLID_FILL, BLACK);
        bar(371, finishlineY1, 400, finishlineY2);
        setfillstyle(SOLID_FILL, WHITE);
        bar(401, finishlineY1, 430, finishlineY2);
        setfillstyle(SOLID_FILL, BLACK);
        bar(431, finishlineY1, 460, finishlineY2);
        setfillstyle(SOLID_FILL, WHITE);
        bar(461, finishlineY1, 490, finishlineY2);
        setfillstyle(SOLID_FILL, BLACK);
        bar(491, finishlineY1, 510, finishlineY2);

        //field
        setfillstyle(SOLID_FILL, GREEN);
        bar(0, 0, 330, 687);
        bar(520, 0, 893, 687);

        //map
        for(int i = 0; i < 7; i++)
        {
            setcolor(RED);
            line(800-i, mapY1, 800-i, mapY2);
        }


        if(carheadY1 <= finishlineY2)
        {
            delay(2000);
            closegraph();
            exit(0);
        }

        //Car
        setfillstyle(SOLID_FILL, YELLOW);
        bar(carheadX1, carheadY1, carheadX2, carheadY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(carheadX1-6, carheadY1+4, carheadX1, carheadY2);
        bar(carheadX2, carheadY1+4, carheadX2+6, carheadY2);

        setfillstyle(SOLID_FILL, RED);
        bar(carbodyX1, carbodyY1, carbodyX2, carbodyY2);

        //Obstacle Car

        //Car 1
        setfillstyle(SOLID_FILL, WHITE);
        bar(obc1headX1, obc1headY1, obc1headX2, obc1headY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(obc1headX1-6, obc1headY1+4, obc1headX1, obc1headY2);
        bar(obc1headX2, obc1headY1+4, obc1headX2+6, obc1headY2);

        setfillstyle(SOLID_FILL, GREEN);
        bar(obc1bodyX1, obc1bodyY1, obc1bodyX2, obc1bodyY2);

        for(int i = 0; i <= 70; i++)
        {
            if((carheadY1 == obc1headY1+i && carheadX1 == 361) || (carbodyY2 == obc1bodyY2-i && carheadX1 == 361))
            {
                delay(1000);
                closegraph();
                exit(0);
            }
        }
        obc1headY1 -= leftobcdefspeed;
        obc1headY2 -= leftobcdefspeed;
        obc1bodyY1 -= leftobcdefspeed;
        obc1bodyY2 -= leftobcdefspeed;

        //Car 2
        setfillstyle(SOLID_FILL, LIGHTCYAN);
        bar(obc2headX1, obc2headY1, obc2headX2, obc2headY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(obc2headX1-6, obc2headY1-4, obc2headX1, obc2headY2);
        bar(obc2headX2, obc2headY1-4, obc2headX2+6, obc2headY2);

        setfillstyle(SOLID_FILL, BROWN);
        bar(obc2bodyX1, obc2bodyY1, obc2bodyX2, obc2bodyY2);

        for(int i = 0; i <= 70; i++)
        {
            if((carheadY1 == obc2bodyY2+i && carheadX1 == 461) || (carbodyY2 == obc2headY1-i && carheadX1 == 461))
            {
                delay(1000);
                closegraph();
                exit(0);
            }
        }
        obc2headY1 += rightobcdefspeed;
        obc2headY2 += rightobcdefspeed;
        obc2bodyY1 += rightobcdefspeed;
        obc2bodyY2 += rightobcdefspeed;

        //Car 3
        setfillstyle(SOLID_FILL, WHITE);
        bar(obc3headX1, obc3headY1, obc3headX2, obc3headY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(obc3headX1-6, obc3headY1+4, obc3headX1, obc3headY2);
        bar(obc3headX2, obc3headY1+4, obc3headX2+6, obc3headY2);

        setfillstyle(SOLID_FILL, BLUE);
        bar(obc3bodyX1, obc3bodyY1, obc3bodyX2, obc3bodyY2);

        for(int i = 0; i <= 70; i++)
        {
            if((carheadY1 == obc3headY1+i && carheadX1 == 361) || (carbodyY2 == obc3bodyY2-i && carheadX1 == 361))
            {
                delay(1000);
                closegraph();
                exit(0);
            }
        }
        obc3headY1 -= leftobcdefspeed;
        obc3headY2 -= leftobcdefspeed;
        obc3bodyY1 -= leftobcdefspeed;
        obc3bodyY2 -= leftobcdefspeed;

        //Car 4
        setfillstyle(SOLID_FILL, LIGHTBLUE);
        bar(obc4headX1, obc4headY1, obc4headX2, obc4headY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(obc4headX1-6, obc4headY1+4, obc4headX1, obc4headY2);
        bar(obc4headX2, obc4headY1+4, obc4headX2+6, obc4headY2);

        setfillstyle(SOLID_FILL, RED);
        bar(obc4bodyX1, obc4bodyY1, obc4bodyX2, obc4bodyY2);

        for(int i = 0; i <= 70; i++)
        {
            if((carheadY1 == obc4headY1+i && carheadX1 == 361) || (carbodyY2 == obc4bodyY2-i && carheadX1 == 361))
            {
                delay(1000);
                closegraph();
                exit(0);
            }
        }
        obc4headY1 -= leftobcdefspeed;
        obc4headY2 -= leftobcdefspeed;
        obc4bodyY1 -= leftobcdefspeed;
        obc4bodyY2 -= leftobcdefspeed;

        //Car 5
        setfillstyle(SOLID_FILL, LIGHTCYAN);
        bar(obc5headX1, obc5headY1, obc5headX2, obc5headY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(obc5headX1-6, obc5headY1-4, obc5headX1, obc5headY2);
        bar(obc5headX2, obc5headY1-4, obc5headX2+6, obc5headY2);

        setfillstyle(SOLID_FILL, YELLOW);
        bar(obc5bodyX1, obc5bodyY1, obc5bodyX2, obc5bodyY2);

        for(int i = 0; i <= 70; i++)
        {
            if((carheadY1 == obc5bodyY2+i && carheadX1 == 461) || (carbodyY2 == obc5headY1-i && carheadX1 == 461))
            {
                delay(1000);
                closegraph();
                exit(0);
            }
        }
        obc5headY1 += rightobcdefspeed;
        obc5headY2 += rightobcdefspeed;
        obc5bodyY1 += rightobcdefspeed;
        obc5bodyY2 += rightobcdefspeed;

        //Car 6
        setfillstyle(SOLID_FILL, LIGHTCYAN);
        bar(obc6headX1, obc6headY1, obc6headX2, obc6headY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(obc6headX1-6, obc6headY1-4, obc6headX1, obc6headY2);
        bar(obc6headX2, obc6headY1-4, obc6headX2+6, obc6headY2);

        setfillstyle(SOLID_FILL, LIGHTGREEN);
        bar(obc6bodyX1, obc6bodyY1, obc6bodyX2, obc6bodyY2);

        for(int i = 0; i <= 70; i++)
        {
            if((carheadY1 == obc6bodyY2+i && carheadX1 == 461) || (carbodyY2 == obc6headY1-i && carheadX1 == 461))
            {
                delay(1000);
                closegraph();
                exit(0);
            }
        }
        obc6headY1 += rightobcdefspeed;
        obc6headY2 += rightobcdefspeed;
        obc6bodyY1 += rightobcdefspeed;
        obc6bodyY2 += rightobcdefspeed;

        //Car 7
        setfillstyle(SOLID_FILL, WHITE);
        bar(obc7headX1, obc7headY1, obc7headX2, obc7headY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(obc7headX1-6, obc7headY1+4, obc7headX1, obc7headY2);
        bar(obc7headX2, obc7headY1+4, obc7headX2+6, obc7headY2);

        setfillstyle(SOLID_FILL, LIGHTRED);
        bar(obc7bodyX1, obc7bodyY1, obc7bodyX2, obc7bodyY2);

        for(int i = 0; i <= 70; i++)
        {
            if((carheadY1 == obc7headY1+i && carheadX1 == 361) || (carbodyY2 == obc7bodyY2-i && carheadX1 == 361))
            {
                delay(1000);
                closegraph();
                exit(0);
            }
        }
        obc7headY1 -= leftobcdefspeed;
        obc7headY2 -= leftobcdefspeed;
        obc7bodyY1 -= leftobcdefspeed;
        obc7bodyY2 -= leftobcdefspeed;

        //Car 8
        setfillstyle(SOLID_FILL, LIGHTCYAN);
        bar(obc8headX1, obc8headY1, obc8headX2, obc8headY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(obc8headX1-6, obc8headY1-4, obc8headX1, obc8headY2);
        bar(obc8headX2, obc8headY1-4, obc8headX2+6, obc8headY2);

        setfillstyle(SOLID_FILL, LIGHTBLUE);
        bar(obc8bodyX1, obc8bodyY1, obc8bodyX2, obc8bodyY2);

        for(int i = 0; i <= 70; i++)
        {
            if((carheadY1 == obc8bodyY2+i && carheadX1 == 461) || (carbodyY2 == obc8headY1-i && carheadX1 == 461))
            {
                delay(1000);
                closegraph();
                exit(0);
            }
        }
        obc8headY1 += rightobcdefspeed;
        obc8headY2 += rightobcdefspeed;
        obc8bodyY1 += rightobcdefspeed;
        obc8bodyY2 += rightobcdefspeed;

        //Car 9
        setfillstyle(SOLID_FILL, WHITE);
        bar(obc9headX1, obc9headY1, obc9headX2, obc9headY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(obc9headX1-6, obc9headY1+4, obc9headX1, obc9headY2);
        bar(obc9headX2, obc9headY1+4, obc9headX2+6, obc9headY2);

        setfillstyle(SOLID_FILL, GREEN);
        bar(obc9bodyX1, obc9bodyY1, obc9bodyX2, obc9bodyY2);

        for(int i = 0; i <= 70; i++)
        {
            if((carheadY1 == obc9headY1+i && carheadX1 == 361) || (carbodyY2 == obc9bodyY2-i && carheadX1 == 361))
            {
                delay(1000);
                closegraph();
                exit(0);
            }
        }
        obc9headY1 -= leftobcdefspeed;
        obc9headY2 -= leftobcdefspeed;
        obc9bodyY1 -= leftobcdefspeed;
        obc9bodyY2 -= leftobcdefspeed;

        //Car 10
        setfillstyle(SOLID_FILL, WHITE);
        bar(obc10headX1, obc10headY1, obc10headX2, obc10headY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(obc10headX1-6, obc10headY1-4, obc10headX1, obc10headY2);
        bar(obc10headX2, obc10headY1-4, obc10headX2+6, obc10headY2);

        setfillstyle(SOLID_FILL, BROWN);
        bar(obc10bodyX1, obc10bodyY1, obc10bodyX2, obc10bodyY2);

        for(int i = 0; i <= 70; i++)
        {
            if((carheadY1 == obc10bodyY2+i && carheadX1 == 461) || (carbodyY2 == obc10headY1-i && carheadX1 == 461))
            {
                delay(1000);
                closegraph();
                exit(0);
            }
        }
        obc10headY1 += rightobcdefspeed;
        obc10headY2 += rightobcdefspeed;
        obc10bodyY1 += rightobcdefspeed;
        obc10bodyY2 += rightobcdefspeed;

        //Car 11
        setfillstyle(SOLID_FILL, WHITE);
        bar(obc11headX1, obc11headY1, obc11headX2, obc11headY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(obc11headX1-6, obc11headY1-4, obc11headX1, obc11headY2);
        bar(obc11headX2, obc11headY1-4, obc11headX2+6, obc11headY2);

        setfillstyle(SOLID_FILL, RED);
        bar(obc11bodyX1, obc11bodyY1, obc11bodyX2, obc11bodyY2);

        for(int i = 0; i <= 70; i++)
        {
            if((carheadY1 == obc11bodyY2+i && carheadX1 == 461) || (carbodyY2 == obc11headY1-i && carheadX1 == 461))
            {
                delay(1000);
                closegraph();
                exit(0);
            }
        }
        obc11headY1 += rightobcdefspeed;
        obc11headY2 += rightobcdefspeed;
        obc11bodyY1 += rightobcdefspeed;
        obc11bodyY2 += rightobcdefspeed;

        //Car 12
        setfillstyle(SOLID_FILL, WHITE);
        bar(obc12headX1, obc12headY1, obc12headX2, obc12headY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(obc12headX1-6, obc12headY1+4, obc12headX1, obc12headY2);
        bar(obc12headX2, obc12headY1+4, obc12headX2+6, obc12headY2);

        setfillstyle(SOLID_FILL, LIGHTRED);
        bar(obc12bodyX1, obc12bodyY1, obc12bodyX2, obc12bodyY2);

        for(int i = 0; i <= 70; i++)
        {
            if((carheadY1 == obc12headY1+i && carheadX1 == 361) || (carbodyY2 == obc12bodyY2-i && carheadX1 == 361))
            {
                delay(1000);
                closegraph();
                exit(0);
            }
        }
        obc12headY1 -= leftobcdefspeed;
        obc12headY2 -= leftobcdefspeed;
        obc12bodyY1 -= leftobcdefspeed;
        obc12bodyY2 -= leftobcdefspeed;

        //Car 13
        setfillstyle(SOLID_FILL, WHITE);
        bar(obc13headX1, obc13headY1, obc13headX2, obc13headY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(obc13headX1-6, obc13headY1-4, obc13headX1, obc13headY2);
        bar(obc13headX2, obc13headY1-4, obc13headX2+6, obc13headY2);

        setfillstyle(SOLID_FILL, GREEN);
        bar(obc13bodyX1, obc13bodyY1, obc13bodyX2, obc13bodyY2);

        for(int i = 0; i <= 70; i++)
        {
            if((carheadY1 == obc13bodyY2+i && carheadX1 == 461) || (carbodyY2 == obc13headY1-i && carheadX1 == 461))
            {
                delay(1000);
                closegraph();
                exit(0);
            }
        }
        obc13headY1 += rightobcdefspeed;
        obc13headY2 += rightobcdefspeed;
        obc13bodyY1 += rightobcdefspeed;
        obc13bodyY2 += rightobcdefspeed;

        //Car 14
        setfillstyle(SOLID_FILL, WHITE);
        bar(obc14headX1, obc14headY1, obc14headX2, obc14headY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(obc14headX1-6, obc14headY1+4, obc14headX1, obc14headY2);
        bar(obc14headX2, obc14headY1+4, obc14headX2+6, obc14headY2);

        setfillstyle(SOLID_FILL, LIGHTMAGENTA);
        bar(obc14bodyX1, obc14bodyY1, obc14bodyX2, obc14bodyY2);

        for(int i = 0; i <= 70; i++)
        {
            if((carheadY1 == obc14headY1+i && carheadX1 == 361) || (carbodyY2 == obc14bodyY2-i && carheadX1 == 361))
            {
                delay(1000);
                closegraph();
                exit(0);
            }
        }
        obc14headY1 -= leftobcdefspeed;
        obc14headY2 -= leftobcdefspeed;
        obc14bodyY1 -= leftobcdefspeed;
        obc14bodyY2 -= leftobcdefspeed;

        //Car 15
        setfillstyle(SOLID_FILL, LIGHTCYAN);
        bar(obc15headX1, obc15headY1, obc15headX2, obc15headY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(obc15headX1-6, obc15headY1-4, obc15headX1, obc15headY2);
        bar(obc15headX2, obc15headY1-4, obc15headX2+6, obc15headY2);

        setfillstyle(SOLID_FILL, WHITE);
        bar(obc15bodyX1, obc15bodyY1, obc15bodyX2, obc15bodyY2);

        for(int i = 0; i <= 70; i++)
        {
            if((carheadY1 == obc15bodyY2+i && carheadX1 == 461) || (carbodyY2 == obc15headY1-i && carheadX1 == 461))
            {
                delay(1000);
                closegraph();
                exit(0);
            }
        }
        obc15headY1 += rightobcdefspeed;
        obc15headY2 += rightobcdefspeed;
        obc15bodyY1 += rightobcdefspeed;
        obc15bodyY2 += rightobcdefspeed;

        //Car 16
        setfillstyle(SOLID_FILL, LIGHTCYAN);
        bar(obc16headX1, obc16headY1, obc16headX2, obc16headY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(obc16headX1-6, obc16headY1-4, obc16headX1, obc16headY2);
        bar(obc16headX2, obc16headY1-4, obc16headX2+6, obc16headY2);

        setfillstyle(SOLID_FILL, RED);
        bar(obc16bodyX1, obc16bodyY1, obc16bodyX2, obc16bodyY2);

        for(int i = 0; i <= 70; i++)
        {
            if((carheadY1 == obc16bodyY2+i && carheadX1 == 461) || (carbodyY2 == obc16headY1-i && carheadX1 == 461))
            {
                delay(1000);
                closegraph();
                exit(0);
            }
        }
        obc16headY1 += rightobcdefspeed;
        obc16headY2 += rightobcdefspeed;
        obc16bodyY1 += rightobcdefspeed;
        obc16bodyY2 += rightobcdefspeed;

        //Car 17
        setfillstyle(SOLID_FILL, WHITE);
        bar(obc17headX1, obc17headY1, obc17headX2, obc17headY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(obc17headX1-6, obc17headY1+4, obc17headX1, obc17headY2);
        bar(obc17headX2, obc17headY1+4, obc17headX2+6, obc17headY2);

        setfillstyle(SOLID_FILL, GREEN);
        bar(obc17bodyX1, obc17bodyY1, obc17bodyX2, obc17bodyY2);

        for(int i = 0; i <= 70; i++)
        {
            if((carheadY1 == obc17headY1+i && carheadX1 == 361) || (carbodyY2 == obc17bodyY2-i && carheadX1 == 361))
            {
                delay(1000);
                closegraph();
                exit(0);
            }
        }
        obc17headY1 -= leftobcdefspeed;
        obc17headY2 -= leftobcdefspeed;
        obc17bodyY1 -= leftobcdefspeed;
        obc17bodyY2 -= leftobcdefspeed;

        //Car 18
        setfillstyle(SOLID_FILL, LIGHTCYAN);
        bar(obc18headX1, obc18headY1, obc18headX2, obc18headY2);

        setfillstyle(SOLID_FILL, BLACK);
        bar(obc18headX1-6, obc18headY1-4, obc18headX1, obc18headY2);
        bar(obc18headX2, obc18headY1-4, obc18headX2+6, obc18headY2);

        setfillstyle(SOLID_FILL, BROWN);
        bar(obc18bodyX1, obc18bodyY1, obc18bodyX2, obc18bodyY2);

        for(int i = 0; i <= 70; i++)
        {
            if((carheadY1 == obc18bodyY2+i && carheadX1 == 461) || (carbodyY2 == obc18headY1-i && carheadX1 == 461))
            {
                delay(1000);
                closegraph();
                exit(0);
            }
        }
        obc18headY1 += rightobcdefspeed;
        obc18headY2 += rightobcdefspeed;
        obc18bodyY1 += rightobcdefspeed;
        obc18bodyY2 += rightobcdefspeed;

        //Movement
        if(GetAsyncKeyState(VK_UP))
        {
            for(int i = 0; i < 106; i++)
            {
                if(midlineY2[99] <= 687)
                {
                    midlineY1[i] += 8;
                    midlineY2[i] += 8;
                }
            }

            finishlineY1 += 8;
            finishlineY2 += 8;

            mapY2 -= 0.24;

            if(GetAsyncKeyState(VK_SPACE))
            {
                if(carheadY1 >= 0 && carbodyY1 >= 25)
                {
                    carbodyY1 -= speed;
                    carbodyY2 -= speed;
                    carheadY1 -= speed;
                    carheadY2 -= speed;
                }
            }

            if(GetAsyncKeyState(VK_LEFT) && (carheadX1 != 361 && carheadX2 != 394 && carbodyX1 != 355 && carbodyX2 != 400))
            {
                carheadX1 -= changeside;
                carheadX2 -= changeside;
                carbodyX1 -= changeside;
                carbodyX2 -= changeside;
            }
            if(GetAsyncKeyState(VK_RIGHT) && (carheadX1 == 361 && carheadX2 == 394 && carbodyX1 == 355 && carbodyX2 == 400))
            {
                carheadX1 += changeside;
                carheadX2 += changeside;
                carbodyX1 += changeside;
                carbodyX2 += changeside;
            }

            obc1headY1 += leftobcspeed;
            obc1headY2 += leftobcspeed;
            obc1bodyY1 += leftobcspeed;
            obc1bodyY2 += leftobcspeed;

            obc2headY1 += rightobcspeed;
            obc2headY2 += rightobcspeed;
            obc2bodyY1 += rightobcspeed;
            obc2bodyY2 += rightobcspeed;

            obc3headY1 += leftobcspeed;
            obc3headY2 += leftobcspeed;
            obc3bodyY1 += leftobcspeed;
            obc3bodyY2 += leftobcspeed;

            obc4headY1 += leftobcspeed;
            obc4headY2 += leftobcspeed;
            obc4bodyY1 += leftobcspeed;
            obc4bodyY2 += leftobcspeed;

            obc5headY1 += rightobcspeed;
            obc5headY2 += rightobcspeed;
            obc5bodyY1 += rightobcspeed;
            obc5bodyY2 += rightobcspeed;

            obc6headY1 += rightobcspeed;
            obc6headY2 += rightobcspeed;
            obc6bodyY1 += rightobcspeed;
            obc6bodyY2 += rightobcspeed;

            obc7headY1 += leftobcspeed;
            obc7headY2 += leftobcspeed;
            obc7bodyY1 += leftobcspeed;
            obc7bodyY2 += leftobcspeed;

            obc8headY1 += rightobcspeed;
            obc8headY2 += rightobcspeed;
            obc8bodyY1 += rightobcspeed;
            obc8bodyY2 += rightobcspeed;

            obc9headY1 += leftobcspeed;
            obc9headY2 += leftobcspeed;
            obc9bodyY1 += leftobcspeed;
            obc9bodyY2 += leftobcspeed;

            obc10headY1 += rightobcspeed;
            obc10headY2 += rightobcspeed;
            obc10bodyY1 += rightobcspeed;
            obc10bodyY2 += rightobcspeed;

            obc11headY1 += rightobcspeed;
            obc11headY2 += rightobcspeed;
            obc11bodyY1 += rightobcspeed;
            obc11bodyY2 += rightobcspeed;

            obc12headY1 += leftobcspeed;
            obc12headY2 += leftobcspeed;
            obc12bodyY1 += leftobcspeed;
            obc12bodyY2 += leftobcspeed;

            obc13headY1 += rightobcspeed;
            obc13headY2 += rightobcspeed;
            obc13bodyY1 += rightobcspeed;
            obc13bodyY2 += rightobcspeed;

            obc14headY1 += leftobcspeed;
            obc14headY2 += leftobcspeed;
            obc14bodyY1 += leftobcspeed;
            obc14bodyY2 += leftobcspeed;

            obc15headY1 += rightobcspeed;
            obc15headY2 += rightobcspeed;
            obc15bodyY1 += rightobcspeed;
            obc15bodyY2 += rightobcspeed;

            obc16headY1 += rightobcspeed;
            obc16headY2 += rightobcspeed;
            obc16bodyY1 += rightobcspeed;
            obc16bodyY2 += rightobcspeed;

            obc17headY1 += leftobcspeed;
            obc17headY2 += leftobcspeed;
            obc17bodyY1 += leftobcspeed;
            obc17bodyY2 += leftobcspeed;

            obc18headY1 += rightobcspeed;
            obc18headY2 += rightobcspeed;
            obc18bodyY1 += rightobcspeed;
            obc18bodyY2 += rightobcspeed;
        }
        else if(GetAsyncKeyState(VK_DOWN))
        {

            for(int i = 0; i < 106; i++)
            {
                if(midlineY1[6] >= 0)
                {
                    midlineY1[i] -= 8;
                    midlineY2[i] -= 8;
                    finishlineY1 -= 8;
                    finishlineY2 -= 8;
                }
            }

            finishlineY1 -= 8;
            finishlineY2 -= 8;

            mapY2 += 0.24;

            if(carheadY2 <= 629 && carbodyY2 <= 687)
            {
                carbodyY1 += leftobcspeed;
                carbodyY2 += leftobcspeed;
                carheadY1 += leftobcspeed;
                carheadY2 += leftobcspeed;
            }

            if(GetAsyncKeyState(VK_LEFT) && (carheadX1 != 361 && carheadX2 != 394 && carbodyX1 != 355 && carbodyX2 != 400))
            {
                carheadX1 -= changeside;
                carheadX2 -= changeside;
                carbodyX1 -= changeside;
                carbodyX2 -= changeside;
            }
            if(GetAsyncKeyState(VK_RIGHT) && (carheadX1 == 361 && carheadX2 == 394 && carbodyX1 == 355 && carbodyX2 == 400))
            {
                carheadX1 += changeside;
                carheadX2 += changeside;
                carbodyX1 += changeside;
                carbodyX2 += changeside;
            }

            obc1headY1 -= leftobcspeed;
            obc1headY2 -= leftobcspeed;
            obc1bodyY1 -= leftobcspeed;
            obc1bodyY2 -= leftobcspeed;

            obc2headY1 -= rightobcspeed;
            obc2headY2 -= rightobcspeed;
            obc2bodyY1 -= rightobcspeed;
            obc2bodyY2 -= rightobcspeed;

            obc3headY1 -= leftobcspeed;
            obc3headY2 -= leftobcspeed;
            obc3bodyY1 -= leftobcspeed;
            obc3bodyY2 -= leftobcspeed;

            obc4headY1 -= leftobcspeed;
            obc4headY2 -= leftobcspeed;
            obc4bodyY1 -= leftobcspeed;
            obc4bodyY2 -= leftobcspeed;

            obc5headY1 -= rightobcspeed;
            obc5headY2 -= rightobcspeed;
            obc5bodyY1 -= rightobcspeed;
            obc5bodyY2 -= rightobcspeed;

            obc6headY1 -= rightobcspeed;
            obc6headY2 -= rightobcspeed;
            obc6bodyY1 -= rightobcspeed;
            obc6bodyY2 -= rightobcspeed;

            obc7headY1 -= leftobcspeed;
            obc7headY2 -= leftobcspeed;
            obc7bodyY1 -= leftobcspeed;
            obc7bodyY2 -= leftobcspeed;

            obc8headY1 -= rightobcspeed;
            obc8headY2 -= rightobcspeed;
            obc8bodyY1 -= rightobcspeed;
            obc8bodyY2 -= rightobcspeed;

            obc9headY1 -= leftobcspeed;
            obc9headY2 -= leftobcspeed;
            obc9bodyY1 -= leftobcspeed;
            obc9bodyY2 -= leftobcspeed;

            obc10headY1 -= rightobcspeed;
            obc10headY2 -= rightobcspeed;
            obc10bodyY1 -= rightobcspeed;
            obc10bodyY2 -= rightobcspeed;

            obc11headY1 -= rightobcspeed;
            obc11headY2 -= rightobcspeed;
            obc11bodyY1 -= rightobcspeed;
            obc11bodyY2 -= rightobcspeed;

            obc12headY1 -= leftobcspeed;
            obc12headY2 -= leftobcspeed;
            obc12bodyY1 -= leftobcspeed;
            obc12bodyY2 -= leftobcspeed;

            obc13headY1 -= rightobcspeed;
            obc13headY2 -= rightobcspeed;
            obc13bodyY1 -= rightobcspeed;
            obc13bodyY2 -= rightobcspeed;

            obc14headY1 -= leftobcspeed;
            obc14headY2 -= leftobcspeed;
            obc14bodyY1 -= leftobcspeed;
            obc14bodyY2 -= leftobcspeed;

            obc15headY1 -= rightobcspeed;
            obc15headY2 -= rightobcspeed;
            obc15bodyY1 -= rightobcspeed;
            obc15bodyY2 -= rightobcspeed;

            obc16headY1 -= rightobcspeed;
            obc16headY2 -= rightobcspeed;
            obc16bodyY1 -= rightobcspeed;
            obc16bodyY2 -= rightobcspeed;

            obc17headY1 -= leftobcspeed;
            obc17headY2 -= leftobcspeed;
            obc17bodyY1 -= leftobcspeed;
            obc17bodyY2 -= leftobcspeed;

            obc18headY1 -= rightobcspeed;
            obc18headY2 -= rightobcspeed;
            obc18bodyY1 -= rightobcspeed;
            obc18bodyY2 -= rightobcspeed;
        }
        else if(GetAsyncKeyState(VK_LEFT) && (carheadX1 != 361 && carheadX2 != 394 && carbodyX1 != 355 && carbodyX2 != 400))
        {
            carheadX1 -= changeside;
            carheadX2 -= changeside;
            carbodyX1 -= changeside;
            carbodyX2 -= changeside;
        }
        else if(GetAsyncKeyState(VK_RIGHT) && (carheadX1 == 361 && carheadX2 == 394 && carbodyX1 == 355 && carbodyX2 == 400))
        {
            carheadX1 += changeside;
            carheadX2 += changeside;
            carbodyX1 += changeside;
            carbodyX2 += changeside;
        }

        page = 1 - page;

        delay(5);
    }
}
