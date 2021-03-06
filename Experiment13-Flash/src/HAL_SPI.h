// File:  HAL_SPI.h
// Author: JSpicer
// Date:  11/11/17
// Purpose: SPI utilities
// Hardware:  TM4C123 Tiva board

#ifndef SPI_HAL_H
#define SPI_HAL_H

#include <stdint.h>


typedef enum {
	SSI0 = 0,
	SSI1 = 1,
	SSI2 = 2,
	SSI3 = 3
} SSIModule_t;

int SPI_Enable(SSIModule_t module);
void SPI_Write(SSIModule_t module, uint8_t data);

#endif
