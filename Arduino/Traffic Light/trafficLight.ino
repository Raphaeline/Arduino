void setup() {

  // configure the output pins

  pinMode(2,OUTPUT); //Green
  pinMode(3,OUTPUT); //Yellow
  pinMode(4,OUTPUT); //Red

  pinMode(5,OUTPUT); //Green
  pinMode(6,OUTPUT); //Yellow
  pinMode(7,OUTPUT); //Red

  pinMode(8,OUTPUT); //Green
  pinMode(9,OUTPUT); //Yellow
  pinMode(10,OUTPUT); //Red

}

 

void loop() 

{
  //enables the 1st set of signals
  digitalWrite(2,1); 
  digitalWrite(7,1);
  digitalWrite(10,1);
  digitalWrite(4,0);
  digitalWrite(3,0);  
  digitalWrite(6,0);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(5,0);
  delay(10000);

 
  //enables the yellow lights
  digitalWrite(3,1);
  digitalWrite(6,1);
  digitalWrite(2,0); 
  digitalWrite(7,0);
  delay(3000);

 
  //enables the 2nd set of signals
  digitalWrite(4,1);
  digitalWrite(5,1);
  digitalWrite(10,1);
  digitalWrite(2,0);
  digitalWrite(3,0);  
  digitalWrite(6,0);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(7,0);
  delay(10000);

 
  //enables the yellow lights
  digitalWrite(9,1); 
  digitalWrite(6,1);
  digitalWrite(10,0);
  digitalWrite(5,0);  
  digitalWrite(4,1);
  delay(3000); 

   
  //enables the 3rd set of signals
  digitalWrite(8,1);
  digitalWrite(4,1);
  digitalWrite(7,1);
  digitalWrite(2,0);
  digitalWrite(3,0);  
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,0);
  digitalWrite(10,0);
  delay(10000);

  
  //enables the yellow lights
  digitalWrite(9,1);
  digitalWrite(3,1); 
  digitalWrite(7,1);
  digitalWrite(8,0); 
  digitalWrite(4,0);
  delay(3000);
}
