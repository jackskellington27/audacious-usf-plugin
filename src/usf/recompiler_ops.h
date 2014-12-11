/*
 * Project 64 - A Nintendo 64 emulator.
 *
 * (c) Copyright 2001 zilmar (zilmar@emulation64.com) and
 * Jabo (jabo@emulation64.com).
 *
 * pj64 homepage: www.pj64.net
 *
 * Permission to use, copy, modify and distribute Project64 in both binary and
 * source form, for non-commercial purposes, is hereby granted without fee,
 * providing that this license information and copyright notice appear with
 * all copies and any derived work.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event shall the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Project64 is freeware for PERSONAL USE only. Commercial users should
 * seek permission of the copyright holders first. Commercial use includes
 * charging money for Project64 or software derived from Project64.
 *
 * The copyright holders request that bug fixes and improvements to the code
 * should be forwarded to them so if they want them.
 *
 */  
void CompileReadTLBMiss(BLOCK_SECTION * Section, int32_t AddressReg,
			int32_t LookUpReg);

/************************** Branch functions  ************************/ 
void Compile_R4300i_Branch(BLOCK_SECTION * Section,
			   void (*CompareFunc) (BLOCK_SECTION * Section),
			   int32_t BranchType, uint32_t Link);

				  void (*CompareFunc) (BLOCK_SECTION *
						       Section),
				  uint32_t Link);









/*************************  OpCode functions *************************/ 
void Compile_R4300i_J(BLOCK_SECTION * Section);




















void Compile_R4300i_SB(BLOCK_SECTION * Section);
















/********************** R4300i OpCodes: Special **********************/ 
void Compile_R4300i_SPECIAL_SLL(BLOCK_SECTION * Section);













































/************************** COP0 functions **************************/ 
void Compile_R4300i_COP0_MF(BLOCK_SECTION * Section);


/************************** COP0 CO functions ***********************/ 
void Compile_R4300i_COP0_CO_TLBR(BLOCK_SECTION * Section);





/************************** COP1 functions **************************/ 
void Compile_R4300i_COP1_MF(BLOCK_SECTION * Section);






/************************** COP1: S functions ************************/ 
void Compile_R4300i_COP1_S_ADD(BLOCK_SECTION * Section);









void Compile_R4300i_COP1_S_FLOOR_L(BLOCK_SECTION * Section);	//added by Witten
void Compile_R4300i_COP1_S_ROUND_W(BLOCK_SECTION * Section);


void Compile_R4300i_COP1_S_FLOOR_W(BLOCK_SECTION * Section);





/************************** COP1: D functions ************************/ 
void Compile_R4300i_COP1_D_ADD(BLOCK_SECTION * Section);








void Compile_R4300i_COP1_D_CEIL_L(BLOCK_SECTION * Section);	//added by Witten
void Compile_R4300i_COP1_D_FLOOR_L(BLOCK_SECTION * Section);	//added by Witten
void Compile_R4300i_COP1_D_ROUND_W(BLOCK_SECTION * Section);


void Compile_R4300i_COP1_D_FLOOR_W(BLOCK_SECTION * Section);	//added by Witten
void Compile_R4300i_COP1_D_CVT_S(BLOCK_SECTION * Section);




/************************** COP1: W functions ************************/ 
void Compile_R4300i_COP1_W_CVT_S(BLOCK_SECTION * Section);


/************************** COP1: L functions ************************/ 
void Compile_R4300i_COP1_L_CVT_S(BLOCK_SECTION * Section);


/************************** Other functions **************************/ 
void Compile_R4300i_UnknownOpcode(BLOCK_SECTION * Section);
