// Header file for the ColorMatch application
// This file is generated by the ColorMatch Application in Learn Mode

// Calibration data
sensorData sdBlack = { 7770, 6720, 8840 };
sensorData sdWhite = { 54390, 51740, 69490 };

// Color Table for matching
typedef struct
{
  char    name[9];  // color name 8+nul
  colorData rgb;    // RGB value
} colorTable;

colorTable ct[] = 
{
  {"WHITE", {255, 255, 255} },
  {"BLACK", {0, 0, 0} },
  {"YELLOW", {53, 30, 7} },
  {"ORANGE", {46, 8, 3} },
  {"RED", {23, 1, 2} },
  {"GREEN", {17, 26, 7} },
  {"BLUE", {2, 11, 25} },
  {"BROWN", {8, 0, 0} },
};
	