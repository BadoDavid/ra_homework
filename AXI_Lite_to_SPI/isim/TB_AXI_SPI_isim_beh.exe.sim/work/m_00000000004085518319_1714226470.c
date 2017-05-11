/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Projektek/ra_homework/AXI_Lite_to_SPI/M_SpiSender.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {32U, 0U};
static unsigned int ng8[] = {4U, 0U};
static int ng9[] = {3, 0};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {16U, 0U};
static int ng12[] = {5, 0};
static unsigned int ng13[] = {255U, 0U};
static int ng14[] = {8, 0};



static void Always_60_0(char *t0)
{
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;

LAB0:    t1 = (t0 + 7568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 9128);
    *((int *)t2) = 1;
    t3 = (t0 + 7600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 5528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(63, ng0);

LAB9:    xsi_set_current_line(64, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 5688);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(68, ng0);
    t6 = (t0 + 5688);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    t14 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t13, 4, t14, 32);
    t16 = (t0 + 5688);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 4, 0LL);
    goto LAB12;

}

static void Always_73_1(char *t0)
{
    char t4[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 7816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 9144);
    *((int *)t2) = 1;
    t3 = (t0 + 7848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);
    t5 = (t0 + 3048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 3U);

LAB5:    t14 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t14, 2);
    if (t15 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(81, ng0);
    t16 = (t0 + 5688);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t20 = (t19 + 4);
    t21 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 0);
    t24 = (t23 & 1);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 0);
    t27 = (t26 & 1);
    *((unsigned int *)t20) = t27;
    t28 = (t0 + 5848);
    xsi_vlogvar_wait_assign_value(t28, t19, 0, 0, 1, 0LL);
    goto LAB14;

LAB8:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 5688);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t19, 0, 8);
    t7 = (t19 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t19) = t10;
    t11 = *((unsigned int *)t14);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t7) = t13;
    t16 = (t0 + 5848);
    xsi_vlogvar_wait_assign_value(t16, t19, 0, 0, 1, 0LL);
    goto LAB14;

LAB10:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 5688);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t19, 0, 8);
    t7 = (t19 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t19) = t10;
    t11 = *((unsigned int *)t14);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t7) = t13;
    t16 = (t0 + 5848);
    xsi_vlogvar_wait_assign_value(t16, t19, 0, 0, 1, 0LL);
    goto LAB14;

LAB12:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 5688);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t19, 0, 8);
    t7 = (t19 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t19) = t10;
    t11 = *((unsigned int *)t14);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t7) = t13;
    t16 = (t0 + 5848);
    xsi_vlogvar_wait_assign_value(t16, t19, 0, 0, 1, 0LL);
    goto LAB14;

}

static void Cont_88_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;

LAB0:    t1 = (t0 + 8064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3688U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t37 = *((unsigned int *)t4);
    t38 = (~(t37));
    t39 = *((unsigned int *)t12);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t43, 8);

LAB16:    t44 = (t0 + 9288);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 1U;
    t50 = t49;
    t51 = (t3 + 4);
    t52 = *((unsigned int *)t3);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans(t44, 0, 0);
    t57 = (t0 + 9160);
    *((int *)t57) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 5848);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t16, 0, 8);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t20) == 0)
        goto LAB17;

LAB19:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;

LAB20:    t27 = (t16 + 4);
    t28 = (t19 + 4);
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    *((unsigned int *)t16) = t30;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB22;

LAB21:    t35 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t35 & 1U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 & 1U);
    goto LAB9;

LAB10:    t41 = (t0 + 5848);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t43, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t16) = 1;
    goto LAB20;

LAB22:    t31 = *((unsigned int *)t16);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t16) = (t31 | t32);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t33 | t34);
    goto LAB21;

}

static void Always_109_3(char *t0)
{
    char t14[8];
    char t33[8];
    char t34[8];
    char t56[8];
    char t64[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;

LAB0:    t1 = (t0 + 8312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 9176);
    *((int *)t2) = 1;
    t3 = (t0 + 8344);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(110, ng0);
    t4 = (t0 + 2568U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 6648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB9:    t5 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 8);
    if (t13 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:    xsi_set_current_line(208, ng0);

LAB127:    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB24:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(110, ng0);

LAB8:    xsi_set_current_line(111, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 4728);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB7;

LAB10:    xsi_set_current_line(119, ng0);

LAB25:    xsi_set_current_line(120, ng0);
    t11 = (t0 + 2728U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t15 = (t12 + 4);
    t16 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t15);
    t10 = *((unsigned int *)t16);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB29;

LAB26:    if (t21 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t14) = 1;

LAB29:    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB32:    goto LAB24;

LAB12:    xsi_set_current_line(155, ng0);

LAB65:    xsi_set_current_line(158, ng0);
    t3 = (t0 + 6488);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng9)));
    memset(t14, 0, 8);
    t15 = (t11 + 4);
    t16 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t15);
    t10 = *((unsigned int *)t16);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB69;

LAB66:    if (t21 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t14) = 1;

LAB69:    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 6488);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 3, t11, 32);
    t12 = (t0 + 6488);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 3, 0LL);

LAB72:    goto LAB24;

LAB14:    xsi_set_current_line(163, ng0);

LAB73:    xsi_set_current_line(164, ng0);
    t3 = (t0 + 6328);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng10)));
    memset(t14, 0, 8);
    t15 = (t11 + 4);
    t16 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t15);
    t10 = *((unsigned int *)t16);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB77;

LAB74:    if (t21 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t14) = 1;

LAB77:    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB78;

LAB79:
LAB80:    goto LAB24;

LAB16:    xsi_set_current_line(176, ng0);

LAB90:    xsi_set_current_line(179, ng0);
    t3 = (t0 + 6488);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng12)));
    memset(t14, 0, 8);
    t15 = (t11 + 4);
    t16 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t15);
    t10 = *((unsigned int *)t16);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB94;

LAB91:    if (t21 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t14) = 1;

LAB94:    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB95;

LAB96:    xsi_set_current_line(185, ng0);
    t2 = (t0 + 6488);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 3, t11, 32);
    t12 = (t0 + 6488);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 3, 0LL);

LAB97:    goto LAB24;

LAB18:    xsi_set_current_line(187, ng0);

LAB99:    xsi_set_current_line(188, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 5368);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 5048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB103;

LAB100:    if (t21 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t14) = 1;

LAB103:    memset(t33, 0, 8);
    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t24) != 0)
        goto LAB106;

LAB107:    t31 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = *((unsigned int *)t31);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB108;

LAB109:    memcpy(t64, t33, 8);

LAB110:    t95 = (t64 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t64);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB122;

LAB123:
LAB124:    goto LAB24;

LAB20:    xsi_set_current_line(200, ng0);

LAB126:    xsi_set_current_line(201, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5528);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB24;

LAB28:    t24 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(121, ng0);

LAB33:    xsi_set_current_line(122, ng0);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 5368);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB37;

LAB34:    if (t21 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t14) = 1;

LAB37:    t15 = (t14 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB38;

LAB39:
LAB40:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB45;

LAB42:    if (t21 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t14) = 1;

LAB45:    t15 = (t14 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 5048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB53;

LAB50:    if (t21 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t14) = 1;

LAB53:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB54;

LAB55:
LAB56:
LAB48:    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 4728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB60;

LAB57:    if (t21 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t14) = 1;

LAB60:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB63:    goto LAB32;

LAB36:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(126, ng0);

LAB41:    xsi_set_current_line(128, ng0);
    t16 = ((char*)((ng4)));
    t24 = (t0 + 3208U);
    t25 = *((char **)t24);
    memset(t34, 0, 8);
    t24 = (t34 + 4);
    t31 = (t25 + 4);
    t35 = *((unsigned int *)t25);
    t36 = (t35 >> 0);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t31);
    t38 = (t37 >> 0);
    *((unsigned int *)t24) = t38;
    t39 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t39 & 127U);
    t40 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t40 & 127U);
    xsi_vlogtype_concat(t33, 8, 8, 2U, t34, 7, t16, 1);
    t32 = (t0 + 6008);
    xsi_vlogvar_wait_assign_value(t32, t33, 0, 0, 8, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3208U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 7);
    t17 = (t10 & 1);
    *((unsigned int *)t2) = t17;
    t11 = (t0 + 4888);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    goto LAB40;

LAB44:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(133, ng0);

LAB49:    xsi_set_current_line(134, ng0);
    t16 = ((char*)((ng2)));
    t24 = (t0 + 5048);
    xsi_vlogvar_wait_assign_value(t24, t16, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB48;

LAB52:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(138, ng0);
    t25 = (t0 + 5208);
    t31 = (t25 + 56U);
    t32 = *((char **)t31);
    t41 = ((char*)((ng2)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t32, 2, t41, 32);
    t42 = (t0 + 5208);
    xsi_vlogvar_wait_assign_value(t42, t33, 0, 0, 2, 0LL);
    goto LAB56;

LAB59:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(144, ng0);

LAB64:    xsi_set_current_line(145, ng0);
    t25 = ((char*)((ng1)));
    t31 = (t0 + 4728);
    xsi_vlogvar_wait_assign_value(t31, t25, 0, 0, 1, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB63;

LAB68:    t24 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(159, ng0);
    t31 = ((char*)((ng8)));
    t32 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 8, 0LL);
    goto LAB72;

LAB76:    t24 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(165, ng0);

LAB81:    xsi_set_current_line(166, ng0);
    t31 = (t0 + 6168);
    t32 = (t31 + 56U);
    t41 = *((char **)t32);
    t42 = (t0 + 4248);
    xsi_vlogvar_wait_assign_value(t42, t41, 0, 0, 8, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB85;

LAB82:    if (t21 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t14) = 1;

LAB85:    t15 = (t14 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB88:    goto LAB80;

LAB84:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB85;

LAB86:    xsi_set_current_line(168, ng0);

LAB89:    xsi_set_current_line(169, ng0);
    t16 = ((char*)((ng1)));
    t24 = (t0 + 6488);
    xsi_vlogvar_wait_assign_value(t24, t16, 0, 0, 3, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB88;

LAB93:    t24 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB94;

LAB95:    xsi_set_current_line(180, ng0);

LAB98:    xsi_set_current_line(181, ng0);
    t31 = ((char*)((ng11)));
    t32 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 8, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB97;

LAB102:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB103;

LAB104:    *((unsigned int *)t33) = 1;
    goto LAB107;

LAB106:    t25 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB107;

LAB108:    t32 = (t0 + 5208);
    t41 = (t32 + 56U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng6)));
    memset(t34, 0, 8);
    t44 = (t42 + 4);
    t45 = (t43 + 4);
    t38 = *((unsigned int *)t42);
    t39 = *((unsigned int *)t43);
    t40 = (t38 ^ t39);
    t46 = *((unsigned int *)t44);
    t47 = *((unsigned int *)t45);
    t48 = (t46 ^ t47);
    t49 = (t40 | t48);
    t50 = *((unsigned int *)t44);
    t51 = *((unsigned int *)t45);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB114;

LAB111:    if (t52 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t34) = 1;

LAB114:    memset(t56, 0, 8);
    t57 = (t34 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t34);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t57) != 0)
        goto LAB117;

LAB118:    t65 = *((unsigned int *)t33);
    t66 = *((unsigned int *)t56);
    t67 = (t65 & t66);
    *((unsigned int *)t64) = t67;
    t68 = (t33 + 4);
    t69 = (t56 + 4);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB119;

LAB120:
LAB121:    goto LAB110;

LAB113:    t55 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB114;

LAB115:    *((unsigned int *)t56) = 1;
    goto LAB118;

LAB117:    t63 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB118;

LAB119:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    t78 = (t33 + 4);
    t79 = (t56 + 4);
    t80 = *((unsigned int *)t33);
    t81 = (~(t80));
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t56);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (~(t86));
    t13 = (t81 & t83);
    t88 = (t85 & t87);
    t89 = (~(t13));
    t90 = (~(t88));
    t91 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t91 & t89);
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t93 & t89);
    t94 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t94 & t90);
    goto LAB121;

LAB122:    xsi_set_current_line(194, ng0);

LAB125:    xsi_set_current_line(195, ng0);
    t101 = ((char*)((ng2)));
    t102 = (t0 + 4568);
    xsi_vlogvar_wait_assign_value(t102, t101, 0, 0, 1, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB124;

}

static void Always_220_4(char *t0)
{
    char t6[8];
    char t30[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char t92[8];
    char t107[8];
    char t123[8];
    char t139[8];
    char t155[8];
    char t163[8];
    char t195[8];
    char t203[8];
    char t237[8];
    char t240[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    int t187;
    int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;
    char *t208;
    char *t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;
    char *t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    char *t238;
    char *t239;
    char *t241;
    char *t242;
    char *t243;
    char *t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    char *t251;

LAB0:    t1 = (t0 + 8560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(220, ng0);
    t2 = (t0 + 9192);
    *((int *)t2) = 1;
    t3 = (t0 + 8592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(221, ng0);

LAB5:    xsi_set_current_line(222, ng0);
    t4 = (t0 + 2568U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 3848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    memset(t30, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t8) != 0)
        goto LAB20;

LAB21:    t22 = (t30 + 4);
    t31 = *((unsigned int *)t30);
    t32 = *((unsigned int *)t22);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB22;

LAB23:    memcpy(t60, t30, 8);

LAB24:    memset(t92, 0, 8);
    t93 = (t60 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t60);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t93) != 0)
        goto LAB38;

LAB39:    t100 = (t92 + 4);
    t101 = *((unsigned int *)t92);
    t102 = (!(t101));
    t103 = *((unsigned int *)t100);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB40;

LAB41:    memcpy(t203, t92, 8);

LAB42:    t231 = (t203 + 4);
    t232 = *((unsigned int *)t231);
    t233 = (~(t232));
    t234 = *((unsigned int *)t203);
    t235 = (t234 & t233);
    t236 = (t235 != 0);
    if (t236 > 0)
        goto LAB72;

LAB73:
LAB74:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(223, ng0);

LAB13:    xsi_set_current_line(224, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 6328);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t30) = 1;
    goto LAB21;

LAB20:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB21;

LAB22:    t28 = (t0 + 5848);
    t29 = (t28 + 56U);
    t34 = *((char **)t29);
    t35 = ((char*)((ng2)));
    memset(t36, 0, 8);
    t37 = (t34 + 4);
    t38 = (t35 + 4);
    t39 = *((unsigned int *)t34);
    t40 = *((unsigned int *)t35);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB28;

LAB25:    if (t48 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t36) = 1;

LAB28:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t53) != 0)
        goto LAB31;

LAB32:    t61 = *((unsigned int *)t30);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t30 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB24;

LAB27:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t52) = 1;
    goto LAB32;

LAB31:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB32;

LAB33:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t30 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t30);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB35;

LAB36:    *((unsigned int *)t92) = 1;
    goto LAB39;

LAB38:    t99 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB39;

LAB40:    t105 = (t0 + 3848U);
    t106 = *((char **)t105);
    t105 = ((char*)((ng2)));
    memset(t107, 0, 8);
    t108 = (t106 + 4);
    t109 = (t105 + 4);
    t110 = *((unsigned int *)t106);
    t111 = *((unsigned int *)t105);
    t112 = (t110 ^ t111);
    t113 = *((unsigned int *)t108);
    t114 = *((unsigned int *)t109);
    t115 = (t113 ^ t114);
    t116 = (t112 | t115);
    t117 = *((unsigned int *)t108);
    t118 = *((unsigned int *)t109);
    t119 = (t117 | t118);
    t120 = (~(t119));
    t121 = (t116 & t120);
    if (t121 != 0)
        goto LAB46;

LAB43:    if (t119 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t107) = 1;

LAB46:    memset(t123, 0, 8);
    t124 = (t107 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t107);
    t128 = (t127 & t126);
    t129 = (t128 & 1U);
    if (t129 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t124) != 0)
        goto LAB49;

LAB50:    t131 = (t123 + 4);
    t132 = *((unsigned int *)t123);
    t133 = *((unsigned int *)t131);
    t134 = (t132 || t133);
    if (t134 > 0)
        goto LAB51;

LAB52:    memcpy(t163, t123, 8);

LAB53:    memset(t195, 0, 8);
    t196 = (t163 + 4);
    t197 = *((unsigned int *)t196);
    t198 = (~(t197));
    t199 = *((unsigned int *)t163);
    t200 = (t199 & t198);
    t201 = (t200 & 1U);
    if (t201 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t196) != 0)
        goto LAB67;

LAB68:    t204 = *((unsigned int *)t92);
    t205 = *((unsigned int *)t195);
    t206 = (t204 | t205);
    *((unsigned int *)t203) = t206;
    t207 = (t92 + 4);
    t208 = (t195 + 4);
    t209 = (t203 + 4);
    t210 = *((unsigned int *)t207);
    t211 = *((unsigned int *)t208);
    t212 = (t210 | t211);
    *((unsigned int *)t209) = t212;
    t213 = *((unsigned int *)t209);
    t214 = (t213 != 0);
    if (t214 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB42;

LAB45:    t122 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t122) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t123) = 1;
    goto LAB50;

LAB49:    t130 = (t123 + 4);
    *((unsigned int *)t123) = 1;
    *((unsigned int *)t130) = 1;
    goto LAB50;

LAB51:    t135 = (t0 + 5848);
    t136 = (t135 + 56U);
    t137 = *((char **)t136);
    t138 = ((char*)((ng1)));
    memset(t139, 0, 8);
    t140 = (t137 + 4);
    t141 = (t138 + 4);
    t142 = *((unsigned int *)t137);
    t143 = *((unsigned int *)t138);
    t144 = (t142 ^ t143);
    t145 = *((unsigned int *)t140);
    t146 = *((unsigned int *)t141);
    t147 = (t145 ^ t146);
    t148 = (t144 | t147);
    t149 = *((unsigned int *)t140);
    t150 = *((unsigned int *)t141);
    t151 = (t149 | t150);
    t152 = (~(t151));
    t153 = (t148 & t152);
    if (t153 != 0)
        goto LAB57;

LAB54:    if (t151 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t139) = 1;

LAB57:    memset(t155, 0, 8);
    t156 = (t139 + 4);
    t157 = *((unsigned int *)t156);
    t158 = (~(t157));
    t159 = *((unsigned int *)t139);
    t160 = (t159 & t158);
    t161 = (t160 & 1U);
    if (t161 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t156) != 0)
        goto LAB60;

LAB61:    t164 = *((unsigned int *)t123);
    t165 = *((unsigned int *)t155);
    t166 = (t164 & t165);
    *((unsigned int *)t163) = t166;
    t167 = (t123 + 4);
    t168 = (t155 + 4);
    t169 = (t163 + 4);
    t170 = *((unsigned int *)t167);
    t171 = *((unsigned int *)t168);
    t172 = (t170 | t171);
    *((unsigned int *)t169) = t172;
    t173 = *((unsigned int *)t169);
    t174 = (t173 != 0);
    if (t174 == 1)
        goto LAB62;

LAB63:
LAB64:    goto LAB53;

LAB56:    t154 = (t139 + 4);
    *((unsigned int *)t139) = 1;
    *((unsigned int *)t154) = 1;
    goto LAB57;

LAB58:    *((unsigned int *)t155) = 1;
    goto LAB61;

LAB60:    t162 = (t155 + 4);
    *((unsigned int *)t155) = 1;
    *((unsigned int *)t162) = 1;
    goto LAB61;

LAB62:    t175 = *((unsigned int *)t163);
    t176 = *((unsigned int *)t169);
    *((unsigned int *)t163) = (t175 | t176);
    t177 = (t123 + 4);
    t178 = (t155 + 4);
    t179 = *((unsigned int *)t123);
    t180 = (~(t179));
    t181 = *((unsigned int *)t177);
    t182 = (~(t181));
    t183 = *((unsigned int *)t155);
    t184 = (~(t183));
    t185 = *((unsigned int *)t178);
    t186 = (~(t185));
    t187 = (t180 & t182);
    t188 = (t184 & t186);
    t189 = (~(t187));
    t190 = (~(t188));
    t191 = *((unsigned int *)t169);
    *((unsigned int *)t169) = (t191 & t189);
    t192 = *((unsigned int *)t169);
    *((unsigned int *)t169) = (t192 & t190);
    t193 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t193 & t189);
    t194 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t194 & t190);
    goto LAB64;

LAB65:    *((unsigned int *)t195) = 1;
    goto LAB68;

LAB67:    t202 = (t195 + 4);
    *((unsigned int *)t195) = 1;
    *((unsigned int *)t202) = 1;
    goto LAB68;

LAB69:    t215 = *((unsigned int *)t203);
    t216 = *((unsigned int *)t209);
    *((unsigned int *)t203) = (t215 | t216);
    t217 = (t92 + 4);
    t218 = (t195 + 4);
    t219 = *((unsigned int *)t217);
    t220 = (~(t219));
    t221 = *((unsigned int *)t92);
    t222 = (t221 & t220);
    t223 = *((unsigned int *)t218);
    t224 = (~(t223));
    t225 = *((unsigned int *)t195);
    t226 = (t225 & t224);
    t227 = (~(t222));
    t228 = (~(t226));
    t229 = *((unsigned int *)t209);
    *((unsigned int *)t209) = (t229 & t227);
    t230 = *((unsigned int *)t209);
    *((unsigned int *)t209) = (t230 & t228);
    goto LAB71;

LAB72:    xsi_set_current_line(230, ng0);

LAB75:    xsi_set_current_line(231, ng0);
    t238 = (t0 + 3528U);
    t239 = *((char **)t238);
    t238 = (t0 + 6168);
    t241 = (t238 + 56U);
    t242 = *((char **)t241);
    memset(t240, 0, 8);
    t243 = (t240 + 4);
    t244 = (t242 + 4);
    t245 = *((unsigned int *)t242);
    t246 = (t245 >> 0);
    *((unsigned int *)t240) = t246;
    t247 = *((unsigned int *)t244);
    t248 = (t247 >> 0);
    *((unsigned int *)t243) = t248;
    t249 = *((unsigned int *)t240);
    *((unsigned int *)t240) = (t249 & 127U);
    t250 = *((unsigned int *)t243);
    *((unsigned int *)t243) = (t250 & 127U);
    xsi_vlogtype_concat(t237, 8, 8, 2U, t240, 7, t239, 1);
    t251 = (t0 + 6168);
    xsi_vlogvar_assign_value(t251, t237, 0, 0, 8);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 6328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t7 = (t0 + 6328);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB74;

}

static void Always_238_5(char *t0)
{
    char t6[8];
    char t30[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char t92[8];
    char t107[8];
    char t123[8];
    char t139[8];
    char t155[8];
    char t163[8];
    char t195[8];
    char t203[8];
    char t239[8];
    char t255[8];
    char t271[8];
    char t287[8];
    char t295[8];
    char t333[8];
    char t335[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    int t187;
    int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;
    char *t208;
    char *t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;
    char *t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    char *t237;
    char *t238;
    char *t240;
    char *t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    char *t254;
    char *t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    char *t262;
    char *t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    char *t267;
    char *t268;
    char *t269;
    char *t270;
    char *t272;
    char *t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    char *t286;
    char *t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    char *t294;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    char *t299;
    char *t300;
    char *t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    char *t309;
    char *t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    int t319;
    int t320;
    unsigned int t321;
    unsigned int t322;
    unsigned int t323;
    unsigned int t324;
    unsigned int t325;
    unsigned int t326;
    char *t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    unsigned int t332;
    char *t334;
    char *t336;
    char *t337;
    char *t338;
    unsigned int t339;
    unsigned int t340;
    unsigned int t341;
    unsigned int t342;
    unsigned int t343;
    unsigned int t344;
    char *t345;

LAB0:    t1 = (t0 + 8808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(238, ng0);
    t2 = (t0 + 9208);
    *((int *)t2) = 1;
    t3 = (t0 + 8840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(239, ng0);

LAB5:    xsi_set_current_line(240, ng0);
    t4 = (t0 + 2568U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(245, ng0);
    t2 = (t0 + 3848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    memset(t30, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t8) != 0)
        goto LAB20;

LAB21:    t22 = (t30 + 4);
    t31 = *((unsigned int *)t30);
    t32 = *((unsigned int *)t22);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB22;

LAB23:    memcpy(t60, t30, 8);

LAB24:    memset(t92, 0, 8);
    t93 = (t60 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t60);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t93) != 0)
        goto LAB38;

LAB39:    t100 = (t92 + 4);
    t101 = *((unsigned int *)t92);
    t102 = (!(t101));
    t103 = *((unsigned int *)t100);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB40;

LAB41:    memcpy(t203, t92, 8);

LAB42:    t231 = (t203 + 4);
    t232 = *((unsigned int *)t231);
    t233 = (~(t232));
    t234 = *((unsigned int *)t203);
    t235 = (t234 & t233);
    t236 = (t235 != 0);
    if (t236 > 0)
        goto LAB72;

LAB73:
LAB74:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(241, ng0);

LAB13:    xsi_set_current_line(242, ng0);
    t28 = ((char*)((ng13)));
    t29 = (t0 + 6008);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    xsi_set_current_line(243, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t30) = 1;
    goto LAB21;

LAB20:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB21;

LAB22:    t28 = (t0 + 5848);
    t29 = (t28 + 56U);
    t34 = *((char **)t29);
    t35 = ((char*)((ng1)));
    memset(t36, 0, 8);
    t37 = (t34 + 4);
    t38 = (t35 + 4);
    t39 = *((unsigned int *)t34);
    t40 = *((unsigned int *)t35);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB28;

LAB25:    if (t48 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t36) = 1;

LAB28:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t53) != 0)
        goto LAB31;

LAB32:    t61 = *((unsigned int *)t30);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t30 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB24;

LAB27:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t52) = 1;
    goto LAB32;

LAB31:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB32;

LAB33:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t30 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t30);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB35;

LAB36:    *((unsigned int *)t92) = 1;
    goto LAB39;

LAB38:    t99 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB39;

LAB40:    t105 = (t0 + 3848U);
    t106 = *((char **)t105);
    t105 = ((char*)((ng2)));
    memset(t107, 0, 8);
    t108 = (t106 + 4);
    t109 = (t105 + 4);
    t110 = *((unsigned int *)t106);
    t111 = *((unsigned int *)t105);
    t112 = (t110 ^ t111);
    t113 = *((unsigned int *)t108);
    t114 = *((unsigned int *)t109);
    t115 = (t113 ^ t114);
    t116 = (t112 | t115);
    t117 = *((unsigned int *)t108);
    t118 = *((unsigned int *)t109);
    t119 = (t117 | t118);
    t120 = (~(t119));
    t121 = (t116 & t120);
    if (t121 != 0)
        goto LAB46;

LAB43:    if (t119 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t107) = 1;

LAB46:    memset(t123, 0, 8);
    t124 = (t107 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t107);
    t128 = (t127 & t126);
    t129 = (t128 & 1U);
    if (t129 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t124) != 0)
        goto LAB49;

LAB50:    t131 = (t123 + 4);
    t132 = *((unsigned int *)t123);
    t133 = *((unsigned int *)t131);
    t134 = (t132 || t133);
    if (t134 > 0)
        goto LAB51;

LAB52:    memcpy(t163, t123, 8);

LAB53:    memset(t195, 0, 8);
    t196 = (t163 + 4);
    t197 = *((unsigned int *)t196);
    t198 = (~(t197));
    t199 = *((unsigned int *)t163);
    t200 = (t199 & t198);
    t201 = (t200 & 1U);
    if (t201 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t196) != 0)
        goto LAB67;

LAB68:    t204 = *((unsigned int *)t92);
    t205 = *((unsigned int *)t195);
    t206 = (t204 | t205);
    *((unsigned int *)t203) = t206;
    t207 = (t92 + 4);
    t208 = (t195 + 4);
    t209 = (t203 + 4);
    t210 = *((unsigned int *)t207);
    t211 = *((unsigned int *)t208);
    t212 = (t210 | t211);
    *((unsigned int *)t209) = t212;
    t213 = *((unsigned int *)t209);
    t214 = (t213 != 0);
    if (t214 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB42;

LAB45:    t122 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t122) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t123) = 1;
    goto LAB50;

LAB49:    t130 = (t123 + 4);
    *((unsigned int *)t123) = 1;
    *((unsigned int *)t130) = 1;
    goto LAB50;

LAB51:    t135 = (t0 + 5848);
    t136 = (t135 + 56U);
    t137 = *((char **)t136);
    t138 = ((char*)((ng2)));
    memset(t139, 0, 8);
    t140 = (t137 + 4);
    t141 = (t138 + 4);
    t142 = *((unsigned int *)t137);
    t143 = *((unsigned int *)t138);
    t144 = (t142 ^ t143);
    t145 = *((unsigned int *)t140);
    t146 = *((unsigned int *)t141);
    t147 = (t145 ^ t146);
    t148 = (t144 | t147);
    t149 = *((unsigned int *)t140);
    t150 = *((unsigned int *)t141);
    t151 = (t149 | t150);
    t152 = (~(t151));
    t153 = (t148 & t152);
    if (t153 != 0)
        goto LAB57;

LAB54:    if (t151 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t139) = 1;

LAB57:    memset(t155, 0, 8);
    t156 = (t139 + 4);
    t157 = *((unsigned int *)t156);
    t158 = (~(t157));
    t159 = *((unsigned int *)t139);
    t160 = (t159 & t158);
    t161 = (t160 & 1U);
    if (t161 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t156) != 0)
        goto LAB60;

LAB61:    t164 = *((unsigned int *)t123);
    t165 = *((unsigned int *)t155);
    t166 = (t164 & t165);
    *((unsigned int *)t163) = t166;
    t167 = (t123 + 4);
    t168 = (t155 + 4);
    t169 = (t163 + 4);
    t170 = *((unsigned int *)t167);
    t171 = *((unsigned int *)t168);
    t172 = (t170 | t171);
    *((unsigned int *)t169) = t172;
    t173 = *((unsigned int *)t169);
    t174 = (t173 != 0);
    if (t174 == 1)
        goto LAB62;

LAB63:
LAB64:    goto LAB53;

LAB56:    t154 = (t139 + 4);
    *((unsigned int *)t139) = 1;
    *((unsigned int *)t154) = 1;
    goto LAB57;

LAB58:    *((unsigned int *)t155) = 1;
    goto LAB61;

LAB60:    t162 = (t155 + 4);
    *((unsigned int *)t155) = 1;
    *((unsigned int *)t162) = 1;
    goto LAB61;

LAB62:    t175 = *((unsigned int *)t163);
    t176 = *((unsigned int *)t169);
    *((unsigned int *)t163) = (t175 | t176);
    t177 = (t123 + 4);
    t178 = (t155 + 4);
    t179 = *((unsigned int *)t123);
    t180 = (~(t179));
    t181 = *((unsigned int *)t177);
    t182 = (~(t181));
    t183 = *((unsigned int *)t155);
    t184 = (~(t183));
    t185 = *((unsigned int *)t178);
    t186 = (~(t185));
    t187 = (t180 & t182);
    t188 = (t184 & t186);
    t189 = (~(t187));
    t190 = (~(t188));
    t191 = *((unsigned int *)t169);
    *((unsigned int *)t169) = (t191 & t189);
    t192 = *((unsigned int *)t169);
    *((unsigned int *)t169) = (t192 & t190);
    t193 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t193 & t189);
    t194 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t194 & t190);
    goto LAB64;

LAB65:    *((unsigned int *)t195) = 1;
    goto LAB68;

LAB67:    t202 = (t195 + 4);
    *((unsigned int *)t195) = 1;
    *((unsigned int *)t202) = 1;
    goto LAB68;

LAB69:    t215 = *((unsigned int *)t203);
    t216 = *((unsigned int *)t209);
    *((unsigned int *)t203) = (t215 | t216);
    t217 = (t92 + 4);
    t218 = (t195 + 4);
    t219 = *((unsigned int *)t217);
    t220 = (~(t219));
    t221 = *((unsigned int *)t92);
    t222 = (t221 & t220);
    t223 = *((unsigned int *)t218);
    t224 = (~(t223));
    t225 = *((unsigned int *)t195);
    t226 = (t225 & t224);
    t227 = (~(t222));
    t228 = (~(t226));
    t229 = *((unsigned int *)t209);
    *((unsigned int *)t209) = (t229 & t227);
    t230 = *((unsigned int *)t209);
    *((unsigned int *)t209) = (t230 & t228);
    goto LAB71;

LAB72:    xsi_set_current_line(248, ng0);

LAB75:    xsi_set_current_line(251, ng0);
    t237 = (t0 + 3848U);
    t238 = *((char **)t237);
    t237 = ((char*)((ng3)));
    memset(t239, 0, 8);
    t240 = (t238 + 4);
    t241 = (t237 + 4);
    t242 = *((unsigned int *)t238);
    t243 = *((unsigned int *)t237);
    t244 = (t242 ^ t243);
    t245 = *((unsigned int *)t240);
    t246 = *((unsigned int *)t241);
    t247 = (t245 ^ t246);
    t248 = (t244 | t247);
    t249 = *((unsigned int *)t240);
    t250 = *((unsigned int *)t241);
    t251 = (t249 | t250);
    t252 = (~(t251));
    t253 = (t248 & t252);
    if (t253 != 0)
        goto LAB79;

LAB76:    if (t251 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t239) = 1;

LAB79:    memset(t255, 0, 8);
    t256 = (t239 + 4);
    t257 = *((unsigned int *)t256);
    t258 = (~(t257));
    t259 = *((unsigned int *)t239);
    t260 = (t259 & t258);
    t261 = (t260 & 1U);
    if (t261 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t256) != 0)
        goto LAB82;

LAB83:    t263 = (t255 + 4);
    t264 = *((unsigned int *)t255);
    t265 = *((unsigned int *)t263);
    t266 = (t264 || t265);
    if (t266 > 0)
        goto LAB84;

LAB85:    memcpy(t295, t255, 8);

LAB86:    t327 = (t295 + 4);
    t328 = *((unsigned int *)t327);
    t329 = (~(t328));
    t330 = *((unsigned int *)t295);
    t331 = (t330 & t329);
    t332 = (t331 != 0);
    if (t332 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(256, ng0);
    t2 = (t0 + 6328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng14)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB103;

LAB102:    if (t18 != 0)
        goto LAB104;

LAB105:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB106;

LAB107:
LAB108:
LAB100:    goto LAB74;

LAB78:    t254 = (t239 + 4);
    *((unsigned int *)t239) = 1;
    *((unsigned int *)t254) = 1;
    goto LAB79;

LAB80:    *((unsigned int *)t255) = 1;
    goto LAB83;

LAB82:    t262 = (t255 + 4);
    *((unsigned int *)t255) = 1;
    *((unsigned int *)t262) = 1;
    goto LAB83;

LAB84:    t267 = (t0 + 6328);
    t268 = (t267 + 56U);
    t269 = *((char **)t268);
    t270 = ((char*)((ng3)));
    memset(t271, 0, 8);
    t272 = (t269 + 4);
    t273 = (t270 + 4);
    t274 = *((unsigned int *)t269);
    t275 = *((unsigned int *)t270);
    t276 = (t274 ^ t275);
    t277 = *((unsigned int *)t272);
    t278 = *((unsigned int *)t273);
    t279 = (t277 ^ t278);
    t280 = (t276 | t279);
    t281 = *((unsigned int *)t272);
    t282 = *((unsigned int *)t273);
    t283 = (t281 | t282);
    t284 = (~(t283));
    t285 = (t280 & t284);
    if (t285 != 0)
        goto LAB90;

LAB87:    if (t283 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t271) = 1;

LAB90:    memset(t287, 0, 8);
    t288 = (t271 + 4);
    t289 = *((unsigned int *)t288);
    t290 = (~(t289));
    t291 = *((unsigned int *)t271);
    t292 = (t291 & t290);
    t293 = (t292 & 1U);
    if (t293 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t288) != 0)
        goto LAB93;

LAB94:    t296 = *((unsigned int *)t255);
    t297 = *((unsigned int *)t287);
    t298 = (t296 & t297);
    *((unsigned int *)t295) = t298;
    t299 = (t255 + 4);
    t300 = (t287 + 4);
    t301 = (t295 + 4);
    t302 = *((unsigned int *)t299);
    t303 = *((unsigned int *)t300);
    t304 = (t302 | t303);
    *((unsigned int *)t301) = t304;
    t305 = *((unsigned int *)t301);
    t306 = (t305 != 0);
    if (t306 == 1)
        goto LAB95;

LAB96:
LAB97:    goto LAB86;

LAB89:    t286 = (t271 + 4);
    *((unsigned int *)t271) = 1;
    *((unsigned int *)t286) = 1;
    goto LAB90;

LAB91:    *((unsigned int *)t287) = 1;
    goto LAB94;

LAB93:    t294 = (t287 + 4);
    *((unsigned int *)t287) = 1;
    *((unsigned int *)t294) = 1;
    goto LAB94;

LAB95:    t307 = *((unsigned int *)t295);
    t308 = *((unsigned int *)t301);
    *((unsigned int *)t295) = (t307 | t308);
    t309 = (t255 + 4);
    t310 = (t287 + 4);
    t311 = *((unsigned int *)t255);
    t312 = (~(t311));
    t313 = *((unsigned int *)t309);
    t314 = (~(t313));
    t315 = *((unsigned int *)t287);
    t316 = (~(t315));
    t317 = *((unsigned int *)t310);
    t318 = (~(t317));
    t319 = (t312 & t314);
    t320 = (t316 & t318);
    t321 = (~(t319));
    t322 = (~(t320));
    t323 = *((unsigned int *)t301);
    *((unsigned int *)t301) = (t323 & t321);
    t324 = *((unsigned int *)t301);
    *((unsigned int *)t301) = (t324 & t322);
    t325 = *((unsigned int *)t295);
    *((unsigned int *)t295) = (t325 & t321);
    t326 = *((unsigned int *)t295);
    *((unsigned int *)t295) = (t326 & t322);
    goto LAB97;

LAB98:    xsi_set_current_line(251, ng0);

LAB101:    xsi_set_current_line(253, ng0);
    t334 = ((char*)((ng4)));
    t336 = (t0 + 3208U);
    t337 = *((char **)t336);
    memset(t335, 0, 8);
    t336 = (t335 + 4);
    t338 = (t337 + 4);
    t339 = *((unsigned int *)t337);
    t340 = (t339 >> 0);
    *((unsigned int *)t335) = t340;
    t341 = *((unsigned int *)t338);
    t342 = (t341 >> 0);
    *((unsigned int *)t336) = t342;
    t343 = *((unsigned int *)t335);
    *((unsigned int *)t335) = (t343 & 127U);
    t344 = *((unsigned int *)t336);
    *((unsigned int *)t336) = (t344 & 127U);
    xsi_vlogtype_concat(t333, 8, 8, 2U, t335, 7, t334, 1);
    t345 = (t0 + 6008);
    xsi_vlogvar_wait_assign_value(t345, t333, 0, 0, 8, 0LL);
    xsi_set_current_line(254, ng0);
    t2 = (t0 + 3208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 4888);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 1, 0LL);
    goto LAB100;

LAB103:    *((unsigned int *)t6) = 1;
    goto LAB105;

LAB104:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(257, ng0);

LAB109:    xsi_set_current_line(258, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 6008);
    t34 = (t29 + 56U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t37 = (t36 + 4);
    t38 = (t35 + 4);
    t31 = *((unsigned int *)t35);
    t32 = (t31 >> 0);
    *((unsigned int *)t36) = t32;
    t33 = *((unsigned int *)t38);
    t39 = (t33 >> 0);
    *((unsigned int *)t37) = t39;
    t40 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t40 & 127U);
    t41 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t41 & 127U);
    xsi_vlogtype_concat(t30, 8, 8, 2U, t36, 7, t28, 1);
    t51 = (t0 + 6008);
    xsi_vlogvar_wait_assign_value(t51, t30, 0, 0, 8, 0LL);
    xsi_set_current_line(259, ng0);
    t2 = (t0 + 6008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 4888);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 1, 0LL);
    goto LAB108;

}


extern void work_m_00000000004085518319_1714226470_init()
{
	static char *pe[] = {(void *)Always_60_0,(void *)Always_73_1,(void *)Cont_88_2,(void *)Always_109_3,(void *)Always_220_4,(void *)Always_238_5};
	xsi_register_didat("work_m_00000000004085518319_1714226470", "isim/TB_AXI_SPI_isim_beh.exe.sim/work/m_00000000004085518319_1714226470.didat");
	xsi_register_executes(pe);
}
