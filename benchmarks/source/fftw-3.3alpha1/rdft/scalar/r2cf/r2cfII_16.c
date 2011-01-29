/*
 * Copyright (c) 2003, 2007-8 Matteo Frigo
 * Copyright (c) 2003, 2007-8 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Sat Nov 15 20:59:38 EST 2008 */

#include "codelet-rdft.h"

#ifdef HAVE_FMA

/* Generated by: ../../../genfft/gen_r2cf -fma -reorder-insns -schedule-for-pipeline -compact -variables 4 -pipeline-latency 4 -n 16 -name r2cfII_16 -dft-II -include r2cfII.h */

/*
 * This function contains 66 FP additions, 48 FP multiplications,
 * (or, 18 additions, 0 multiplications, 48 fused multiply/add),
 * 54 stack variables, 7 constants, and 32 memory accesses
 */
#include "r2cfII.h"

static void r2cfII_16(R *R0, R *R1, R *Cr, R *Ci, stride rs, stride csr, stride csi, INT v, INT ivs, INT ovs)
{
     DK(KP980785280, +0.980785280403230449126182236134239036973933731);
     DK(KP198912367, +0.198912367379658006911597622644676228597850501);
     DK(KP831469612, +0.831469612302545237078788377617905756738560812);
     DK(KP923879532, +0.923879532511286756128183189396788286822416626);
     DK(KP668178637, +0.668178637919298919997757686523080761552472251);
     DK(KP414213562, +0.414213562373095048801688724209698078569671875);
     DK(KP707106781, +0.707106781186547524400844362104849039284835938);
     INT i;
     for (i = v; i > 0; i = i - 1, R0 = R0 + ivs, R1 = R1 + ivs, Cr = Cr + ovs, Ci = Ci + ovs, MAKE_VOLATILE_STRIDE(rs), MAKE_VOLATILE_STRIDE(csr), MAKE_VOLATILE_STRIDE(csi)) {
	  E TN, TF, TX, TV, TO, TP, TY, TM, TQ, TW;
	  {
	       E TT, TZ, TB, T5, Tu, TK, TJ, Tr, T9, TC, T8, Tl, TH, TG, Ti;
	       E Ta;
	       {
		    E T1, TR, Tn, Ts, To, TS, T4, Tp, T2, T3;
		    T1 = R0[0];
		    TR = R0[WS(rs, 4)];
		    T2 = R0[WS(rs, 2)];
		    T3 = R0[WS(rs, 6)];
		    Tn = R1[WS(rs, 7)];
		    Ts = R1[WS(rs, 3)];
		    To = R1[WS(rs, 1)];
		    TS = T2 + T3;
		    T4 = T2 - T3;
		    Tp = R1[WS(rs, 5)];
		    {
			 E Te, Tj, Tf, Tg, Tt, Tq;
			 Te = R1[0];
			 TT = FMA(KP707106781, TS, TR);
			 TZ = FNMS(KP707106781, TS, TR);
			 TB = FMA(KP707106781, T4, T1);
			 T5 = FNMS(KP707106781, T4, T1);
			 Tt = To + Tp;
			 Tq = To - Tp;
			 Tj = R1[WS(rs, 4)];
			 Tf = R1[WS(rs, 2)];
			 Tu = FNMS(KP707106781, Tt, Ts);
			 TK = FMA(KP707106781, Tt, Ts);
			 TJ = FMS(KP707106781, Tq, Tn);
			 Tr = FMA(KP707106781, Tq, Tn);
			 Tg = R1[WS(rs, 6)];
			 {
			      E T6, T7, Tk, Th;
			      T6 = R0[WS(rs, 5)];
			      T7 = R0[WS(rs, 1)];
			      T9 = R0[WS(rs, 3)];
			      Tk = Tf + Tg;
			      Th = Tf - Tg;
			      TC = FNMS(KP414213562, T6, T7);
			      T8 = FMA(KP414213562, T7, T6);
			      Tl = FNMS(KP707106781, Tk, Tj);
			      TH = FMA(KP707106781, Tk, Tj);
			      TG = FMA(KP707106781, Th, Te);
			      Ti = FNMS(KP707106781, Th, Te);
			      Ta = R0[WS(rs, 7)];
			 }
		    }
	       }
	       {
		    E TE, TU, Ty, Tv, TI, TL;
		    Ty = FNMS(KP668178637, Tr, Tu);
		    Tv = FMA(KP668178637, Tu, Tr);
		    {
			 E Tw, T14, T12, TA, T11, T13, Tx, Td;
			 {
			      E Tz, Tm, TD, Tb, T10, Tc;
			      Tz = FNMS(KP668178637, Ti, Tl);
			      Tm = FMA(KP668178637, Tl, Ti);
			      TD = FMS(KP414213562, T9, Ta);
			      Tb = FMA(KP414213562, Ta, T9);
			      Tw = Tm - Tv;
			      T14 = Tm + Tv;
			      T10 = TD - TC;
			      TE = TC + TD;
			      Tc = T8 - Tb;
			      TU = T8 + Tb;
			      T12 = Tz + Ty;
			      TA = Ty - Tz;
			      T11 = FMA(KP923879532, T10, TZ);
			      T13 = FNMS(KP923879532, T10, TZ);
			      Tx = FNMS(KP923879532, Tc, T5);
			      Td = FMA(KP923879532, Tc, T5);
			 }
			 Ci[WS(csi, 2)] = -(FMA(KP831469612, T14, T13));
			 Ci[WS(csi, 5)] = FNMS(KP831469612, T14, T13);
			 Cr[WS(csr, 1)] = FMA(KP831469612, Tw, Td);
			 Cr[WS(csr, 6)] = FNMS(KP831469612, Tw, Td);
			 Cr[WS(csr, 5)] = FNMS(KP831469612, TA, Tx);
			 Ci[WS(csi, 1)] = FMA(KP831469612, T12, T11);
			 Cr[WS(csr, 2)] = FMA(KP831469612, TA, Tx);
			 Ci[WS(csi, 6)] = FMS(KP831469612, T12, T11);
		    }
		    TN = FNMS(KP923879532, TE, TB);
		    TF = FMA(KP923879532, TE, TB);
		    TX = FNMS(KP923879532, TU, TT);
		    TV = FMA(KP923879532, TU, TT);
		    TO = FMA(KP198912367, TG, TH);
		    TI = FNMS(KP198912367, TH, TG);
		    TL = FMA(KP198912367, TK, TJ);
		    TP = FNMS(KP198912367, TJ, TK);
		    TY = TL - TI;
		    TM = TI + TL;
	       }
	  }
	  Ci[WS(csi, 4)] = FMS(KP980785280, TY, TX);
	  Ci[WS(csi, 3)] = FMA(KP980785280, TY, TX);
	  Cr[0] = FMA(KP980785280, TM, TF);
	  Cr[WS(csr, 7)] = FNMS(KP980785280, TM, TF);
	  TQ = TO - TP;
	  TW = TO + TP;
	  Ci[0] = -(FMA(KP980785280, TW, TV));
	  Ci[WS(csi, 7)] = FNMS(KP980785280, TW, TV);
	  Cr[WS(csr, 3)] = FMA(KP980785280, TQ, TN);
	  Cr[WS(csr, 4)] = FNMS(KP980785280, TQ, TN);
     }
}

static const kr2c_desc desc = { 16, "r2cfII_16", {18, 0, 48, 0}, &GENUS };

void X(codelet_r2cfII_16) (planner *p) {
     X(kr2c_register) (p, r2cfII_16, &desc);
}

#else				/* HAVE_FMA */

/* Generated by: ../../../genfft/gen_r2cf -compact -variables 4 -pipeline-latency 4 -n 16 -name r2cfII_16 -dft-II -include r2cfII.h */

/*
 * This function contains 66 FP additions, 30 FP multiplications,
 * (or, 54 additions, 18 multiplications, 12 fused multiply/add),
 * 32 stack variables, 7 constants, and 32 memory accesses
 */
#include "r2cfII.h"

static void r2cfII_16(R *R0, R *R1, R *Cr, R *Ci, stride rs, stride csr, stride csi, INT v, INT ivs, INT ovs)
{
     DK(KP555570233, +0.555570233019602224742830813948532874374937191);
     DK(KP831469612, +0.831469612302545237078788377617905756738560812);
     DK(KP980785280, +0.980785280403230449126182236134239036973933731);
     DK(KP195090322, +0.195090322016128267848284868477022240927691618);
     DK(KP382683432, +0.382683432365089771728459984030398866761344562);
     DK(KP923879532, +0.923879532511286756128183189396788286822416626);
     DK(KP707106781, +0.707106781186547524400844362104849039284835938);
     INT i;
     for (i = v; i > 0; i = i - 1, R0 = R0 + ivs, R1 = R1 + ivs, Cr = Cr + ovs, Ci = Ci + ovs, MAKE_VOLATILE_STRIDE(rs), MAKE_VOLATILE_STRIDE(csr), MAKE_VOLATILE_STRIDE(csi)) {
	  E T5, T11, TB, TV, Tr, TK, Tu, TJ, Ti, TH, Tl, TG, Tc, T10, TE;
	  E TS;
	  {
	       E T1, TU, T4, TT, T2, T3;
	       T1 = R0[0];
	       TU = R0[WS(rs, 4)];
	       T2 = R0[WS(rs, 2)];
	       T3 = R0[WS(rs, 6)];
	       T4 = KP707106781 * (T2 - T3);
	       TT = KP707106781 * (T2 + T3);
	       T5 = T1 + T4;
	       T11 = TU - TT;
	       TB = T1 - T4;
	       TV = TT + TU;
	  }
	  {
	       E Tq, Tt, Tp, Ts, Tn, To;
	       Tq = R1[WS(rs, 7)];
	       Tt = R1[WS(rs, 3)];
	       Tn = R1[WS(rs, 1)];
	       To = R1[WS(rs, 5)];
	       Tp = KP707106781 * (Tn - To);
	       Ts = KP707106781 * (Tn + To);
	       Tr = Tp - Tq;
	       TK = Tt - Ts;
	       Tu = Ts + Tt;
	       TJ = Tp + Tq;
	  }
	  {
	       E Te, Tk, Th, Tj, Tf, Tg;
	       Te = R1[0];
	       Tk = R1[WS(rs, 4)];
	       Tf = R1[WS(rs, 2)];
	       Tg = R1[WS(rs, 6)];
	       Th = KP707106781 * (Tf - Tg);
	       Tj = KP707106781 * (Tf + Tg);
	       Ti = Te + Th;
	       TH = Tk - Tj;
	       Tl = Tj + Tk;
	       TG = Te - Th;
	  }
	  {
	       E T8, TC, Tb, TD;
	       {
		    E T6, T7, T9, Ta;
		    T6 = R0[WS(rs, 1)];
		    T7 = R0[WS(rs, 5)];
		    T8 = FNMS(KP382683432, T7, KP923879532 * T6);
		    TC = FMA(KP382683432, T6, KP923879532 * T7);
		    T9 = R0[WS(rs, 3)];
		    Ta = R0[WS(rs, 7)];
		    Tb = FNMS(KP923879532, Ta, KP382683432 * T9);
		    TD = FMA(KP923879532, T9, KP382683432 * Ta);
	       }
	       Tc = T8 + Tb;
	       T10 = Tb - T8;
	       TE = TC - TD;
	       TS = TC + TD;
	  }
	  {
	       E Td, TW, Tw, TR, Tm, Tv;
	       Td = T5 - Tc;
	       TW = TS + TV;
	       Tm = FMA(KP195090322, Ti, KP980785280 * Tl);
	       Tv = FNMS(KP980785280, Tu, KP195090322 * Tr);
	       Tw = Tm + Tv;
	       TR = Tv - Tm;
	       Cr[WS(csr, 4)] = Td - Tw;
	       Ci[WS(csi, 7)] = TR + TW;
	       Cr[WS(csr, 3)] = Td + Tw;
	       Ci[0] = TR - TW;
	  }
	  {
	       E Tx, TY, TA, TX, Ty, Tz;
	       Tx = T5 + Tc;
	       TY = TV - TS;
	       Ty = FNMS(KP195090322, Tl, KP980785280 * Ti);
	       Tz = FMA(KP980785280, Tr, KP195090322 * Tu);
	       TA = Ty + Tz;
	       TX = Tz - Ty;
	       Cr[WS(csr, 7)] = Tx - TA;
	       Ci[WS(csi, 3)] = TX + TY;
	       Cr[0] = Tx + TA;
	       Ci[WS(csi, 4)] = TX - TY;
	  }
	  {
	       E TF, T12, TM, TZ, TI, TL;
	       TF = TB + TE;
	       T12 = T10 - T11;
	       TI = FMA(KP831469612, TG, KP555570233 * TH);
	       TL = FMA(KP831469612, TJ, KP555570233 * TK);
	       TM = TI - TL;
	       TZ = TI + TL;
	       Cr[WS(csr, 6)] = TF - TM;
	       Ci[WS(csi, 2)] = T12 - TZ;
	       Cr[WS(csr, 1)] = TF + TM;
	       Ci[WS(csi, 5)] = -(TZ + T12);
	  }
	  {
	       E TN, T14, TQ, T13, TO, TP;
	       TN = TB - TE;
	       T14 = T10 + T11;
	       TO = FNMS(KP555570233, TJ, KP831469612 * TK);
	       TP = FNMS(KP555570233, TG, KP831469612 * TH);
	       TQ = TO - TP;
	       T13 = TP + TO;
	       Cr[WS(csr, 5)] = TN - TQ;
	       Ci[WS(csi, 1)] = T13 + T14;
	       Cr[WS(csr, 2)] = TN + TQ;
	       Ci[WS(csi, 6)] = T13 - T14;
	  }
     }
}

static const kr2c_desc desc = { 16, "r2cfII_16", {54, 18, 12, 0}, &GENUS };

void X(codelet_r2cfII_16) (planner *p) {
     X(kr2c_register) (p, r2cfII_16, &desc);
}

#endif				/* HAVE_FMA */
