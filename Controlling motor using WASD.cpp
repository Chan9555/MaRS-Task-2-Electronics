
int IN1=3,IN2=4,IN3=6,IN4=7;
char c;
void setup(){
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  
  if(Serial.available()){
    c=Serial.read();
    if(c=='w'){
      digitalWrite(IN1,HIGH);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,LOW);
    }
    else if(c=='s'){
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,HIGH);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,HIGH);
    }
    else if(c=='a'){
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,HIGH);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,LOW);
    }
    else if(c=='d'){
      digitalWrite(IN1,HIGH);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,HIGH);
    }
    else if(c=='x'){
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,LOW);
    }
  }
}
