// Touch screen library with X Y and Z (pressure) readings as well
// as oversampling to avoid 'bouncing'
// This demo code returns raw readings, public domain

#include <stdint.h>
#include <UTFT.h>
#include <TouchScreen.h>

// Debug flag
#define DEBUG

// These are the pins for the shield!
#define YP A3  // must be an analog pin, use "An" notation!
#define XM A2  // must be an analog pin, use "An" notation!
#define YM 9   // can be a digital pin
#define XP 8   // can be a digital pin

#define MINPRESSURE 10
#define MAXPRESSURE 1000

#define X_MIN 200
#define X_MAX 905
#define Y_MIN 205
#define Y_MAX 925

// Declare which fonts we will be using
extern uint8_t SmallFont[];

// Uncomment the next line for Arduino 2009/Uno
UTFT myGLCD(ILI9341_8,A2,A1,A3,A4);   // Remember to change the model parameter to suit your display module!

// For better pressure precision, we need to know the resistance
// between X+ and X- Use any multimeter to read it
// For the one we're using, its 300 ohms across the X plate
TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300);

char *str;

void setup(void) {
	Serial.begin(9600);

	// Setup the LCD
	pinMode(A0,OUTPUT);		// for the UNO_SHIELD_1IN1
	digitalWrite(A0,HIGH);	// the RD pin must be set high
	myGLCD.InitLCD();
	myGLCD.setFont(SmallFont);

	Serial.print(myGLCD.getDisplayXSize());
	Serial.print("x");
	Serial.println(myGLCD.getDisplayYSize());

	Serial.println("clearing screen...");

	myGLCD.setBackColor(VGA_BLACK);
	myGLCD.clrScr();
	myGLCD.print("* TouchScreen Test *", CENTER, 1);

	pinMode(13, OUTPUT);

	str = (char*)malloc(50);

}

void loop(void) {

	pinMode(XP, INPUT);
	pinMode(XM, INPUT);
	pinMode(YP, INPUT);
	pinMode(YM, INPUT);

	digitalWrite(13, HIGH);
	TSPoint p = ts.getPoint();
	digitalWrite(13, LOW);

	pinMode(XP, OUTPUT);
	pinMode(XM, OUTPUT);
	pinMode(YP, OUTPUT);
	pinMode(YM, OUTPUT);

	// we have some minimum pressure we consider 'valid'
	// pressure of 0 means no pressing!
	if (p.z > MINPRESSURE) {

#ifdef DEBUG
		Serial.print("p.x=");
		Serial.print(p.x);
		Serial.print(" p.y=");
		Serial.print(p.y);
		Serial.print(" p.z=");
		Serial.println(p.z);
#endif

		// Touch screen is in portrait mode
		// we need to swap the coordinates
		int16_t tmp = p.x;
		p.x = p.y;
		p.y = tmp;

		p.x = 320 - map(p.x, X_MIN, X_MAX, 0, 320);
		p.y = map(p.y, Y_MIN, Y_MAX, 0, 240);

		sprintf(str, "X = %d, Y = %d, Pressure = %d", p.x, p.y, p.z);

		Serial.println(str);
		myGLCD.setColor(VGA_BLACK);
		myGLCD.fillRect(0,50,319,75);
		myGLCD.setColor(VGA_WHITE);
		myGLCD.print(str, CENTER, 50);

		myGLCD.setColor(VGA_RED);
		myGLCD.drawPixel(p.x, p.y);

	}

	delay(10);
}
