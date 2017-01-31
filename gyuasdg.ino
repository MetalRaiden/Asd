void setup(){
            int x,sum,cont;
           
            sum=0;
            cont=0;
           
            for (x=0;x<100;x++)
            {
        if (x%2!=0)
        {
           sum=sum+x;
           cont=cont+1;
        }
    }
           
            Serial.print("Hay");
            Serial.print(cont);
            Serial.println("numeros");
            Serial.print("La suma es:");
            Serial.print(sum);
}

void loop(){}
