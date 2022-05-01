int in=7,out=8, count=0,val,val2,s1,d,s2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(in,INPUT);
pinMode(out,INPUT);

}

void loop() { 
  // put your main code here, to run repeatedly:
  val = digitalRead(in);
  val2=digitalRead(out);
if (val==LOW)
{delay(100);
 s2= digitalRead(out);
 s1= digitalRead(in);
 if (s2== LOW)
 {
  count++;
  Serial.println(count);
  
 }
 else if (s1==LOW)
 {
  d=1+count;
  Serial.println(d);
 }
}delay(100);
}
