case ILI9341_8:


	sbi(P_CS, B_CS);
	sbi(P_WR, B_WR);
	cbi(P_CS, B_CS);

/*	LCD_Write_COM_DATA(0xe5, 0x8000);
	LCD_Write_COM_DATA(0x00, 0x0001);
	LCD_Write_COM_DATA(0x01, 0x0000);
	LCD_Write_COM_DATA(0x02, 0x0700);
	LCD_Write_COM_DATA(0x03, 0x1030);
	LCD_Write_COM_DATA(0x04, 0x0000);
	LCD_Write_COM_DATA(0x08, 0x0202);
	LCD_Write_COM_DATA(0x09, 0x0000);
	LCD_Write_COM_DATA(0x0A, 0x0000);
	LCD_Write_COM_DATA(0x0C, 0x0000);
	LCD_Write_COM_DATA(0x0D, 0x0000);
	LCD_Write_COM_DATA(0x0F, 0x0000);
	//-----Power On sequence-----------------------
	LCD_Write_COM_DATA(0x10, 0x0000);
	LCD_Write_COM_DATA(0x11, 0x0000);
	LCD_Write_COM_DATA(0x12, 0x0000);
	LCD_Write_COM_DATA(0x13, 0x0000);
	delay(50);
	LCD_Write_COM_DATA(0x10, 0x17B0);
	LCD_Write_COM_DATA(0x11, 0x0037);
	delay(10);
	LCD_Write_COM_DATA(0x12, 0x0138);
	delay(10);
	LCD_Write_COM_DATA(0x13, 0x1700);
//	LCD_Write_COM_DATA(0x29, 0x000c);
	LCD_Write_COM_DATA(0x20, 0x0000);
	LCD_Write_COM_DATA(0x21, 0x0000);

	delay(10);
	//-----Gamma control-----------------------
	LCD_Write_COM_DATA(0x30, 0x0000);
	LCD_Write_COM_DATA(0x31, 0x0606);
	LCD_Write_COM_DATA(0x32, 0x0304);
	LCD_Write_COM_DATA(0x33, 0x0202);
	LCD_Write_COM_DATA(0x34, 0x0202);

	LCD_Write_COM_DATA(0x35, 0x0103);
	LCD_Write_COM_DATA(0x36, 0x011D);
	LCD_Write_COM_DATA(0x37, 0x0404);
	LCD_Write_COM_DATA(0x38, 0x0404);
	LCD_Write_COM_DATA(0x39, 0x0404);
	LCD_Write_COM_DATA(0x3C, 0x0700);
	LCD_Write_COM_DATA(0x3D, 0x0A1F);
	//-----Set RAM area-----------------------
	LCD_Write_COM_DATA(0x50, 0x0000);
	LCD_Write_COM_DATA(0x51, 0x00EF);
	LCD_Write_COM_DATA(0x52, 0x0000);
	LCD_Write_COM_DATA(0x53, 0x013F);
	LCD_Write_COM_DATA(0x60, 0x2700);
	LCD_Write_COM_DATA(0x61, 0x0001);
	LCD_Write_COM_DATA(0x6A, 0x0000);
//	LCD_Write_COM_DATA(0x21, 0x0000);
//	LCD_Write_COM_DATA(0x20, 0x0000);
	//-----Partial Display Control------------
//	LCD_Write_COM_DATA(0x80, 0x0000);
//	LCD_Write_COM_DATA(0x81, 0x0000);
//	LCD_Write_COM_DATA(0x82, 0x0000);
//	LCD_Write_COM_DATA(0x83, 0x0000);
//	LCD_Write_COM_DATA(0x84, 0x0000);
//	LCD_Write_COM_DATA(0x85, 0x0000);
	//-----Panel Control----------------------
	LCD_Write_COM_DATA(0x90, 0x0010);
	LCD_Write_COM_DATA(0x92, 0x0000);
	LCD_Write_COM_DATA(0x93, 0x0003);
	LCD_Write_COM_DATA(0x95, 0x0101);
	LCD_Write_COM_DATA(0x97, 0x0000);
	LCD_Write_COM_DATA(0x98, 0x0000);
	//-----Display on-----------------------
	LCD_Write_COM_DATA(0x07, 0x0021);
	LCD_Write_COM_DATA(0x07, 0x0031);
	LCD_Write_COM_DATA(0x07, 0x0173);

	delay(50);
*/

// ================================================
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

// =======================================

/*	LCD_Write_COM(0xE9);
	LCD_Write_DATA(0x20);
	LCD_Write_COM(0x11); //Exit Sleep
	delay(100);
	LCD_Write_COM(0xD1);//VCOM Control
	LCD_Write_DATA(0x00);
	LCD_Write_DATA(0x71);
	LCD_Write_DATA(0x19);

	LCD_Write_COM(0xD0);//Power_Setting
	LCD_Write_DATA(0x07);
	LCD_Write_DATA(0x01);
	LCD_Write_DATA(0x08);

	LCD_Write_COM(0x36);//set_address_mode
	LCD_Write_DATA(0x48);//Page Address Order:Top to Bottom,Column Address Order:Right to Left,Page/Column Order:Normal Mode,Line Address Order:LCD Refresh Top to Bottom
	//RGB/BGR Order:Pixels sent in BGR order, Display Data Latch Data Order:Not supported, Horizontal Flip:Normal display, Vertical Flip: Normal display


	LCD_Write_COM(0x3A);//set_pixel_format
	LCD_Write_DATA(0x05);//DBI:16bit/pixel (65,536 colors)

	LCD_Write_COM(0xC1);//Display_Timing_Setting for Normal/Partial Mode
	LCD_Write_DATA(0x10);
	LCD_Write_DATA(0x10);
	LCD_Write_DATA(0x02);
	LCD_Write_DATA(0x02);

	LCD_Write_COM(0xC0); //Panel Driving Setting / Set Default Gamma
	LCD_Write_DATA(0x00);
	LCD_Write_DATA(0x35);
	LCD_Write_DATA(0x00);
	LCD_Write_DATA(0x00);
	LCD_Write_DATA(0x01);
	LCD_Write_DATA(0x02);

	LCD_Write_COM(0xC5);  //Frame Rate Control / Set frame rate
	LCD_Write_DATA(0x04);//72Hz

	LCD_Write_COM(0xD2); //Power_Setting for Normal Mode / power setting
	LCD_Write_DATA(0x01);//Gamma Driver Amplifier:1.00, Source Driver Amplifier: 1.00
	#ifdef MCUFRIEND_35_TFTLCD_FOR_ARDUINO_2560_INIT_LCD2
	    LCD_Write_COM(0x44);
	#else
		LCD_Write_DATA(0x44);
	#endif
		LCD_Write_COM(0xC8); //Gamma Setting / Set Gamma
		LCD_Write_DATA(0x04);
		LCD_Write_DATA(0x67);
		LCD_Write_DATA(0x35);
		LCD_Write_DATA(0x04);
		LCD_Write_DATA(0x08);
		LCD_Write_DATA(0x06);
		LCD_Write_DATA(0x24);
		LCD_Write_DATA(0x01);
		LCD_Write_DATA(0x37);
		LCD_Write_DATA(0x40);
		LCD_Write_DATA(0x03);
		LCD_Write_DATA(0x10);
		LCD_Write_DATA(0x08);
		LCD_Write_DATA(0x80);
		LCD_Write_DATA(0x00);

		LCD_Write_COM(0x2A); //set_column_address
		LCD_Write_DATA(0x00);
		LCD_Write_DATA(0x00);
		LCD_Write_DATA(0x00);
		LCD_Write_DATA(0xeF);

		LCD_Write_COM(0x2B); //set_page_address
		LCD_Write_DATA(0x00);
		LCD_Write_DATA(0x00);
		LCD_Write_DATA(0x01);
	#ifdef MCUFRIEND_35_TFTLCD_FOR_ARDUINO_2560_INIT_LCD2
			LCD_Write_DATA(0x3F);
	#else
		LCD_Write_DATA(0x8F);
	#endif
		LCD_Write_COM(0x29); //set_display_on / display on
		LCD_Write_COM(0x2C); //write_memory_start / display on */

/*	  delay(200);

	    uint16_t a, d;

	    LCD_Write_COM(0x01);
	    LCD_Write_DATA(0x00);

	    delay(50);

	    LCD_Write_COM(0x28);
	    LCD_Write_DATA(0x00);

	    LCD_Write_COM(0xC0);
	    LCD_Write_DATA(0x23);

	    LCD_Write_COM(0xC1);
	    LCD_Write_DATA(0x10);

	    LCD_Write_COM(0xC5);
	    LCD_Write_DATA(0x2B);
	    LCD_Write_DATA(0x2B);

	    LCD_Write_COM(0xC7);
	    LCD_Write_DATA(0xC0);

	    LCD_Write_COM(0x36);
	    LCD_Write_DATA(0x88);

	    LCD_Write_COM(0x3A);
	    LCD_Write_DATA(0x55);

	    LCD_Write_COM(0xB1);
	    LCD_Write_DATA(0x00);
	    LCD_Write_DATA(0x1B);

	    LCD_Write_COM(0xB7);
	    LCD_Write_DATA(0x07);

	    LCD_Write_COM(0x11);
	    LCD_Write_DATA(0x00);

	    delay(150);

	    LCD_Write_COM(0x29);
	    LCD_Write_DATA(0x00);
	    delay(500);
	    */

	    //setAddrWindow(0, 0, TFTWIDTH-1, TFTHEIGHT-1);

	break;
