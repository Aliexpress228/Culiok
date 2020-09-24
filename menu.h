class Menu
{
    public:

    void hello();
    void menu();
    private:


};


void Menu::hello()
{
    int x, y;
    txSetColor(TX_BLACK);
    txSetTextAlign(TA_CENTER);
    txSelectFont("Arial", 60);
    for(int i = 0; i < 100000; i++)
    {
        x = random (0, 600);
        y = random (0, 600);
        txCircle(x,y,3);
        if(i%100==0)
        {
        txSetFillColor(RGB(0, 0, 0));
        txSetColor(RGB(0, 0, 0));
        txSelectFont("Arial", 60);
        txTextOut(300, 300, "By DendyC Developers");
        txSelectFont("Arial", 30);
        txTextOut(300, 500, "JustPlayer and KrutBrut");
        txSetFillColor(RGB(255, 255, 255));
        txSetColor(RGB(255, 255, 255));
        txSleep(0.05);
        }

    };
    txSetFillColor(RGB(255, 255, 255));

     txSetFillColor(TX_YELLOW) ;
     txSleep(1000);
     txRectangle(0, 0, 600, 600);
     string hel[]={"H","HE","HEl","HELL","HELLO"};
     char nn[5];

     txSetColor(TX_BLACK);
     txSetTextAlign(TA_CENTER);
     txSelectFont("Comic Sans MS", 60);

     for(int i=0;i<5;i++)
     {
        txRectangle(0,0,600,600);
        txTextOut(300, 300,hel[i].c_str());
         Sleep(300);
     }
     txTextOut(400, 400, "DEAR USER");
     Sleep(1000);
     txSetFillColor(TX_YELLOW) ;
     txRectangle(0,0,600,600);
     txSelectFont("Arial", 60);
     string cu[]={"THIS","IS","OUR","SMART","CALCULATOR","NAMED","СuLiOk"};
     for(int i=0;i<7;i++)
     {
        txTextOut(70+60*i, 70*i,cu[i].c_str());
         Sleep(700);
     }

}

void Menu::menu()
{
    int a, b, c = 1,s;
    while (GetAsyncKeyState(VK_ESCAPE) == 0)
    {
        txSetFillColor(TX_BLACK);
        txRectangle(0, 0, 600, 600);
        a = txMouseX();
        b = txMouseY();
        txSetColor(TX_BLACK);
        txSetTextAlign(TA_CENTER);
        txSelectFont("Arial", 60);
        if(c == 1)
        {
            if(a >= 100 && a <= 500 && b >= 300 && b <= 450)
            {
                txSetFillColor(TX_WHITE);
                txClear();
                txSetFillColor(TX_GREEN);
                txSetColor(TX_BLACK);
                txEllipse(50, 250, 550, 500);
                txSetColor(TX_BLACK);
                txTextOut(300, 300, "КУПОН НА culiok free");
                if(txMouseButtons() != 0){
                    c=2;
                }
            }
            else
            {
                txSetFillColor(TX_WHITE);
                txClear();
                txSetFillColor(TX_GREEN);
                txEllipse(100, 300, 500, 450);
                txSetColor(TX_BLACK);
                txTextOut(300, 300, "Вам подарок!!!!");
            }
        }
        else
        if (c == 2)
        {
            s+=10;
            s%=255;
            txSetFillColor(TX_YELLOW);
            txClear();
            txSetColor(RGB(s,s,150));
            txTextOut(300, 500, "Нажмите X (Икс)");
            if((GetAsyncKeyState(0x58)) != 0){
                c=3;
            }

        }
        else
        if (c == 3)
        {
            txSetFillColor(TX_LIGHTBLUE);
            txClear();
            txSetColor(RGB(0,0,58));
            cout << string( 100, '\n' );
            for(int i=0;i<100;i++) cout << "   ВАС  ВЗЛОМАЛИ  ";
            txSleep(3000);
            cout << string( 100, '\n' );
            txDrawText(0,100,500,500,"Внимание!! в программу \nбыли введены сторонние патчи...");
            txSleep(3000);
            txClear();
            txDrawText(0,100,500,500,"Борьба с \nвирусным патчем...");
            txSleep(3000);
            txClear();
            txDrawText(0,100,500,500,"Неудача! \nПатч повредил данные программы!!");
            txSleep(3000);
            txClear();
            txDrawText(0,100,500,500,"Теперь в программе \nкуплен весь платный софт");
            txSleep(3000);
            txClear();
            for(int i=0;i<500;i++) cout << "  СПАСИБО ЗА ПОКУПКУ  ";
            txSleep(3000);
            c=4;

        }
        else
        if(c=4)
        {
        }
        txSleep(100);
    }
}




