#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>  
#include <windows.h>  

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    PlaySound(TEXT("C:/Users/karma/OneDrive/Documentos/Programming/vande mataram.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    int skyblue = COLOR(135, 206, 235);
    setbkcolor(skyblue); 
    cleardevice(); 

    float PI = 3.14;
    int r = 50, i, a, b, x, y;
    int ocher = COLOR(204, 119, 34); 
    for (int j = 0; j < 280; j++) {
        for (int i = 0; i < 100; i++) {
            putpixel(50 + j, 100 + i, ocher);
            putpixel(600 - j, 100 + i, ocher);
            putpixel(50 + j, 200 + i, WHITE);
            putpixel(600 - j, 200 + i, WHITE);
            putpixel(50 + j, 300 + i, GREEN);
            putpixel(600 - j, 300 + i, GREEN);
        }
        delay(70);
    }

    a = 325; 
    b = 250; 
    setcolor(BLUE);
    circle(a, b, r);
    delay(500);

    for (i = 0; i < 360; i += 15) {
        x = r * cos(i * PI / 180);
        y = r * sin(i * PI / 180);
        line(a, b, a + x, b - y);
        delay(300); 
    }
    delay(3000);
    cleardevice();
    setbkcolor(WHITE);
    cleardevice();
    
    int width = 670;
    int height = 480;

    for (int y = 0; y < height / 3; y++) {

        for (int x = 0; x < width; x++) {
            
            putpixel(x, y, ocher);
        }
        for (int x = 0; x < width; x++) {
            
            putpixel(x, (2 * height / 3) + y, GREEN);
        }
        delay(20);
    }

    settextstyle(BOLD_FONT, HORIZ_DIR, 5);
    setcolor(BLACK);
    outtextxy(40, 220, (char*)"H");delay(250);
    outtextxy(40, 220, (char*)"HA");delay(250);
    outtextxy(40, 220, (char*)"HAP");delay(250);
    outtextxy(40, 220, (char*)"HAPP");delay(200);
    outtextxy(40, 220, (char*)"HAPPY");delay(200);
    outtextxy(40, 220, (char*)"HAPPY ");delay(200);
    outtextxy(40, 220, (char*)"HAPPY I");delay(200);
    outtextxy(40, 220, (char*)"HAPPY IN");delay(250);
    outtextxy(40, 220, (char*)"HAPPY IND");delay(200);
    outtextxy(40, 220, (char*)"HAPPY INDE");delay(200);
    outtextxy(40, 220, (char*)"HAPPY INDEP");delay(200);
    outtextxy(40, 220, (char*)"HAPPY INDEPE");delay(200);
    outtextxy(40, 220, (char*)"HAPPY INDEPEN");delay(200);
    outtextxy(40, 220, (char*)"HAPPY INDEPEND");delay(220);
    outtextxy(40, 220, (char*)"HAPPY INDEPENDE");delay(220);
    outtextxy(40, 220, (char*)"HAPPY INDEPENDEN");delay(220);
    outtextxy(40, 220, (char*)"HAPPY INDEPENDENC");delay(220);
    outtextxy(40, 220, (char*)"HAPPY INDEPENDENCE");delay(220);
    outtextxy(40, 220, (char*)"HAPPY INDEPENDENCE ");delay(200);
    outtextxy(40, 220, (char*)"HAPPY INDEPENDENCE D");delay(200);
    outtextxy(40, 220, (char*)"HAPPY INDEPENDENCE DA");delay(300);
    outtextxy(40, 220, (char*)"HAPPY INDEPENDENCE DAY");delay(200);

    PlaySound(NULL, 0, 0);
    getch();
    closegraph();
    return 0;
}
