char ground[8] = {8,9,10,11,12,13,A0,A1};

char ALPHA[] = {0,0,0,0,0,0,0,0,0,0,0,

  126,24,24,24,24,24,24,0, 0,0,                // T

  102,102,102,126,102,102,102,0, 0,0,          // H
24,60,102,126,102,102,102,0,0,0,             // A
  102,118,126,126,110,102,102,0, 0,0,          // N
   102,108,120,112,120,108,102,0, 0,0,          // K
  102,102,102,60,24,24,24,0, 0,0,              // Y
  60,102,102,102,102,102,60,0, 0,0,            // O
    102,102,102,102,102,102,60,0, 0,0,           // U
 0,0,0,0,0,0,0,0,0,0,0
};
void setup() 
{
  for (int x=8;x<14;x++)
  {
    pinMode(x, OUTPUT);
  }
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  
  for (int i=0;i<8;i++)
  {
    digitalWrite(ground[i],HIGH);
  }
  DDRD = 0xFF;
  PORTD =0;
}

void loop() 
{
  for(int x=0;x<142;x++)
  {
    for(int a=0;a<20;a++)
    {
         for (int i=0;i<8;i++)
          { 
             digitalWrite(ground[i],LOW);
             PORTD = ALPHA[i+x];
            delay(1);
            digitalWrite(ground[i],HIGH);
          }    
    }
  }
  delay(10);
}

