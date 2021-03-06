// Autogenerated C header file for CODAL Message Bus
#ifndef _JACDAC_SPEC_CODAL_MESSAGE_BUS_H
#define _JACDAC_SPEC_CODAL_MESSAGE_BUS_H 1

#define JD_SERVICE_CLASS_CODAL_MESSAGE_BUS  0x16ad7cd5

/**
 * Sends a new event on the message bus.
 */
#define JD_CODAL_MESSAGE_BUS_CMD_SEND 0x80
typedef struct jd_codal_message_bus_send {
    uint16_t id;
    uint16_t event;
} jd_codal_message_bus_send_t;


#endif
