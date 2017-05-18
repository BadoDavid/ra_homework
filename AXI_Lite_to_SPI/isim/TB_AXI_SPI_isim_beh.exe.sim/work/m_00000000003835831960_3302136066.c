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
static const char *ng0 = "D:/Projektek/ra_homework/AXI_Lite_to_SPI/TB_AXI_SPI.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {4294901760U, 0U};
static unsigned int ng4[] = {8U, 0U};
static unsigned int ng5[] = {268435456U, 0U};
static unsigned int ng6[] = {12U, 0U};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {275U, 0U};
static unsigned int ng9[] = {240U, 0U};
static unsigned int ng10[] = {170U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {258U, 0U};



static void Initial_138_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 7776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(138, ng0);

LAB4:    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5416);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 7584);
    xsi_process_wait(t2, 17000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(141, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5576);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 7584);
    xsi_process_wait(t2, 30000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(142, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5576);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Always_144_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
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
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 8024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 7832);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(144, ng0);
    t4 = (t0 + 5416);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 5416);
    xsi_vlogvar_wait_assign_value(t24, t3, 0, 0, 1, 0LL);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_147_2(char *t0)
{
    char t6[8];
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

LAB0:    t1 = (t0 + 8272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 11816);
    *((int *)t2) = 1;
    t3 = (t0 + 8304);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(147, ng0);
    t4 = (t0 + 4536U);
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
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(147, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 6056);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB11;

}

static void Always_148_3(char *t0)
{
    char t6[8];
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

LAB0:    t1 = (t0 + 8520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 11832);
    *((int *)t2) = 1;
    t3 = (t0 + 8552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(148, ng0);
    t4 = (t0 + 4856U);
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
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(148, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 6376);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB11;

}

static void Initial_151_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 8768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(151, ng0);

LAB4:    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 8576);
    xsi_process_wait(t2, 17000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(156, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6856);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 8576);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(158, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 6856);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_174_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;

LAB0:    t1 = (t0 + 9016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(174, ng0);

LAB4:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 8824);
    xsi_process_wait(t2, 37000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(175, ng0);
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 4);
    t6 = (t0 + 5736);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 8824);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(177, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6056);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_181_6(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;

LAB0:    t1 = (t0 + 9264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(181, ng0);

LAB4:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 9072);
    xsi_process_wait(t2, 207000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(182, ng0);
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 4);
    t6 = (t0 + 5736);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng8)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t2, 32, t3, 32);
    t4 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 9072);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(184, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6056);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_186_7(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;

LAB0:    t1 = (t0 + 9512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(186, ng0);

LAB4:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 9320);
    xsi_process_wait(t2, 407000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(187, ng0);
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 4);
    t6 = (t0 + 5736);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng7)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t2, 32, t3, 8);
    t4 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 9320);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(189, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6056);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_191_8(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;

LAB0:    t1 = (t0 + 9760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(191, ng0);

LAB4:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 9568);
    xsi_process_wait(t2, 607000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(192, ng0);
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 4);
    t6 = (t0 + 5736);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng9)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t2, 32, t3, 8);
    t4 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 9568);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(194, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6056);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_196_9(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;

LAB0:    t1 = (t0 + 10008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(196, ng0);

LAB4:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 9816);
    xsi_process_wait(t2, 807000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(197, ng0);
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 4);
    t6 = (t0 + 5736);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng10)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t2, 32, t3, 32);
    t4 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 9816);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(199, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6056);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_203_10(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;

LAB0:    t1 = (t0 + 10256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(203, ng0);

LAB4:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 10064);
    xsi_process_wait(t2, 6000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(205, ng0);
    t3 = (t0 + 10064);
    xsi_process_wait(t3, 807000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(205, ng0);
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng11)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 4);
    t7 = (t0 + 6216);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 10064);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(206, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6376);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_210_11(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;

LAB0:    t1 = (t0 + 10504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(210, ng0);

LAB4:    xsi_set_current_line(211, ng0);
    t2 = (t0 + 10312);
    xsi_process_wait(t2, 6000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(212, ng0);
    t3 = (t0 + 10312);
    xsi_process_wait(t3, 1007000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(212, ng0);
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 4);
    t7 = (t0 + 5736);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng12)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t2, 32, t3, 32);
    t4 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 10312);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(214, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6056);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_216_12(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;

LAB0:    t1 = (t0 + 10752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(216, ng0);

LAB4:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 10560);
    xsi_process_wait(t2, 6000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(218, ng0);
    t3 = (t0 + 10560);
    xsi_process_wait(t3, 1207000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(218, ng0);
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 4);
    t7 = (t0 + 5736);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t2, 32, t3, 8);
    t4 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 10560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(220, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6056);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_222_13(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;

LAB0:    t1 = (t0 + 11000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(222, ng0);

LAB4:    xsi_set_current_line(223, ng0);
    t2 = (t0 + 10808);
    xsi_process_wait(t2, 6000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(224, ng0);
    t3 = (t0 + 10808);
    xsi_process_wait(t3, 1407000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(224, ng0);
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 4);
    t7 = (t0 + 5736);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t2, 32, t3, 8);
    t4 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(226, ng0);
    t2 = (t0 + 10808);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(226, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6056);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_229_14(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;

LAB0:    t1 = (t0 + 11248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(229, ng0);

LAB4:    xsi_set_current_line(230, ng0);
    t2 = (t0 + 11056);
    xsi_process_wait(t2, 6000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(231, ng0);
    t3 = (t0 + 11056);
    xsi_process_wait(t3, 10000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(231, ng0);
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng11)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 4);
    t7 = (t0 + 6216);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 11056);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(232, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6376);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_235_15(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;

LAB0:    t1 = (t0 + 11496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(235, ng0);

LAB4:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 11304);
    xsi_process_wait(t2, 6000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(237, ng0);
    t3 = (t0 + 11304);
    xsi_process_wait(t3, 10600000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(237, ng0);
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 4);
    t7 = (t0 + 6216);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(238, ng0);
    t2 = (t0 + 11304);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(238, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6376);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}


extern void work_m_00000000003835831960_3302136066_init()
{
	static char *pe[] = {(void *)Initial_138_0,(void *)Always_144_1,(void *)Always_147_2,(void *)Always_148_3,(void *)Initial_151_4,(void *)Initial_174_5,(void *)Initial_181_6,(void *)Initial_186_7,(void *)Initial_191_8,(void *)Initial_196_9,(void *)Initial_203_10,(void *)Initial_210_11,(void *)Initial_216_12,(void *)Initial_222_13,(void *)Initial_229_14,(void *)Initial_235_15};
	xsi_register_didat("work_m_00000000003835831960_3302136066", "isim/TB_AXI_SPI_isim_beh.exe.sim/work/m_00000000003835831960_3302136066.didat");
	xsi_register_executes(pe);
}
