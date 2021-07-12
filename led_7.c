// C++ code
//
int Pin[8]={2,3,4,5,6,7,8,9};
unsigned char Shoe[10][8]={
  {1,1,1,1,1,1,0,1},
  {0,1,1,0,0,0,0,1},
  {1,1,0,1,1,0,1,1},
  {1,1,1,1,0,0,1,1},
  {0,1,1,0,0,1,1,1},
  {1,0,1,1,0,1,1,1},
  {1,0,1,1,1,1,1,1},
  {1,1,1,0,0,0,0,1},
  {1,1,1,1,1,1,1,1},
  {1,1,1,1,0,1,1,1},
  
};
  void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  int i=0;
  int j;
  j=Serial.read();
  {   for(i=0;i<10;i++)
    {
     
      digitalWrite(Pin[i],Shoe[j][i]);
      
    }
    delay(1000);
  }}
