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
static unsigned int ng5[] = {805306368U, 0U};
static unsigned int ng6[] = {12U, 0U};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {240U, 0U};
static unsigned int ng12[] = {170U, 0U};
static unsigned int ng13[] = {3U, 0U};



static void Initial_181_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 9872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(181, ng0);

LAB4:    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6712);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 9680);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    goto LAB1;

}

static void Initial_192_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 10120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 9928);
    xsi_process_wait(t2, 17000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(192, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 6552);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Always_193_2(char *t0)
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

LAB0:    t1 = (t0 + 10368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(193, ng0);
    t2 = (t0 + 10176);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(193, ng0);
    t4 = (t0 + 6392);
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
    t24 = (t0 + 6392);
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

static void Initial_330_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;

LAB0:    t1 = (t0 + 10616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(330, ng0);

LAB4:    xsi_set_current_line(331, ng0);
    t2 = (t0 + 10424);
    xsi_process_wait(t2, 37000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(331, ng0);
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 4);
    t6 = (t0 + 6872);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(332, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7032);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(333, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Always_335_4(char *t0)
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

LAB0:    t1 = (t0 + 10864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(335, ng0);
    t2 = (t0 + 14656);
    *((int *)t2) = 1;
    t3 = (t0 + 10896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(335, ng0);
    t4 = (t0 + 5192U);
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

LAB9:    xsi_set_current_line(335, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 7192);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB11;

}

static void Initial_337_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;

LAB0:    t1 = (t0 + 11112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(337, ng0);

LAB4:    xsi_set_current_line(338, ng0);
    t2 = (t0 + 10920);
    xsi_process_wait(t2, 207000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(338, ng0);
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 4);
    t6 = (t0 + 6872);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(339, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng8)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t2, 32, t3, 8);
    t4 = (t0 + 7032);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(340, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_343_6(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;

LAB0:    t1 = (t0 + 11360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(343, ng0);

LAB4:    xsi_set_current_line(344, ng0);
    t2 = (t0 + 11168);
    xsi_process_wait(t2, 607000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(344, ng0);
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng9)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 4);
    t6 = (t0 + 7352);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(345, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7672);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Always_347_7(char *t0)
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

LAB0:    t1 = (t0 + 11608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(347, ng0);
    t2 = (t0 + 14672);
    *((int *)t2) = 1;
    t3 = (t0 + 11640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(347, ng0);
    t4 = (t0 + 5352U);
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

LAB9:    xsi_set_current_line(347, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 7672);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB11;

}

static void Initial_349_8(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;

LAB0:    t1 = (t0 + 11856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(349, ng0);

LAB4:    xsi_set_current_line(350, ng0);
    t2 = (t0 + 11664);
    xsi_process_wait(t2, 1007000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(350, ng0);
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 4);
    t6 = (t0 + 6872);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(351, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng10)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t2, 32, t3, 8);
    t4 = (t0 + 7032);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(352, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_354_9(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;

LAB0:    t1 = (t0 + 12104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(354, ng0);

LAB4:    xsi_set_current_line(355, ng0);
    t2 = (t0 + 11912);
    xsi_process_wait(t2, 1107000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(355, ng0);
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 4);
    t6 = (t0 + 6872);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(356, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng7)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t2, 32, t3, 8);
    t4 = (t0 + 7032);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(357, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_359_10(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;

LAB0:    t1 = (t0 + 12352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(359, ng0);

LAB4:    xsi_set_current_line(360, ng0);
    t2 = (t0 + 12160);
    xsi_process_wait(t2, 1207000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(360, ng0);
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 4);
    t6 = (t0 + 6872);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(361, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng11)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t2, 32, t3, 8);
    t4 = (t0 + 7032);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(362, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_364_11(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;

LAB0:    t1 = (t0 + 12600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(364, ng0);

LAB4:    xsi_set_current_line(365, ng0);
    t2 = (t0 + 12408);
    xsi_process_wait(t2, 1307000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(365, ng0);
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 4);
    t6 = (t0 + 6872);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(366, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng12)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t2, 32, t3, 32);
    t4 = (t0 + 7032);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(367, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_371_12(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;

LAB0:    t1 = (t0 + 12848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(371, ng0);

LAB4:    xsi_set_current_line(372, ng0);
    t2 = (t0 + 12656);
    xsi_process_wait(t2, 1507000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(372, ng0);
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng9)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 4);
    t6 = (t0 + 7352);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(373, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7672);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_377_13(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;

LAB0:    t1 = (t0 + 13096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(377, ng0);

LAB4:    xsi_set_current_line(378, ng0);
    t2 = (t0 + 12904);
    xsi_process_wait(t2, 6000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(379, ng0);
    t3 = (t0 + 12904);
    xsi_process_wait(t3, 1007000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(379, ng0);
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 4);
    t7 = (t0 + 6872);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(380, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng13)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t2, 32, t3, 8);
    t4 = (t0 + 7032);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(381, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_383_14(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;

LAB0:    t1 = (t0 + 13344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(383, ng0);

LAB4:    xsi_set_current_line(384, ng0);
    t2 = (t0 + 13152);
    xsi_process_wait(t2, 6000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(385, ng0);
    t3 = (t0 + 13152);
    xsi_process_wait(t3, 1107000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(385, ng0);
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 4);
    t7 = (t0 + 6872);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(386, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t2, 32, t3, 8);
    t4 = (t0 + 7032);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(387, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_389_15(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;

LAB0:    t1 = (t0 + 13592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(389, ng0);

LAB4:    xsi_set_current_line(390, ng0);
    t2 = (t0 + 13400);
    xsi_process_wait(t2, 6000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(391, ng0);
    t3 = (t0 + 13400);
    xsi_process_wait(t3, 1207000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(391, ng0);
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 4);
    t7 = (t0 + 6872);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(392, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng11)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t2, 32, t3, 8);
    t4 = (t0 + 7032);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(393, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_396_16(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;

LAB0:    t1 = (t0 + 13840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(396, ng0);

LAB4:    xsi_set_current_line(397, ng0);
    t2 = (t0 + 13648);
    xsi_process_wait(t2, 6000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(398, ng0);
    t3 = (t0 + 13648);
    xsi_process_wait(t3, 20000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(398, ng0);
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 4);
    t7 = (t0 + 7352);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(399, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7672);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_402_17(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;

LAB0:    t1 = (t0 + 14088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(402, ng0);

LAB4:    xsi_set_current_line(403, ng0);
    t2 = (t0 + 13896);
    xsi_process_wait(t2, 6000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(404, ng0);
    t3 = (t0 + 13896);
    xsi_process_wait(t3, 25000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(404, ng0);
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 4);
    t7 = (t0 + 7352);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(405, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7672);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_408_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 14336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(408, ng0);

LAB4:    xsi_set_current_line(409, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(410, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7992);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(411, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8152);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(412, ng0);
    t2 = (t0 + 14144);
    xsi_process_wait(t2, 170000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(413, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 8152);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(414, ng0);
    t2 = (t0 + 14144);
    xsi_process_wait(t2, 400000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(415, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 8152);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(416, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7992);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(417, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}


extern void work_m_00000000000281116472_3302136066_init()
{
	static char *pe[] = {(void *)Initial_181_0,(void *)Initial_192_1,(void *)Always_193_2,(void *)Initial_330_3,(void *)Always_335_4,(void *)Initial_337_5,(void *)Initial_343_6,(void *)Always_347_7,(void *)Initial_349_8,(void *)Initial_354_9,(void *)Initial_359_10,(void *)Initial_364_11,(void *)Initial_371_12,(void *)Initial_377_13,(void *)Initial_383_14,(void *)Initial_389_15,(void *)Initial_396_16,(void *)Initial_402_17,(void *)Initial_408_18};
	xsi_register_didat("work_m_00000000000281116472_3302136066", "isim/TB_AXI_SPI_isim_beh.exe.sim/work/m_00000000000281116472_3302136066.didat");
	xsi_register_executes(pe);
}