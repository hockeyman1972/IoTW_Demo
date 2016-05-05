#ifndef GPIO_DEVICES_H_
#define GPIO_DEVICES_H_

#define GPIO_LED 47
#define GPIO_PB  51

// #define GPIO_BASE 906                   // PetaLinux 2015.2.1
#define GPIO_BASE 0                     // Pulsar 7
#define GPIO_ROOT "/sys/class/gpio"
#define POLL_DELAY_USECS (500000)

int open_gpio_channel(int gpio_base);
int close_gpio_channel(int gpio_base);
int set_gpio_direction(int gpio_base, int nchannel, char *direction);
int set_gpio_value(int gpio_base, int nchannel, int value);
int get_gpio_value(int gpio_base, int nchannel);


#endif /* GPIO_DEVICES_H_ */
