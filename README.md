MCP342X Analog-to-Digital Converter Library
===============

This is an Arduino library for interfacing to Microchip's MCP342X series of ADCs.  The following devices are supported.

    MCP3421	18-bit, 1-channel
    MCP3422	18-bit, 2-channel
    MCP3423	18-bit, 2-channel, multi-address
    MCP3424	18-bit, 4-channel, multi-address
    MCP3425	16-bit, 1-channel
    MCP3426	16-bit, 2-channel
    MCP3427	16-bit, 2-channel, multi-address
    MCP3428	16-bit, 4-channel, multi-address

The ADCs communicate over the I2C bus.  This library uses the Arduino Wire.h library for that communication.

This code is (c) copyright 2013, C. Schnarel.  See the attached license.txt file for distribution and derivative permissions.
