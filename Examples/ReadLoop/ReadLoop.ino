
// Include libraries this sketch will use
#include  <Wire.h>
#include  <MCP342X.h>

// Instantiate objects used in this project
MCP342X myADC;

void setup() {
  Wire.begin();  // join I2C bus
  TWBR = 12;  // 400 kHz (maximum)
  
  Serial.begin(9600); // Open serial connection to send info to the host
  while (!Serial) {}  // wait for Serial comms to become ready
  Serial.println("Starting up");
  Serial.println("Testing device connection...");
  
  myADC.configure( MCP342X_MODE_CONTINUOUS |
                   MCP342X_CHANNEL_1 |
                   MCP342X_SIZE_16BIT |
                   MCP342X_GAIN_1X
                 );
  
  Serial.print("ConfigRegShdw: 0b"); 
  Serial.println(myADC.getConfigRegShdw(), BIN); // verify the settings
  
  Serial.println(myADC.testConnection() ? "MCP342X connection successful" : "MCP342X connection failed");
  
}  // End of setup()

void loop() {
  static int16_t  result;
  
  myADC.startConversion();
  myADC.getResult(&result);
  
  Serial.println(result, HEX);
  
}  // End of loop()
