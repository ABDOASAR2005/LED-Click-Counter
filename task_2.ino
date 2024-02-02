int led1=13;
int led2=12;
int led3=11;
int b=10;
int read=0;
int c=0;


void setup() { 
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
   pinMode(led3,OUTPUT);
  pinMode(b,INPUT);
}

void loop() {
  read=digitalRead(b);
  if(read==HIGH)
  
  {c=c+1;

  if(c==1)
  {digitalWrite(led1,HIGH);}
  
  else if (c==2)
  {digitalWrite(led2,HIGH);}
 
  else if (c==3)

  {digitalWrite(led3,HIGH);}

  else if (c==4)
  
  {
    digitalWrite(led1,LOW);
  
  digitalWrite(led2,LOW);
  
  digitalWrite(led3,LOW);
  
  c=0;}
  
  delay(250);
  
  }
}



  



  
