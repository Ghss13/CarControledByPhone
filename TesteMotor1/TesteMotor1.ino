//----- Porta do Motor -----
const int B_mais_pwm =7;
const int B_menos    =6;
const int A_mais_pwm =5;
const int A_menos    =4;

void setup() {
  // put your setup code here, to run once:

    //----- Motor -----  
  pinMode(B_menos, OUTPUT); 
  pinMode(A_menos, OUTPUT); 


}

void loop() {
  // put your main code here, to run repeatedly:

  motor_avancar(30);
 

}


    

