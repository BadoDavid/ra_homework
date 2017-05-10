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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003369708745_1065690844_init();
    work_m_00000000004085518319_1714226470_init();
    xilinxcorelib_ver_m_00000000001553933253_0870541705_init();
    xilinxcorelib_ver_m_00000000003461156251_1730892331_init();
    xilinxcorelib_ver_m_00000000001291582275_0052617413_init();
    work_m_00000000002802514871_4114046193_init();
    xilinxcorelib_ver_m_00000000001553933253_1682563662_init();
    xilinxcorelib_ver_m_00000000003461156251_2279043104_init();
    xilinxcorelib_ver_m_00000000001291582275_3266368905_init();
    work_m_00000000000525253079_0594460652_init();
    work_m_00000000001590479269_3836069363_init();
    work_m_00000000002632546562_1505086248_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002632546562_1505086248");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}