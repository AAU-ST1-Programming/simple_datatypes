/*
  Demo of unicode
  Tjek via https://translate.google.com hvilket sprog der er tale om (om hør udtalen)
  
  Author:   John Hansen
  Filename: Demo_of_unicode.ino
  Date:     13/10 2020
*/

int g_a = 10;

void setup()
{
  char string1[] = {0x48, 0x65, 0x6C, 0x6C, 0x6F, 0x00};
  char string2[] = {0xE4, 0xBD, 0xA0, 0xE5, 0xA5, 0xBD, 0x00};
  char string3[] = {0xE3, 0x81, 0x93, 0xE3, 0x82, 0x93, 0xE3, 0x81, 0xAB, 0xE3, 0x81, 0xA1, 0xE3, 0x81, 0xAF, 0x00};
  char string4[] = {0xD0, 0x97, 0xD0, 0xB4, 0xD1, 0x80, 0xD0, 0xB0, 0xD0, 0xB2, 0xD1, 0x81, 0xD1, 0x82, 0xD0, 0xB2, 0xD1, 0x83, 0xD0, 0xB9, 0xD1, 0x82, 0xD0, 0xB5, 0x00};
  char string5[] = {0xf0,0x9f,0x92,0xa9,0x00};
  
  Serial.begin(115200);
  delay(400);

  Serial.println(string1);
  Serial.printf("Size of sting1[] = %d\n\n", sizeof(string1));
  
  Serial.println(string2);
  Serial.printf("Size of sting2[] = %d\n\n", sizeof(string2));
    
  Serial.println(string3);
  Serial.printf("Size of sting3[] = %d\n\n", sizeof(string3));
  
  Serial.println(string4);
  Serial.printf("Size of sting4[] = %d\n\n", sizeof(string4));

  Serial.println(string5);
  Serial.printf("Size of sting5[] = %d\n\n", sizeof(string5));
}

void loop() 
{

}