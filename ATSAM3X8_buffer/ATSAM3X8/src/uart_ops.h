/*
 * uart.h
 *
 * Created: 2018/8/18 15:48:37
 *  Author: wangj
 */ 
#ifndef UART_OPS_H
#define UART_OPS_H

enum UART_OP_E {
	CONNECT = 0x09,
	ERASE = 0x0A,
	WRITE_ER_BUF = 0x2B,
	PROGRAM_ER = 0x0B,
	WRITE_EE_BUF = 0x3B,
	PROGRAM_EE = 0x1B,
	VERIFY_ER = 0x0C,
	VERIFY_ER_BUF = 0x2C,
	VERIFY_EE = 0x1C,
	VERIFY_EE_BUF = 0x3C,
	READ_ER_BUF = 0x2D,
	READ_ER = 0x0D,
	READ_EE_BUF = 0x3D,
	READ_EE = 0x1D
};

enum UART_STATUS_E {
	SUCCESS = 0x06,
	CONNECT_ERR = 0x90,
	ERASE_ERR = 0xA0,
	WRITE_ER_BUF_ERR = 0xB2,
	PROGRAM_ER_ERR = 0xB0,
	WRITE_EE_BUF_ERR = 0xB3,
	PROGRAM_EE_ERR = 0xB1,
	VERIFY_ER_BUF_ERR = 0xC2,
	VERIFY_ER_ERR = 0xC0,
	VERIFY_EE_BUF_ERR = 0xC3,
	VERIFY_EE_ERR = 0xC1,
	READ_ER_BUF_ERR = 0xD2,
	READ_ER_ERR = 0xD0,
	READ_EE_BUF_ERR = 0xD3,
	READ_EE_ERR = 0xD1,
	COMMAND_ERR = 0x66
};

extern struct chip_data_s chip_data;
extern struct uart_ops_s uart_ops;

int revert(unsigned char *data, unsigned long len);
unsigned long crc32_caculate(const unsigned char *data, size_t len);
int uart_ops_recv(void);
int uart_ops_handler(void);

#endif
