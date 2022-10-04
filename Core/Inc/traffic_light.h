#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include <hardware/led.h>

enum Color { RED = 0, YELLOW = 1, GREEN = 2 };

typedef enum Color Color;

bool isButtonAllowed();
void trafficLightUpdate();
void trafficLightSetDuration(Color color, uint32_t duration);
uint32_t trafficLightGetDuration(Color color);
uint32_t getLedDuration(Color color);
void setLedDuration(Color color, int32_t duration);
void trafficLightStart();
void trafficLightInit(
		GPIO_TypeDef* red_port, uint16_t red_pin,
		GPIO_TypeDef* yellow_port, uint16_t yellow_pin,
		GPIO_TypeDef* green_port, uint16_t green_pin
);

#endif //TRAFFICLIGHT_H
