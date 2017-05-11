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

LAB0:    t1 = (t0 + 7728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 9288);
    *((int *)t2) = 1;
    t3 = (t0 + 7760);
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

LAB0:    t1 = (t0 + 7976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 9304);
    *((int *)t2) = 1;
    t3 = (t0 + 8008);
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

LAB0:    t1 = (t0 + 8224U);
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

LAB16:    t44 = (t0 + 9448);
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
    t57 = (t0 + 9320);
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

LAB0:    t1 = (t0 + 8472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 9336);
    *((int *)t2) = 1;
    t3 = (t0 + 8504);
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
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 8720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(220, ng0);
    t2 = (t0 + 9352);
    *((int *)t2) = 1;
    t3 = (t0 + 8752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(220, ng0);
    t4 = (t0 + 5848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 6808);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB2;

}

static void Always_222_5(char *t0)
{
    char t6[8];
    char t32[8];
    char t48[8];
    char t64[8];
    char t80[8];
    char t88[8];
    char t120[8];
    char t135[8];
    char t151[8];
    char t167[8];
    char t183[8];
    char t191[8];
    char t223[8];
    char t231[8];
    char t265[8];
    char t268[8];
    char t289[8];
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
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    int t112;
    int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    char *t164;
    char *t165;
    char *t166;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;
    char *t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    char *t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    int t215;
    int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    char *t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    char *t230;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    char *t235;
    char *t236;
    char *t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    char *t245;
    char *t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    char *t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    char *t266;
    char *t267;
    char *t269;
    char *t270;
    char *t271;
    char *t272;
    unsigned int t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    char *t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
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

LAB0:    t1 = (t0 + 8968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 9368);
    *((int *)t2) = 1;
    t3 = (t0 + 9000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(223, ng0);

LAB5:    xsi_set_current_line(224, ng0);
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

LAB11:    xsi_set_current_line(231, ng0);
    t2 = (t0 + 6808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5848);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t21 = (t4 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB15;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB17:    t29 = (t6 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(225, ng0);

LAB13:    xsi_set_current_line(226, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 6328);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    *((unsigned int *)t6) = 1;
    goto LAB17;

LAB16:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(231, ng0);

LAB21:    xsi_set_current_line(232, ng0);
    t30 = (t0 + 3848U);
    t31 = *((char **)t30);
    t30 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t33 = (t31 + 4);
    t34 = (t30 + 4);
    t35 = *((unsigned int *)t31);
    t36 = *((unsigned int *)t30);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB25;

LAB22:    if (t44 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t32) = 1;

LAB25:    memset(t48, 0, 8);
    t49 = (t32 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (~(t50));
    t52 = *((unsigned int *)t32);
    t53 = (t52 & t51);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t49) != 0)
        goto LAB28;

LAB29:    t56 = (t48 + 4);
    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t56);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB30;

LAB31:    memcpy(t88, t48, 8);

LAB32:    memset(t120, 0, 8);
    t121 = (t88 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t88);
    t125 = (t124 & t123);
    t126 = (t125 & 1U);
    if (t126 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t121) != 0)
        goto LAB46;

LAB47:    t128 = (t120 + 4);
    t129 = *((unsigned int *)t120);
    t130 = (!(t129));
    t131 = *((unsigned int *)t128);
    t132 = (t130 || t131);
    if (t132 > 0)
        goto LAB48;

LAB49:    memcpy(t231, t120, 8);

LAB50:    t259 = (t231 + 4);
    t260 = *((unsigned int *)t259);
    t261 = (~(t260));
    t262 = *((unsigned int *)t231);
    t263 = (t262 & t261);
    t264 = (t263 != 0);
    if (t264 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(236, ng0);
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
        goto LAB87;

LAB84:    if (t18 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t6) = 1;

LAB87:    memset(t32, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t8) != 0)
        goto LAB90;

LAB91:    t22 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t22);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB92;

LAB93:    memcpy(t80, t32, 8);

LAB94:    memset(t88, 0, 8);
    t65 = (t80 + 4);
    t99 = *((unsigned int *)t65);
    t100 = (~(t99));
    t101 = *((unsigned int *)t80);
    t104 = (t101 & t100);
    t105 = (t104 & 1U);
    if (t105 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t65) != 0)
        goto LAB108;

LAB109:    t79 = (t88 + 4);
    t106 = *((unsigned int *)t88);
    t107 = (!(t106));
    t108 = *((unsigned int *)t79);
    t109 = (t107 || t108);
    if (t109 > 0)
        goto LAB110;

LAB111:    memcpy(t223, t88, 8);

LAB112:    t197 = (t223 + 4);
    t238 = *((unsigned int *)t197);
    t239 = (~(t238));
    t240 = *((unsigned int *)t223);
    t241 = (t240 & t239);
    t242 = (t241 != 0);
    if (t242 > 0)
        goto LAB142;

LAB143:
LAB144:
LAB82:    goto LAB20;

LAB24:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t48) = 1;
    goto LAB29;

LAB28:    t55 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB29;

LAB30:    t60 = (t0 + 5848);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    t63 = ((char*)((ng2)));
    memset(t64, 0, 8);
    t65 = (t62 + 4);
    t66 = (t63 + 4);
    t67 = *((unsigned int *)t62);
    t68 = *((unsigned int *)t63);
    t69 = (t67 ^ t68);
    t70 = *((unsigned int *)t65);
    t71 = *((unsigned int *)t66);
    t72 = (t70 ^ t71);
    t73 = (t69 | t72);
    t74 = *((unsigned int *)t65);
    t75 = *((unsigned int *)t66);
    t76 = (t74 | t75);
    t77 = (~(t76));
    t78 = (t73 & t77);
    if (t78 != 0)
        goto LAB36;

LAB33:    if (t76 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t64) = 1;

LAB36:    memset(t80, 0, 8);
    t81 = (t64 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t64);
    t85 = (t84 & t83);
    t86 = (t85 & 1U);
    if (t86 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t81) != 0)
        goto LAB39;

LAB40:    t89 = *((unsigned int *)t48);
    t90 = *((unsigned int *)t80);
    t91 = (t89 & t90);
    *((unsigned int *)t88) = t91;
    t92 = (t48 + 4);
    t93 = (t80 + 4);
    t94 = (t88 + 4);
    t95 = *((unsigned int *)t92);
    t96 = *((unsigned int *)t93);
    t97 = (t95 | t96);
    *((unsigned int *)t94) = t97;
    t98 = *((unsigned int *)t94);
    t99 = (t98 != 0);
    if (t99 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB32;

LAB35:    t79 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t80) = 1;
    goto LAB40;

LAB39:    t87 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB40;

LAB41:    t100 = *((unsigned int *)t88);
    t101 = *((unsigned int *)t94);
    *((unsigned int *)t88) = (t100 | t101);
    t102 = (t48 + 4);
    t103 = (t80 + 4);
    t104 = *((unsigned int *)t48);
    t105 = (~(t104));
    t106 = *((unsigned int *)t102);
    t107 = (~(t106));
    t108 = *((unsigned int *)t80);
    t109 = (~(t108));
    t110 = *((unsigned int *)t103);
    t111 = (~(t110));
    t112 = (t105 & t107);
    t113 = (t109 & t111);
    t114 = (~(t112));
    t115 = (~(t113));
    t116 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t116 & t114);
    t117 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t117 & t115);
    t118 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t118 & t114);
    t119 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t119 & t115);
    goto LAB43;

LAB44:    *((unsigned int *)t120) = 1;
    goto LAB47;

LAB46:    t127 = (t120 + 4);
    *((unsigned int *)t120) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB47;

LAB48:    t133 = (t0 + 3848U);
    t134 = *((char **)t133);
    t133 = ((char*)((ng2)));
    memset(t135, 0, 8);
    t136 = (t134 + 4);
    t137 = (t133 + 4);
    t138 = *((unsigned int *)t134);
    t139 = *((unsigned int *)t133);
    t140 = (t138 ^ t139);
    t141 = *((unsigned int *)t136);
    t142 = *((unsigned int *)t137);
    t143 = (t141 ^ t142);
    t144 = (t140 | t143);
    t145 = *((unsigned int *)t136);
    t146 = *((unsigned int *)t137);
    t147 = (t145 | t146);
    t148 = (~(t147));
    t149 = (t144 & t148);
    if (t149 != 0)
        goto LAB54;

LAB51:    if (t147 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t135) = 1;

LAB54:    memset(t151, 0, 8);
    t152 = (t135 + 4);
    t153 = *((unsigned int *)t152);
    t154 = (~(t153));
    t155 = *((unsigned int *)t135);
    t156 = (t155 & t154);
    t157 = (t156 & 1U);
    if (t157 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t152) != 0)
        goto LAB57;

LAB58:    t159 = (t151 + 4);
    t160 = *((unsigned int *)t151);
    t161 = *((unsigned int *)t159);
    t162 = (t160 || t161);
    if (t162 > 0)
        goto LAB59;

LAB60:    memcpy(t191, t151, 8);

LAB61:    memset(t223, 0, 8);
    t224 = (t191 + 4);
    t225 = *((unsigned int *)t224);
    t226 = (~(t225));
    t227 = *((unsigned int *)t191);
    t228 = (t227 & t226);
    t229 = (t228 & 1U);
    if (t229 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t224) != 0)
        goto LAB75;

LAB76:    t232 = *((unsigned int *)t120);
    t233 = *((unsigned int *)t223);
    t234 = (t232 | t233);
    *((unsigned int *)t231) = t234;
    t235 = (t120 + 4);
    t236 = (t223 + 4);
    t237 = (t231 + 4);
    t238 = *((unsigned int *)t235);
    t239 = *((unsigned int *)t236);
    t240 = (t238 | t239);
    *((unsigned int *)t237) = t240;
    t241 = *((unsigned int *)t237);
    t242 = (t241 != 0);
    if (t242 == 1)
        goto LAB77;

LAB78:
LAB79:    goto LAB50;

LAB53:    t150 = (t135 + 4);
    *((unsigned int *)t135) = 1;
    *((unsigned int *)t150) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t151) = 1;
    goto LAB58;

LAB57:    t158 = (t151 + 4);
    *((unsigned int *)t151) = 1;
    *((unsigned int *)t158) = 1;
    goto LAB58;

LAB59:    t163 = (t0 + 5848);
    t164 = (t163 + 56U);
    t165 = *((char **)t164);
    t166 = ((char*)((ng1)));
    memset(t167, 0, 8);
    t168 = (t165 + 4);
    t169 = (t166 + 4);
    t170 = *((unsigned int *)t165);
    t171 = *((unsigned int *)t166);
    t172 = (t170 ^ t171);
    t173 = *((unsigned int *)t168);
    t174 = *((unsigned int *)t169);
    t175 = (t173 ^ t174);
    t176 = (t172 | t175);
    t177 = *((unsigned int *)t168);
    t178 = *((unsigned int *)t169);
    t179 = (t177 | t178);
    t180 = (~(t179));
    t181 = (t176 & t180);
    if (t181 != 0)
        goto LAB65;

LAB62:    if (t179 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t167) = 1;

LAB65:    memset(t183, 0, 8);
    t184 = (t167 + 4);
    t185 = *((unsigned int *)t184);
    t186 = (~(t185));
    t187 = *((unsigned int *)t167);
    t188 = (t187 & t186);
    t189 = (t188 & 1U);
    if (t189 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t184) != 0)
        goto LAB68;

LAB69:    t192 = *((unsigned int *)t151);
    t193 = *((unsigned int *)t183);
    t194 = (t192 & t193);
    *((unsigned int *)t191) = t194;
    t195 = (t151 + 4);
    t196 = (t183 + 4);
    t197 = (t191 + 4);
    t198 = *((unsigned int *)t195);
    t199 = *((unsigned int *)t196);
    t200 = (t198 | t199);
    *((unsigned int *)t197) = t200;
    t201 = *((unsigned int *)t197);
    t202 = (t201 != 0);
    if (t202 == 1)
        goto LAB70;

LAB71:
LAB72:    goto LAB61;

LAB64:    t182 = (t167 + 4);
    *((unsigned int *)t167) = 1;
    *((unsigned int *)t182) = 1;
    goto LAB65;

LAB66:    *((unsigned int *)t183) = 1;
    goto LAB69;

LAB68:    t190 = (t183 + 4);
    *((unsigned int *)t183) = 1;
    *((unsigned int *)t190) = 1;
    goto LAB69;

LAB70:    t203 = *((unsigned int *)t191);
    t204 = *((unsigned int *)t197);
    *((unsigned int *)t191) = (t203 | t204);
    t205 = (t151 + 4);
    t206 = (t183 + 4);
    t207 = *((unsigned int *)t151);
    t208 = (~(t207));
    t209 = *((unsigned int *)t205);
    t210 = (~(t209));
    t211 = *((unsigned int *)t183);
    t212 = (~(t211));
    t213 = *((unsigned int *)t206);
    t214 = (~(t213));
    t215 = (t208 & t210);
    t216 = (t212 & t214);
    t217 = (~(t215));
    t218 = (~(t216));
    t219 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t219 & t217);
    t220 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t220 & t218);
    t221 = *((unsigned int *)t191);
    *((unsigned int *)t191) = (t221 & t217);
    t222 = *((unsigned int *)t191);
    *((unsigned int *)t191) = (t222 & t218);
    goto LAB72;

LAB73:    *((unsigned int *)t223) = 1;
    goto LAB76;

LAB75:    t230 = (t223 + 4);
    *((unsigned int *)t223) = 1;
    *((unsigned int *)t230) = 1;
    goto LAB76;

LAB77:    t243 = *((unsigned int *)t231);
    t244 = *((unsigned int *)t237);
    *((unsigned int *)t231) = (t243 | t244);
    t245 = (t120 + 4);
    t246 = (t223 + 4);
    t247 = *((unsigned int *)t245);
    t248 = (~(t247));
    t249 = *((unsigned int *)t120);
    t250 = (t249 & t248);
    t251 = *((unsigned int *)t246);
    t252 = (~(t251));
    t253 = *((unsigned int *)t223);
    t254 = (t253 & t252);
    t255 = (~(t250));
    t256 = (~(t254));
    t257 = *((unsigned int *)t237);
    *((unsigned int *)t237) = (t257 & t255);
    t258 = *((unsigned int *)t237);
    *((unsigned int *)t237) = (t258 & t256);
    goto LAB79;

LAB80:    xsi_set_current_line(232, ng0);

LAB83:    xsi_set_current_line(233, ng0);
    t266 = (t0 + 3528U);
    t267 = *((char **)t266);
    t266 = (t0 + 6168);
    t269 = (t266 + 56U);
    t270 = *((char **)t269);
    memset(t268, 0, 8);
    t271 = (t268 + 4);
    t272 = (t270 + 4);
    t273 = *((unsigned int *)t270);
    t274 = (t273 >> 0);
    *((unsigned int *)t268) = t274;
    t275 = *((unsigned int *)t272);
    t276 = (t275 >> 0);
    *((unsigned int *)t271) = t276;
    t277 = *((unsigned int *)t268);
    *((unsigned int *)t268) = (t277 & 127U);
    t278 = *((unsigned int *)t271);
    *((unsigned int *)t271) = (t278 & 127U);
    xsi_vlogtype_concat(t265, 8, 8, 2U, t268, 7, t267, 1);
    t279 = (t0 + 6168);
    xsi_vlogvar_assign_value(t279, t265, 0, 0, 8);
    xsi_set_current_line(234, ng0);
    t2 = (t0 + 6328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t7 = (t0 + 6328);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB82;

LAB86:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB87;

LAB88:    *((unsigned int *)t32) = 1;
    goto LAB91;

LAB90:    t21 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB91;

LAB92:    t28 = (t0 + 5848);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng1)));
    memset(t48, 0, 8);
    t33 = (t30 + 4);
    t34 = (t31 + 4);
    t38 = *((unsigned int *)t30);
    t39 = *((unsigned int *)t31);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t34);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t34);
    t50 = (t45 | t46);
    t51 = (~(t50));
    t52 = (t44 & t51);
    if (t52 != 0)
        goto LAB98;

LAB95:    if (t50 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t48) = 1;

LAB98:    memset(t64, 0, 8);
    t49 = (t48 + 4);
    t53 = *((unsigned int *)t49);
    t54 = (~(t53));
    t57 = *((unsigned int *)t48);
    t58 = (t57 & t54);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t49) != 0)
        goto LAB101;

LAB102:    t67 = *((unsigned int *)t32);
    t68 = *((unsigned int *)t64);
    t69 = (t67 & t68);
    *((unsigned int *)t80) = t69;
    t56 = (t32 + 4);
    t60 = (t64 + 4);
    t61 = (t80 + 4);
    t70 = *((unsigned int *)t56);
    t71 = *((unsigned int *)t60);
    t72 = (t70 | t71);
    *((unsigned int *)t61) = t72;
    t73 = *((unsigned int *)t61);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB103;

LAB104:
LAB105:    goto LAB94;

LAB97:    t47 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB98;

LAB99:    *((unsigned int *)t64) = 1;
    goto LAB102;

LAB101:    t55 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB102;

LAB103:    t75 = *((unsigned int *)t80);
    t76 = *((unsigned int *)t61);
    *((unsigned int *)t80) = (t75 | t76);
    t62 = (t32 + 4);
    t63 = (t64 + 4);
    t77 = *((unsigned int *)t32);
    t78 = (~(t77));
    t82 = *((unsigned int *)t62);
    t83 = (~(t82));
    t84 = *((unsigned int *)t64);
    t85 = (~(t84));
    t86 = *((unsigned int *)t63);
    t89 = (~(t86));
    t112 = (t78 & t83);
    t113 = (t85 & t89);
    t90 = (~(t112));
    t91 = (~(t113));
    t95 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t95 & t90);
    t96 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t96 & t91);
    t97 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t97 & t90);
    t98 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t98 & t91);
    goto LAB105;

LAB106:    *((unsigned int *)t88) = 1;
    goto LAB109;

LAB108:    t66 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB109;

LAB110:    t81 = (t0 + 3848U);
    t87 = *((char **)t81);
    t81 = ((char*)((ng2)));
    memset(t120, 0, 8);
    t92 = (t87 + 4);
    t93 = (t81 + 4);
    t110 = *((unsigned int *)t87);
    t111 = *((unsigned int *)t81);
    t114 = (t110 ^ t111);
    t115 = *((unsigned int *)t92);
    t116 = *((unsigned int *)t93);
    t117 = (t115 ^ t116);
    t118 = (t114 | t117);
    t119 = *((unsigned int *)t92);
    t122 = *((unsigned int *)t93);
    t123 = (t119 | t122);
    t124 = (~(t123));
    t125 = (t118 & t124);
    if (t125 != 0)
        goto LAB116;

LAB113:    if (t123 != 0)
        goto LAB115;

LAB114:    *((unsigned int *)t120) = 1;

LAB116:    memset(t135, 0, 8);
    t102 = (t120 + 4);
    t126 = *((unsigned int *)t102);
    t129 = (~(t126));
    t130 = *((unsigned int *)t120);
    t131 = (t130 & t129);
    t132 = (t131 & 1U);
    if (t132 != 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t102) != 0)
        goto LAB119;

LAB120:    t121 = (t135 + 4);
    t138 = *((unsigned int *)t135);
    t139 = *((unsigned int *)t121);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB121;

LAB122:    memcpy(t183, t135, 8);

LAB123:    memset(t191, 0, 8);
    t168 = (t183 + 4);
    t202 = *((unsigned int *)t168);
    t203 = (~(t202));
    t204 = *((unsigned int *)t183);
    t207 = (t204 & t203);
    t208 = (t207 & 1U);
    if (t208 != 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t168) != 0)
        goto LAB137;

LAB138:    t209 = *((unsigned int *)t88);
    t210 = *((unsigned int *)t191);
    t211 = (t209 | t210);
    *((unsigned int *)t223) = t211;
    t182 = (t88 + 4);
    t184 = (t191 + 4);
    t190 = (t223 + 4);
    t212 = *((unsigned int *)t182);
    t213 = *((unsigned int *)t184);
    t214 = (t212 | t213);
    *((unsigned int *)t190) = t214;
    t217 = *((unsigned int *)t190);
    t218 = (t217 != 0);
    if (t218 == 1)
        goto LAB139;

LAB140:
LAB141:    goto LAB112;

LAB115:    t94 = (t120 + 4);
    *((unsigned int *)t120) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB116;

LAB117:    *((unsigned int *)t135) = 1;
    goto LAB120;

LAB119:    t103 = (t135 + 4);
    *((unsigned int *)t135) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB120;

LAB121:    t127 = (t0 + 5848);
    t128 = (t127 + 56U);
    t133 = *((char **)t128);
    t134 = ((char*)((ng2)));
    memset(t151, 0, 8);
    t136 = (t133 + 4);
    t137 = (t134 + 4);
    t141 = *((unsigned int *)t133);
    t142 = *((unsigned int *)t134);
    t143 = (t141 ^ t142);
    t144 = *((unsigned int *)t136);
    t145 = *((unsigned int *)t137);
    t146 = (t144 ^ t145);
    t147 = (t143 | t146);
    t148 = *((unsigned int *)t136);
    t149 = *((unsigned int *)t137);
    t153 = (t148 | t149);
    t154 = (~(t153));
    t155 = (t147 & t154);
    if (t155 != 0)
        goto LAB127;

LAB124:    if (t153 != 0)
        goto LAB126;

LAB125:    *((unsigned int *)t151) = 1;

LAB127:    memset(t167, 0, 8);
    t152 = (t151 + 4);
    t156 = *((unsigned int *)t152);
    t157 = (~(t156));
    t160 = *((unsigned int *)t151);
    t161 = (t160 & t157);
    t162 = (t161 & 1U);
    if (t162 != 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t152) != 0)
        goto LAB130;

LAB131:    t170 = *((unsigned int *)t135);
    t171 = *((unsigned int *)t167);
    t172 = (t170 & t171);
    *((unsigned int *)t183) = t172;
    t159 = (t135 + 4);
    t163 = (t167 + 4);
    t164 = (t183 + 4);
    t173 = *((unsigned int *)t159);
    t174 = *((unsigned int *)t163);
    t175 = (t173 | t174);
    *((unsigned int *)t164) = t175;
    t176 = *((unsigned int *)t164);
    t177 = (t176 != 0);
    if (t177 == 1)
        goto LAB132;

LAB133:
LAB134:    goto LAB123;

LAB126:    t150 = (t151 + 4);
    *((unsigned int *)t151) = 1;
    *((unsigned int *)t150) = 1;
    goto LAB127;

LAB128:    *((unsigned int *)t167) = 1;
    goto LAB131;

LAB130:    t158 = (t167 + 4);
    *((unsigned int *)t167) = 1;
    *((unsigned int *)t158) = 1;
    goto LAB131;

LAB132:    t178 = *((unsigned int *)t183);
    t179 = *((unsigned int *)t164);
    *((unsigned int *)t183) = (t178 | t179);
    t165 = (t135 + 4);
    t166 = (t167 + 4);
    t180 = *((unsigned int *)t135);
    t181 = (~(t180));
    t185 = *((unsigned int *)t165);
    t186 = (~(t185));
    t187 = *((unsigned int *)t167);
    t188 = (~(t187));
    t189 = *((unsigned int *)t166);
    t192 = (~(t189));
    t215 = (t181 & t186);
    t216 = (t188 & t192);
    t193 = (~(t215));
    t194 = (~(t216));
    t198 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t198 & t193);
    t199 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t199 & t194);
    t200 = *((unsigned int *)t183);
    *((unsigned int *)t183) = (t200 & t193);
    t201 = *((unsigned int *)t183);
    *((unsigned int *)t183) = (t201 & t194);
    goto LAB134;

LAB135:    *((unsigned int *)t191) = 1;
    goto LAB138;

LAB137:    t169 = (t191 + 4);
    *((unsigned int *)t191) = 1;
    *((unsigned int *)t169) = 1;
    goto LAB138;

LAB139:    t219 = *((unsigned int *)t223);
    t220 = *((unsigned int *)t190);
    *((unsigned int *)t223) = (t219 | t220);
    t195 = (t88 + 4);
    t196 = (t191 + 4);
    t221 = *((unsigned int *)t195);
    t222 = (~(t221));
    t225 = *((unsigned int *)t88);
    t250 = (t225 & t222);
    t226 = *((unsigned int *)t196);
    t227 = (~(t226));
    t228 = *((unsigned int *)t191);
    t254 = (t228 & t227);
    t229 = (~(t250));
    t232 = (~(t254));
    t233 = *((unsigned int *)t190);
    *((unsigned int *)t190) = (t233 & t229);
    t234 = *((unsigned int *)t190);
    *((unsigned int *)t190) = (t234 & t232);
    goto LAB141;

LAB142:    xsi_set_current_line(236, ng0);

LAB145:    xsi_set_current_line(239, ng0);
    t205 = (t0 + 3848U);
    t206 = *((char **)t205);
    t205 = ((char*)((ng3)));
    memset(t231, 0, 8);
    t224 = (t206 + 4);
    t230 = (t205 + 4);
    t243 = *((unsigned int *)t206);
    t244 = *((unsigned int *)t205);
    t247 = (t243 ^ t244);
    t248 = *((unsigned int *)t224);
    t249 = *((unsigned int *)t230);
    t251 = (t248 ^ t249);
    t252 = (t247 | t251);
    t253 = *((unsigned int *)t224);
    t255 = *((unsigned int *)t230);
    t256 = (t253 | t255);
    t257 = (~(t256));
    t258 = (t252 & t257);
    if (t258 != 0)
        goto LAB149;

LAB146:    if (t256 != 0)
        goto LAB148;

LAB147:    *((unsigned int *)t231) = 1;

LAB149:    memset(t265, 0, 8);
    t236 = (t231 + 4);
    t260 = *((unsigned int *)t236);
    t261 = (~(t260));
    t262 = *((unsigned int *)t231);
    t263 = (t262 & t261);
    t264 = (t263 & 1U);
    if (t264 != 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t236) != 0)
        goto LAB152;

LAB153:    t245 = (t265 + 4);
    t273 = *((unsigned int *)t265);
    t274 = *((unsigned int *)t245);
    t275 = (t273 || t274);
    if (t275 > 0)
        goto LAB154;

LAB155:    memcpy(t295, t265, 8);

LAB156:    t327 = (t295 + 4);
    t328 = *((unsigned int *)t327);
    t329 = (~(t328));
    t330 = *((unsigned int *)t295);
    t331 = (t330 & t329);
    t332 = (t331 != 0);
    if (t332 > 0)
        goto LAB168;

LAB169:    xsi_set_current_line(244, ng0);
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
        goto LAB173;

LAB172:    if (t18 != 0)
        goto LAB174;

LAB175:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB176;

LAB177:
LAB178:
LAB170:    goto LAB144;

LAB148:    t235 = (t231 + 4);
    *((unsigned int *)t231) = 1;
    *((unsigned int *)t235) = 1;
    goto LAB149;

LAB150:    *((unsigned int *)t265) = 1;
    goto LAB153;

LAB152:    t237 = (t265 + 4);
    *((unsigned int *)t265) = 1;
    *((unsigned int *)t237) = 1;
    goto LAB153;

LAB154:    t246 = (t0 + 6328);
    t259 = (t246 + 56U);
    t266 = *((char **)t259);
    t267 = ((char*)((ng3)));
    memset(t268, 0, 8);
    t269 = (t266 + 4);
    t270 = (t267 + 4);
    t276 = *((unsigned int *)t266);
    t277 = *((unsigned int *)t267);
    t278 = (t276 ^ t277);
    t280 = *((unsigned int *)t269);
    t281 = *((unsigned int *)t270);
    t282 = (t280 ^ t281);
    t283 = (t278 | t282);
    t284 = *((unsigned int *)t269);
    t285 = *((unsigned int *)t270);
    t286 = (t284 | t285);
    t287 = (~(t286));
    t288 = (t283 & t287);
    if (t288 != 0)
        goto LAB160;

LAB157:    if (t286 != 0)
        goto LAB159;

LAB158:    *((unsigned int *)t268) = 1;

LAB160:    memset(t289, 0, 8);
    t272 = (t268 + 4);
    t290 = *((unsigned int *)t272);
    t291 = (~(t290));
    t292 = *((unsigned int *)t268);
    t293 = (t292 & t291);
    t294 = (t293 & 1U);
    if (t294 != 0)
        goto LAB161;

LAB162:    if (*((unsigned int *)t272) != 0)
        goto LAB163;

LAB164:    t296 = *((unsigned int *)t265);
    t297 = *((unsigned int *)t289);
    t298 = (t296 & t297);
    *((unsigned int *)t295) = t298;
    t299 = (t265 + 4);
    t300 = (t289 + 4);
    t301 = (t295 + 4);
    t302 = *((unsigned int *)t299);
    t303 = *((unsigned int *)t300);
    t304 = (t302 | t303);
    *((unsigned int *)t301) = t304;
    t305 = *((unsigned int *)t301);
    t306 = (t305 != 0);
    if (t306 == 1)
        goto LAB165;

LAB166:
LAB167:    goto LAB156;

LAB159:    t271 = (t268 + 4);
    *((unsigned int *)t268) = 1;
    *((unsigned int *)t271) = 1;
    goto LAB160;

LAB161:    *((unsigned int *)t289) = 1;
    goto LAB164;

LAB163:    t279 = (t289 + 4);
    *((unsigned int *)t289) = 1;
    *((unsigned int *)t279) = 1;
    goto LAB164;

LAB165:    t307 = *((unsigned int *)t295);
    t308 = *((unsigned int *)t301);
    *((unsigned int *)t295) = (t307 | t308);
    t309 = (t265 + 4);
    t310 = (t289 + 4);
    t311 = *((unsigned int *)t265);
    t312 = (~(t311));
    t313 = *((unsigned int *)t309);
    t314 = (~(t313));
    t315 = *((unsigned int *)t289);
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
    goto LAB167;

LAB168:    xsi_set_current_line(239, ng0);

LAB171:    xsi_set_current_line(241, ng0);
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
    xsi_set_current_line(242, ng0);
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
    goto LAB170;

LAB173:    *((unsigned int *)t6) = 1;
    goto LAB175;

LAB174:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB175;

LAB176:    xsi_set_current_line(244, ng0);

LAB179:    xsi_set_current_line(245, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 6008);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t48, 0, 8);
    t33 = (t48 + 4);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 0);
    *((unsigned int *)t48) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t39 & 127U);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 127U);
    xsi_vlogtype_concat(t32, 8, 8, 2U, t48, 7, t28, 1);
    t47 = (t0 + 6008);
    xsi_vlogvar_wait_assign_value(t47, t32, 0, 0, 8, 0LL);
    xsi_set_current_line(246, ng0);
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
    goto LAB178;

}


extern void work_m_00000000000017383342_1714226470_init()
{
	static char *pe[] = {(void *)Always_60_0,(void *)Always_73_1,(void *)Cont_88_2,(void *)Always_109_3,(void *)Always_220_4,(void *)Always_222_5};
	xsi_register_didat("work_m_00000000000017383342_1714226470", "isim/TB_AXI_SPI_isim_beh.exe.sim/work/m_00000000000017383342_1714226470.didat");
	xsi_register_executes(pe);
}
