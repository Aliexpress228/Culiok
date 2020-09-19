class Menu
{
    public:

    void hello();

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
        txSetPixel(x, y, RGB(255, 255, 255));
        if(i%1000==0)
        txTextOut(300, 300, "By DendyC Developers");
    };
    txSetFillColor(RGB(255, 255, 255));
    for(int i = 0; i < 100000; i++)
    {
        x = random (0, 600);
        y = random (0, 600);
        txRectangle(x, y, x+3, y+3);
        if(i%1000==0)
        {
        txSetColor(TX_BLACK);
        txTextOut(300, 300, "By DendyC Developers");
        txSetColor(TX_WHITE);
        };
    };

     for(int i = 0; i < 36789; i++)
     {
        x = random (0, 1000);
        y = random (0, 1000);

        txRectangle(x, y, x+9, y+9);
        if(i%1000==0 || i == 36788)
        {
        txSetColor(TX_BLACK);
        txTextOut(300, 300, "By DendyC Developers");
        txSetColor(TX_WHITE);
        }
     };
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
     string cu[]={"THIS","IS","OUR","SMART","CALCULATOR","NAMED","_KULIOK_"};
     for(int i=0;i<7;i++)
     {
        txTextOut(70+60*i, 70*i,cu[i].c_str());
         Sleep(700);
     }

}

