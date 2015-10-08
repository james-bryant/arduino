case ILI9341_8:


	sbi(P_CS, B_CS);
	sbi(P_WR, B_WR);
	cbi(P_CS, B_CS);

	LCD_Write_COM(0xCF);
	LCD_Write_DATA(0x00);
	LCD_Write_DATA(0xC1);
	LCD_Write_DATA(0x30);

	LCD_Write_COM(0xED);
	LCD_Write_DATA(0x64);
	LCD_Write_DATA(0x03);
	LCD_Write_DATA(0x12);
	LCD_Write_DATA(0x81);

	LCD_Write_COM(0xE8);
	LCD_Write_DATA(0x85);
	LCD_Write_DATA(0x00);
	LCD_Write_DATA(0x78);

	/*LCD_Write_COM(0xCB);
	LCD_Write_DATA(0x39);
	LCD_Write_DATA(0x2C);
	LCD_Write_DATA(0x00);
	LCD_Write_DATA(0x34);
	LCD_Write_DATA(0x02);*/

	LCD_Write_COM(0xF7);
	LCD_Write_DATA(0x20);

	LCD_Write_COM(0xEA);
	LCD_Write_DATA(0x00);
	LCD_Write_DATA(0x00);

	LCD_Write_COM(0xC0);
	LCD_Write_DATA(0x23);

	LCD_Write_COM(0xC1);
	LCD_Write_DATA(0x10);

	LCD_Write_COM(0xC5);
	LCD_Write_DATA(0x3E);
	LCD_Write_DATA(0x28);

	LCD_Write_COM(0xC7);
	LCD_Write_DATA(0x86);

	LCD_Write_COM(0x36);
	LCD_Write_DATA(0x48);

	LCD_Write_COM(0x3A);
	LCD_Write_DATA(0x55);

	LCD_Write_COM(0xB1);
	LCD_Write_DATA(0x00);
	LCD_Write_DATA(0x18);

	/*LCD_Write_COM(0xF2);
	LCD_Write_DATA(0x00);*/

	/*LCD_Write_COM(0x26);
	LCD_Write_DATA(0x01);*/

	/*LCD_Write_COM(0xE0);
	LCD_Write_DATA(0x1F);
	LCD_Write_DATA(0x31);
	LCD_Write_DATA(0x2B);
	LCD_Write_DATA(0x0C);
	LCD_Write_DATA(0x0E);
	LCD_Write_DATA(0x08);
	LCD_Write_DATA(0x4E);
	LCD_Write_DATA(0xF1);
	LCD_Write_DATA(0x37);
	LCD_Write_DATA(0x07);
	LCD_Write_DATA(0x10);
	LCD_Write_DATA(0x03);
	LCD_Write_DATA(0x0E);
	LCD_Write_DATA(0x09);
	LCD_Write_DATA(0x00);*/

	/*LCD_Write_COM(0xE1);
	LCD_Write_DATA(0x00);
	LCD_Write_DATA(0x0E);
	LCD_Write_DATA(0x14);
	LCD_Write_DATA(0x03);
	LCD_Write_DATA(0x11);
	LCD_Write_DATA(0x07);
	LCD_Write_DATA(0x31);
	LCD_Write_DATA(0xC1);
	LCD_Write_DATA(0x48);
	LCD_Write_DATA(0x08);
	LCD_Write_DATA(0x0F);
	LCD_Write_DATA(0x0C);
	LCD_Write_DATA(0x31);
	LCD_Write_DATA(0x36);
	LCD_Write_DATA(0x0F);*/

	/*LCD_Write_COM(0x2A);
	LCD_Write_DATA(0x00);
	LCD_Write_DATA(0x00);
	LCD_Write_DATA(0x00);
	LCD_Write_DATA(0xEF);*/

	/*LCD_Write_COM(0x2B);
	LCD_Write_DATA(0x00);
	LCD_Write_DATA(0x00);
	LCD_Write_DATA(0x01);
	LCD_Write_DATA(0x3F);*/

	/*LCD_Write_COM(0xB7);
	LCD_Write_DATA(0x07);*/

	LCD_Write_COM(0xB6);
	LCD_Write_DATA(0x08);
	LCD_Write_DATA(0x82);
	LCD_Write_DATA(0x27);

	LCD_Write_COM(0x11);
	delay(120);
	LCD_Write_COM(0x29);
	LCD_Write_COM(0x2C);

	break;
