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
static const char *ng0 = "D:/Documents/egyetem/rendszerarch/projektek/AXI_Lite_to_SPI/TB_AXI_SPI.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {6U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {240U, 0U};
static unsigned int ng7[] = {170U, 0U};
static unsigned int ng8[] = {3U, 0U};



static void Initial_180_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 9568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(180, ng0);

LAB4:    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 9376);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    goto LAB1;

}

static void Initial_191_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 9816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 9624);
    xsi_process_wait(t2, 17000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(191, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Always_192_2(char *t0)
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

LAB0:    t1 = (t0 + 10064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 9872);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(192, ng0);
    t4 = (t0 + 5608);
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
    t24 = (t0 + 5608);
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

static void Initial_226_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 10312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(226, ng0);

LAB4:    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 10120);
    xsi_process_wait(t2, 170000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(233, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 7848);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 10120);
    xsi_process_wait(t2, 400000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(236, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 7848);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(237, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Always_240_4(char *t0)
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

LAB0:    t1 = (t0 + 10560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(240, ng0);
    t2 = (t0 + 10368);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(240, ng0);
    t4 = (t0 + 8008);
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
    t24 = (t0 + 8008);
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

static void Initial_242_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 10808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(242, ng0);

LAB4:    xsi_set_current_line(243, ng0);
    t2 = (t0 + 10616);
    xsi_process_wait(t2, 650000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(244, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(246, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(248, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Always_251_6(char *t0)
{
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

LAB0:    t1 = (t0 + 11056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(251, ng0);
    t2 = (t0 + 12616);
    *((int *)t2) = 1;
    t3 = (t0 + 11088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(251, ng0);

LAB5:    xsi_set_current_line(252, ng0);
    t4 = (t0 + 5208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(252, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 8328);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Initial_255_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 11304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(255, ng0);

LAB4:    xsi_set_current_line(256, ng0);
    t2 = (t0 + 11112);
    xsi_process_wait(t2, 3050000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(257, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(258, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(259, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_262_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 11552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(262, ng0);

LAB4:    xsi_set_current_line(263, ng0);
    t2 = (t0 + 11360);
    xsi_process_wait(t2, 4350000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(264, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(265, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_268_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 11800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(268, ng0);

LAB4:    xsi_set_current_line(269, ng0);
    t2 = (t0 + 11608);
    xsi_process_wait(t2, 6350000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(270, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(271, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(272, ng0);
    t2 = (t0 + 11608);
    xsi_process_wait(t2, 300000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(273, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_277_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 12048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(277, ng0);

LAB4:    xsi_set_current_line(278, ng0);
    t2 = (t0 + 11856);
    xsi_process_wait(t2, 8150000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(279, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(280, ng0);
    t2 = (t0 + 11856);
    xsi_process_wait(t2, 1500000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(281, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(282, ng0);
    t2 = (t0 + 11856);
    xsi_process_wait(t2, 300000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(283, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}

static void Initial_288_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 12296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(288, ng0);

LAB4:    xsi_set_current_line(289, ng0);
    t2 = (t0 + 12104);
    xsi_process_wait(t2, 60000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(290, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(291, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(292, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(293, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(294, ng0);
    t2 = (t0 + 12104);
    xsi_process_wait(t2, 1500000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(295, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(296, ng0);
    t2 = (t0 + 12104);
    xsi_process_wait(t2, 1600000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(297, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(298, ng0);
    t2 = (t0 + 12104);
    xsi_process_wait(t2, 1600000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(299, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(300, ng0);
    t2 = (t0 + 12104);
    xsi_process_wait(t2, 3000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(301, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}


extern void work_m_00000000001994744714_3302136066_init()
{
	static char *pe[] = {(void *)Initial_180_0,(void *)Initial_191_1,(void *)Always_192_2,(void *)Initial_226_3,(void *)Always_240_4,(void *)Initial_242_5,(void *)Always_251_6,(void *)Initial_255_7,(void *)Initial_262_8,(void *)Initial_268_9,(void *)Initial_277_10,(void *)Initial_288_11};
	xsi_register_didat("work_m_00000000001994744714_3302136066", "isim/TB_AXI_SPI_isim_beh.exe.sim/work/m_00000000001994744714_3302136066.didat");
	xsi_register_executes(pe);
}
