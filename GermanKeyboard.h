/**
 * GermanKeyboard.h
 *
 * @author Tim "timmyRS" Speckhals
 * @copyright 2017, timmyRS
 */
#include <DigiKeyboard.h>

/**
 * s(char)
 *
 * Print char on a german keyboard.
 *
 * Sources: http://www.usb.org/developers/hidpage/Hut1_12v2.pdf and http://keycode.info/
 */
void s(char c)
{
	switch(c)
	{
		default:
		DigiKeyboard.print(c);
		break;

		case '!':
		DigiKeyboard.sendKeyStroke(KEY_1, MOD_SHIFT_LEFT);
		break;

		case '"':
		DigiKeyboard.sendKeyStroke(KEY_2, MOD_SHIFT_LEFT);
		break;

		case '§':
		DigiKeyboard.sendKeyStroke(KEY_3, MOD_SHIFT_LEFT);
		break;

		case '$':
		DigiKeyboard.sendKeyStroke(KEY_4, MOD_SHIFT_LEFT);
		break;

		case '%':
		DigiKeyboard.sendKeyStroke(KEY_5, MOD_SHIFT_LEFT);
		break;

		case '&':
		DigiKeyboard.sendKeyStroke(KEY_6, MOD_SHIFT_LEFT);
		break;

		case '/':
		DigiKeyboard.sendKeyStroke(KEY_7, MOD_SHIFT_LEFT);
		break;

		case '(':
		DigiKeyboard.sendKeyStroke(KEY_8, MOD_SHIFT_LEFT);
		break;

		case ')':
		DigiKeyboard.sendKeyStroke(KEY_9, MOD_SHIFT_LEFT);
		break;

		case '=':
		DigiKeyboard.sendKeyStroke(KEY_0, MOD_SHIFT_LEFT);
		break;

		case '{':
		DigiKeyboard.sendKeyStroke(KEY_7, MOD_ALT_RIGHT);
		break;

		case '[':
		DigiKeyboard.sendKeyStroke(KEY_8, MOD_ALT_RIGHT);
		break;

		case ']':
		DigiKeyboard.sendKeyStroke(KEY_9, MOD_ALT_RIGHT);
		break;

		case '}':
		DigiKeyboard.sendKeyStroke(KEY_0, MOD_ALT_RIGHT);
		break;

		case ':':
		DigiKeyboard.sendKeyStroke(55, MOD_SHIFT_LEFT);
		break;

		case '-':
		DigiKeyboard.sendKeyStroke(56);
		break;

		case '_':
		DigiKeyboard.sendKeyStroke(56, MOD_SHIFT_LEFT);
		break;

		case '#':
		DigiKeyboard.sendKeyStroke(49);
		break;

		case '\'':
		DigiKeyboard.sendKeyStroke(49, MOD_SHIFT_LEFT);
		break;

		case 'z':
		DigiKeyboard.sendKeyStroke(KEY_Y);
		break;

		case 'Z':
		DigiKeyboard.sendKeyStroke(KEY_Y, MOD_SHIFT_LEFT);
		break;

		case 'y':
		DigiKeyboard.sendKeyStroke(KEY_Z);
		break;

		case 'Y':
		DigiKeyboard.sendKeyStroke(KEY_Z, MOD_SHIFT_LEFT);
		break;
	}
}

/**
 * p(const char*)
 *
 * Print string (char array) on a german keyboard.
 */
void p(const char* chars)
{
	while(*chars != 0)
	{
		s(*chars);
		chars++;
	}
}

/**
 * pn(const char*, int)
 *
 * Print string (char array) appended with a newline on a german keyboard and wait `d` miliseconds.
 */
void pn(const char* s, int d)
{
	p(s);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(d);
}


/**
 * pn(const char*)
 *
 * Print string (char array) appended with a newline on a german keyboard and wait 100 miliseconds.
 */
void pn(const char* s)
{
	pn(s, 100);
}
