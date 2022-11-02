class Alarm{
  int onKapiPin=0;
  int arkaKapiPin=0;
  public:
  Alarm(int p1,int p2){
    onKapiPin=p1;
    arkaKapiPin=p2;
    }
    void setup(){
      pinMode(onKapiPin,OUTPUT); 
      pinMode(arkaKapiPin,OUTPUT);
    }
    void komut(String k){
      if(k=="onkapi") onKapi();
      if(k=="arkakapi") arkaKapi();
      if(k=="sustur") sustur();
    }
  private:
    void onKapi(){
      digitalWrite(onKapiPin,HIGH);  
      
    }
    void arkaKapi(){
      digitalWrite(arkaKapiPin,HIGH);
    }
    void sustur(){
      digitalWrite(onKapiPin,LOW);
      digitalWrite(arkaKapiPin,LOW);
      
    }
};
