#pragma once

// Main virtual protect offsets
#define oMainEntryPoint						0x00401000			// Application entry point
#define oMainEndPoint						0x00D21FFF 			// Application end point

// Main Crack
#define oMainCrack1							0x004D1E69 			// MU.exe call disable
#define oMainCrack2							0x004D2246			// Config.ini read error
#define oMainCrack3_1						0x004D228D			// GG Init error (1)
#define oMainCrack3_2						0x004D228D+1		// GG Init error (2)
#define oMainCrack3_3						0x004D228D+2		// GG Init error (4)
#define oMainCrack3_4						0x004D228D+5		// GG Init error (5)

#define oMainCrack_4_1						0x004D559C			// ByPass Resource Guard
#define oMainCrack_4_2						0x00633F7A			// ByPass Resource Guard
#define oMainCrack_4_3						0x00634403			// ByPass Resource Guard
#define oMainCrack_4_4						0x0063E6C4			// ByPass Resource Guard

#define oMainCrack_5_1						0x004D556F			// ByPass Game Guard SetMemory ASM:NOP (Size 5)
#define oMainCrack_5_2						0x00633F4D			// ByPass Game Guard SetMemory ASM:NOP (Size 5)
#define oMainCrack_5_3						0x006343D6			// ByPass Game Guard SetMemory ASM:NOP (Size 5)
#define oMainCrack_5_4						0x0063E697			// ByPass Game Guard SetMemory ASM:NOP (Size 5)

#define oWebCheck							0x004D9D24			// Disable web check
#define oAccountField						0x0040AF09+1		// (+1) Enable account field

#define oCMStarterA							0x0040B4BA+2		// SetWord 0x350 
#define oCMStarterB							0x0040B4C3+2		// SetWord 0x350 
#define oCMStarterC							0x0040B4CD+2		// SetByte 0x18 

#define oFixTerrainFiles_1					0x0062EBF8			// SetByte 0xEB
#define oFixTerrainFiles_2					0x0062EBFE			// SetByte 0xEB
#define oFixTerrainFiles_3					0x0062EE42			// SetByte 0xEB
#define oFixTerrainFiles_4					0x0062EE48			// SetByte 0xEB
#define oFixTerrainFiles_5					0x0062EEE5			// SetByte 0xEB
#define oFixTerrainFiles_6					0x0062EEEB			// SetByte 0xEB

#define oFixTextBMD							0x007E34EF			// SetByte 0xEB

#define oFixTabKeyLogin						0x0040B154			// Size 5
#define oAllowTabSwithLoginJMP				0x0040B16F 			// JMP to this offset
#define oFixTabKeyLogin_Byte				0x58				// Change according version to work!