/*
	Copyright (c) 1999-2008, Phillip Stanley-Marbell (author)
 
	All rights reserved.

	Redistribution and use in source and binary forms, with or without 
	modification, are permitted provided that the following conditions
	are met:

	*	Redistributions of source code must retain the above
		copyright notice, this list of conditions and the following
		disclaimer.

	*	Redistributions in binary form must reproduce the above
		copyright notice, this list of conditions and the following
		disclaimer in the documentation and/or other materials
		provided with the distribution.

	*	Neither the name of the author nor the names of its
		contributors may be used to endorse or promote products
		derived from this software without specific prior written 
		permission.

	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
	"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
	LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
	FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE 
	COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
	INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
	BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
	LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER 
	CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
	LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN 
	ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
	POSSIBILITY OF SUCH DAMAGE.
*/

enum
{
	OP_ADD,
	OP_ADDC,
	OP_ADDI,
	OP_ADDV,
	OP_AND,
	OP_ANDI,
	OP_ANDM,
	OP_BF,
	OP_BFTAKEN,
	OP_BFUNTAKEN,
	OP_BFS,
	OP_BFSTAKEN,
	OP_BFSUNTAKEN,
	OP_BRA,
	OP_BRAF,
	OP_BSR,
	OP_BSRF,
	OP_BT,
	OP_BTTAKEN,
	OP_BTUNTAKEN,
	OP_BTS,
	OP_BTSTAKEN,
	OP_BTSUNTAKEN,
	OP_CLRMAC,
	OP_CLRS,
	OP_CLRT,
	OP_CMPEQ,
	OP_CMPEQEQ,
	OP_CMPEQNEQ,
	OP_CMPGE,
	OP_CMPGEGE,
	OP_CMPGENGE,
	OP_CMPGT,
	OP_CMPGTGT,
	OP_CMPGTNGT,
	OP_CMPHI,
	OP_CMPHIHI,
	OP_CMPHINHI,
	OP_CMPHS,
	OP_CMPHSHS,
	OP_CMPHSNHS,
	OP_CMPIM,
	OP_CMPIMIM,
	OP_CMPIMNIM,
	OP_CMPPL,
	OP_CMPPLPL,
	OP_CMPPLNPL,
	OP_CMPPZ,
	OP_CMPPZPZ,
	OP_CMPPZNPZ,
	OP_CMPSTR,
	OP_CMPSTRSTR,
	OP_CMPSTRNSTR,
	OP_DIV0S,
	OP_DIV0U,
	OP_DIV1,
	OP_DMULS,
	OP_DMULU,
	OP_DT,
	OP_EXTSB,
	OP_EXTSW,
	OP_EXTUB,
	OP_EXTUW,
	OP_JMP,
	OP_JSR,
	OP_LDCGBR,
	OP_LDCMGBR,
	OP_LDCMRBANK,
	OP_LDCMRBANK0,
	OP_LDCMRBANK1,
	OP_LDCMSPC,
	OP_LDCMSR,
	OP_LDCMSSR,
	OP_LDCMVBR,
	OP_LDCRBANK,
	OP_LDCRBANK0,
	OP_LDCRBANK1,
	OP_LDCSPC,
	OP_LDCSR,
	OP_LDCSSR,
	OP_LDCVBR,
	OP_LDSMACH,
	OP_LDSMACL,
	OP_LDSMMACH,
	OP_LDSMMACL,
	OP_LDSMPR,
	OP_LDSPR,
	OP_LDTLB,
	OP_MACL,
	OP_MACW,
	OP_MOV,
	OP_MOVA,
	OP_MOVBL,
	OP_MOVBL0,
	OP_MOVBL4,
	OP_MOVBLG,
	OP_MOVBM,
	OP_MOVBP,
	OP_MOVBS,
	OP_MOVBS0,
	OP_MOVBS4,
	OP_MOVBSG,
	OP_MOVI,
	OP_MOVLI,
	OP_MOVLL,
	OP_MOVLL0,
	OP_MOVLL4,
	OP_MOVLLG,
	OP_MOVLM,
	OP_MOVLP,
	OP_MOVLS,
	OP_MOVLS0,
	OP_MOVLS4,
	OP_MOVLSG,
	OP_MOVT,
	OP_MOVWI,
	OP_MOVWL,
	OP_MOVWL0,
	OP_MOVWL4,
	OP_MOVWLG,
	OP_MOVWM,
	OP_MOVWP,
	OP_MOVWS,
	OP_MOVWS0,
	OP_MOVWS4,
	OP_MOVWSG,
	OP_MULL,
	OP_MULS,
	OP_MULU,
	OP_NEG,
	OP_NEGC,
	OP_NOP,
	OP_NOT,
	OP_OR,
	OP_ORI,
	OP_ORM,
	OP_PREF,
	OP_RFG,
	OP_ROTCL,
	OP_ROTCR,
	OP_ROTL,
	OP_ROTR,
	OP_RTE,
	OP_RTS,
	OP_SETS,
	OP_SETT,
	OP_SHAD,
	OP_SHAL,
	OP_SHAR,
	OP_SHLD,
	OP_SHLL,
	OP_SHLL16,
	OP_SHLL2,
	OP_SHLL8,
	OP_SHLR,
	OP_SHLR16,
	OP_SHLR2,
	OP_SHLR8,
	OP_SLEEP,
	OP_STCGBR,
	OP_STCMGBR,
	OP_STCMRBANK,
	OP_STCMRBANK0,
	OP_STCMRBANK1,
	OP_STCMSPC,
	OP_STCMSR,
	OP_STCMSSR,
	OP_STCMVBR,
	OP_STCRBANK,
	OP_STCRBANK0,
	OP_STCRBANK1,
	OP_STCSPC,
	OP_STCSR,
	OP_STCSSR,
	OP_STCVBR,
	OP_STSMACH,
	OP_STSMACL,
	OP_STSMMACH,
	OP_STSMMACL,
	OP_STSMPR,
	OP_STSPR,
	OP_SUB,
	OP_SUBC,
	OP_SUBV,
	OP_SWAPB,
	OP_SWAPW,
	OP_TAS,
	OP_TRAPA,
	OP_TST,
	OP_TSTSET,
	OP_TSTNOSET,
	OP_TSTI,
	OP_TSTISET,
	OP_TSTINOSET,
	OP_TSTM,
	OP_TSTMSET,
	OP_TSTMNOSET,
	OP_XOR,
	OP_XORI,
	OP_XORM,
	OP_XTRCT,

	OP_MAX,
};