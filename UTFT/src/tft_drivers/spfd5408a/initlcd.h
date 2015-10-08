case SPFD5408A:
	LCD_Write_COM_DATA(0xe5, 0x8000);        
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
	break;
	