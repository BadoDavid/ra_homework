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
static const char *ng0 = "D:/Projektek/ra_homework/AXI_Lite_to_SPI/SPI_Writer.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {7U, 0U};
static unsigned int ng4[] = {1U, 0U};



static void Always_36_0(char *t0)
{
    char t15[8];
    char t39[8];
    char t40[8];
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
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t41;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4288);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(74, ng0);

LAB46:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(37, ng0);

LAB9:    xsi_set_current_line(38, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(46, ng0);

LAB13:    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(52, ng0);

LAB17:    xsi_set_current_line(53, ng0);
    t11 = (t0 + 2568);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t13 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB21;

LAB18:    if (t27 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t15) = 1;

LAB21:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB29;

LAB26:    if (t22 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t15) = 1;

LAB29:    t14 = (t15 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t15);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB30;

LAB31:
LAB32:
LAB24:    goto LAB16;

LAB20:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(53, ng0);

LAB25:    xsi_set_current_line(54, ng0);
    t37 = ((char*)((ng1)));
    t38 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t38, t37, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 7);
    t18 = (t10 & 1);
    *((unsigned int *)t2) = t18;
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t39, 0, 8);
    t2 = (t39 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t39) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 7);
    t18 = (t10 & 1);
    *((unsigned int *)t2) = t18;
    t5 = (t0 + 1368U);
    t11 = *((char **)t5);
    memset(t40, 0, 8);
    t5 = (t40 + 4);
    t12 = (t11 + 4);
    t19 = *((unsigned int *)t11);
    t20 = (t19 >> 0);
    *((unsigned int *)t40) = t20;
    t21 = *((unsigned int *)t12);
    t22 = (t21 >> 0);
    *((unsigned int *)t5) = t22;
    t23 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t23 & 127U);
    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 & 127U);
    xsi_vlogtype_concat(t15, 8, 8, 2U, t40, 7, t39, 1);
    t13 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t13, t15, 0, 0, 8, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB24;

LAB28:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(60, ng0);

LAB33:    xsi_set_current_line(61, ng0);
    t16 = (t0 + 2888);
    t17 = (t16 + 56U);
    t30 = *((char **)t17);
    memset(t39, 0, 8);
    t31 = (t39 + 4);
    t37 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (t32 >> 7);
    t34 = (t33 & 1);
    *((unsigned int *)t39) = t34;
    t35 = *((unsigned int *)t37);
    t36 = (t35 >> 7);
    t41 = (t36 & 1);
    *((unsigned int *)t31) = t41;
    t38 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t38, t39, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t39, 0, 8);
    t5 = (t39 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t39) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 7);
    t18 = (t10 & 1);
    *((unsigned int *)t5) = t18;
    t12 = (t0 + 2888);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t40, 0, 8);
    t16 = (t40 + 4);
    t17 = (t14 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (t19 >> 0);
    *((unsigned int *)t40) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 0);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t23 & 127U);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 127U);
    xsi_vlogtype_concat(t15, 8, 8, 2U, t40, 7, t39, 1);
    t30 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t30, t15, 0, 0, 8, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t15, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB37;

LAB34:    if (t22 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t15) = 1;

LAB37:    t14 = (t15 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t15);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB38;

LAB39:
LAB40:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t4, 3, t5, 32);
    t11 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t11, t15, 0, 0, 3, 0LL);
    goto LAB32;

LAB36:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(63, ng0);

LAB41:    xsi_set_current_line(64, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB42;

LAB43:
LAB44:    goto LAB40;

LAB42:    xsi_set_current_line(65, ng0);

LAB45:    xsi_set_current_line(67, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB44;

}


extern void work_m_00000000003801381322_4124233851_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_00000000003801381322_4124233851", "isim/TB_AXI_SPI_isim_beh.exe.sim/work/m_00000000003801381322_4124233851.didat");
	xsi_register_executes(pe);
}
