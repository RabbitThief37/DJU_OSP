#ifndef PMS_H
#define PMS_H

#include <stdint.h>

class PMS {
private:
	int fd;						// �ø������ ����
	uint8_t pms[32];			// PMS7003 ������ �迭
	int pm1, pm25, pm10;	// ���ʹ̼�����, �ʹ̼�����, �̼����� ��
	uint16_t checkcode;			// PMS7003 Checkcode ��
public:
	PMS();
	void PMSReceive();
	int getPM();
};

#endif // !PMS_H
