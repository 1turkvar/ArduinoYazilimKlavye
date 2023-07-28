#include <Keypad.h>
#include "TRKeyboard.h"

const byte Satir = 4;  // keypad satır sayısı
const byte Sutun = 4;  // keypad sütün sayısı
String Sifre;          // girilen şifre

// Keypad tuş yapısını hazırlıyoruz.
char key[Satir][Sutun] = {
  { '1', '2', '3', 'A' },
  { '4', '5', '6', 'B' },
  { '7', '8', '9', 'C' },
  { '*', '0', '#', 'D' }
};

// Arduino bağlantı bacaklarını belirliyoruz
byte SatirPinleri[Satir] = { 2, 3, 4, 5 };
byte SutunPinleri[Sutun] = { 6, 7, 8, 9 };

// Keypade TusTakimi ismini verip arduino bağlantılarını ve karakterleri
// bu TusTakimi keypad nesnesine tanımlıyoruz.
Keypad TusTakimi = Keypad(makeKeymap(key), SatirPinleri, SutunPinleri, Satir, Sutun);

void setup() {
  Serial.begin(9600);
  TRKeyboard.begin();
}

void loop() {
  char basilanTus = TusTakimi.getKey();  // Keyped basılan tuş değerini alıyoruz.

  switch (basilanTus) {
    case '1':  // İf
      TRKeyboard.print("if");
      TRKeyboard.press(KEY_TAB);
      TRKeyboard.releaseAll();
      TRKeyboard.press(KEY_TAB);
      TRKeyboard.releaseAll();
      break;
    case '2':  // Else
      TRKeyboard.print("e");
      TRKeyboard.press(KEY_ESC);
      delay(500);
      TRKeyboard.print("lse");
      TRKeyboard.press(KEY_RIGHT_ALT);
      TRKeyboard.press('7');
      TRKeyboard.releaseAll();
      TRKeyboard.press(KEY_RETURN);
      TRKeyboard.print("/* Yorum*/");
      delay(1000);
      TRKeyboard.press(KEY_RETURN);
      TRKeyboard.press(KEY_RIGHT_ALT);
      TRKeyboard.press('0');
      TRKeyboard.releaseAll();
      TRKeyboard.press(KEY_RETURN);
      TRKeyboard.releaseAll();
      break;
    case '3':  // İf Else
      TRKeyboard.print("i");
      TRKeyboard.press(KEY_ESC);
      delay(500);
      TRKeyboard.print("f (true)");
      TRKeyboard.press(KEY_RIGHT_ALT);
      TRKeyboard.press('7');
      TRKeyboard.releaseAll();
      TRKeyboard.press(KEY_RETURN);
      TRKeyboard.print("/* Yorum*/");
      delay(1000);
      TRKeyboard.press(KEY_RETURN);
      TRKeyboard.press(KEY_RIGHT_ALT);
      TRKeyboard.press('0');
      TRKeyboard.releaseAll();
      TRKeyboard.print("e");
      TRKeyboard.press(KEY_ESC);
      delay(500);
      TRKeyboard.print("lse");
      TRKeyboard.press(KEY_RIGHT_ALT);
      TRKeyboard.press('7');
      TRKeyboard.releaseAll();
      TRKeyboard.press(KEY_RETURN);
      TRKeyboard.print("/* Yorum*/");
      delay(1000);
      TRKeyboard.press(KEY_RETURN);
      TRKeyboard.press(KEY_RIGHT_ALT);
      TRKeyboard.press('0');
      TRKeyboard.releaseAll();
      TRKeyboard.press(KEY_RETURN);
      TRKeyboard.releaseAll();
      break;
    case '4':  // for
      TRKeyboard.print("for");
      TRKeyboard.press(KEY_TAB);
      TRKeyboard.releaseAll();
      TRKeyboard.press(KEY_TAB);
      TRKeyboard.releaseAll();
      break;
    case '5':  // switch
      TRKeyboard.print("switch");
      TRKeyboard.press(KEY_TAB);
      TRKeyboard.releaseAll();
      TRKeyboard.press(KEY_TAB);
      TRKeyboard.releaseAll();
      break;
    case '6':  // değişken tanımlama
      TRKeyboard.print("prop");
      TRKeyboard.press(KEY_TAB);
      TRKeyboard.releaseAll();
      break;
    case '7':  // using
      TRKeyboard.print("using ");
      TRKeyboard.releaseAll();
      break;
    case '8':  // using
      TRKeyboard.press(KEY_LEFT_ALT);
      TRKeyboard.press(KEY_RIGHT_ARROW);
      TRKeyboard.releaseAll();
      break;



    case 'A':  // VS Kod Düzenleme
      TRKeyboard.press(KEY_LEFT_CTRL);
      TRKeyboard.press('k');
      TRKeyboard.press('d');
      delay(500);
      TRKeyboard.releaseAll();
      break;
    case 'B':  // Tanımları daralt
      TRKeyboard.press(KEY_LEFT_CTRL);
      TRKeyboard.press('o');
      delay(500);
      TRKeyboard.releaseAll();
      break;
    case 'C':  // Metotları kapatır
      TRKeyboard.press(KEY_LEFT_CTRL);
      TRKeyboard.press(KEY_LEFT_SHIFT);
      TRKeyboard.press('b');
      delay(500);
      TRKeyboard.releaseAll();
      break;







    case '0':
      TRKeyboard.press(KEY_LEFT_ALT);
      TRKeyboard.press(KEY_LEFT_SHIFT);
      TRKeyboard.press('F');
      delay(500);
      TRKeyboard.releaseAll();
      break;
  }
}