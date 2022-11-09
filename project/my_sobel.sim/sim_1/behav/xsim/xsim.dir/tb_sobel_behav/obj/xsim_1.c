/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_2(char*, char *);
extern void execute_3(char*, char *);
extern void execute_4(char*, char *);
extern void execute_1095(char*, char *);
extern void execute_1096(char*, char *);
extern void execute_1097(char*, char *);
extern void execute_165(char*, char *);
extern void execute_1090(char*, char *);
extern void execute_1091(char*, char *);
extern void execute_1092(char*, char *);
extern void execute_1093(char*, char *);
extern void execute_1094(char*, char *);
extern void execute_9(char*, char *);
extern void execute_10(char*, char *);
extern void execute_11(char*, char *);
extern void execute_12(char*, char *);
extern void execute_13(char*, char *);
extern void execute_14(char*, char *);
extern void execute_15(char*, char *);
extern void execute_16(char*, char *);
extern void execute_17(char*, char *);
extern void execute_18(char*, char *);
extern void execute_19(char*, char *);
extern void execute_20(char*, char *);
extern void execute_22(char*, char *);
extern void execute_23(char*, char *);
extern void execute_24(char*, char *);
extern void execute_25(char*, char *);
extern void execute_26(char*, char *);
extern void execute_27(char*, char *);
extern void execute_28(char*, char *);
extern void execute_29(char*, char *);
extern void execute_30(char*, char *);
extern void execute_31(char*, char *);
extern void execute_32(char*, char *);
extern void execute_33(char*, char *);
extern void execute_34(char*, char *);
extern void execute_35(char*, char *);
extern void execute_36(char*, char *);
extern void execute_37(char*, char *);
extern void execute_38(char*, char *);
extern void execute_39(char*, char *);
extern void execute_40(char*, char *);
extern void execute_41(char*, char *);
extern void execute_42(char*, char *);
extern void execute_43(char*, char *);
extern void execute_44(char*, char *);
extern void execute_1084(char*, char *);
extern void execute_1085(char*, char *);
extern void execute_1086(char*, char *);
extern void execute_1087(char*, char *);
extern void execute_1088(char*, char *);
extern void execute_1089(char*, char *);
extern void vlog_const_rhs_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_532(char*, char *);
extern void execute_533(char*, char *);
extern void execute_534(char*, char *);
extern void execute_535(char*, char *);
extern void execute_536(char*, char *);
extern void execute_537(char*, char *);
extern void execute_548(char*, char *);
extern void execute_549(char*, char *);
extern void execute_550(char*, char *);
extern void execute_551(char*, char *);
extern void execute_553(char*, char *);
extern void execute_554(char*, char *);
extern void execute_555(char*, char *);
extern void execute_556(char*, char *);
extern void execute_560(char*, char *);
extern void execute_561(char*, char *);
extern void execute_569(char*, char *);
extern void execute_573(char*, char *);
extern void execute_574(char*, char *);
extern void execute_575(char*, char *);
extern void execute_576(char*, char *);
extern void execute_578(char*, char *);
extern void execute_579(char*, char *);
extern void execute_580(char*, char *);
extern void execute_581(char*, char *);
extern void execute_587(char*, char *);
extern void execute_588(char*, char *);
extern void execute_593(char*, char *);
extern void execute_599(char*, char *);
extern void execute_603(char*, char *);
extern void execute_604(char*, char *);
extern void execute_607(char*, char *);
extern void execute_608(char*, char *);
extern void execute_611(char*, char *);
extern void execute_612(char*, char *);
extern void execute_615(char*, char *);
extern void execute_616(char*, char *);
extern void execute_619(char*, char *);
extern void execute_620(char*, char *);
extern void execute_623(char*, char *);
extern void execute_624(char*, char *);
extern void execute_166(char*, char *);
extern void execute_99(char*, char *);
extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void vlog_simple_process_execute_1_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_512(char*, char *);
extern void execute_515(char*, char *);
extern void execute_516(char*, char *);
extern void execute_517(char*, char *);
extern void execute_520(char*, char *);
extern void execute_521(char*, char *);
extern void execute_522(char*, char *);
extern void execute_523(char*, char *);
extern void execute_524(char*, char *);
extern void execute_49(char*, char *);
extern void execute_50(char*, char *);
extern void execute_51(char*, char *);
extern void execute_52(char*, char *);
extern void execute_53(char*, char *);
extern void execute_54(char*, char *);
extern void execute_55(char*, char *);
extern void execute_56(char*, char *);
extern void execute_57(char*, char *);
extern void execute_58(char*, char *);
extern void execute_59(char*, char *);
extern void execute_60(char*, char *);
extern void execute_61(char*, char *);
extern void execute_62(char*, char *);
extern void execute_63(char*, char *);
extern void execute_64(char*, char *);
extern void execute_94(char*, char *);
extern void execute_95(char*, char *);
extern void execute_96(char*, char *);
extern void execute_97(char*, char *);
extern void execute_98(char*, char *);
extern void execute_398(char*, char *);
extern void execute_399(char*, char *);
extern void execute_402(char*, char *);
extern void execute_464(char*, char *);
extern void execute_465(char*, char *);
extern void execute_466(char*, char *);
extern void execute_469(char*, char *);
extern void execute_473(char*, char *);
extern void execute_486(char*, char *);
extern void execute_487(char*, char *);
extern void execute_488(char*, char *);
extern void execute_496(char*, char *);
extern void execute_497(char*, char *);
extern void execute_498(char*, char *);
extern void execute_499(char*, char *);
extern void execute_500(char*, char *);
extern void execute_501(char*, char *);
extern void execute_502(char*, char *);
extern void execute_503(char*, char *);
extern void execute_504(char*, char *);
extern void execute_505(char*, char *);
extern void execute_506(char*, char *);
extern void execute_507(char*, char *);
extern void execute_508(char*, char *);
extern void execute_509(char*, char *);
extern void execute_69(char*, char *);
extern void execute_70(char*, char *);
extern void execute_71(char*, char *);
extern void execute_72(char*, char *);
extern void execute_73(char*, char *);
extern void execute_74(char*, char *);
extern void execute_80(char*, char *);
extern void execute_81(char*, char *);
extern void execute_85(char*, char *);
extern void execute_86(char*, char *);
extern void execute_87(char*, char *);
extern void execute_88(char*, char *);
extern void execute_89(char*, char *);
extern void execute_90(char*, char *);
extern void execute_91(char*, char *);
extern void execute_92(char*, char *);
extern void execute_403(char*, char *);
extern void execute_404(char*, char *);
extern void execute_405(char*, char *);
extern void execute_406(char*, char *);
extern void execute_408(char*, char *);
extern void execute_409(char*, char *);
extern void execute_412(char*, char *);
extern void execute_415(char*, char *);
extern void execute_416(char*, char *);
extern void execute_417(char*, char *);
extern void execute_418(char*, char *);
extern void execute_419(char*, char *);
extern void execute_422(char*, char *);
extern void execute_423(char*, char *);
extern void execute_424(char*, char *);
extern void execute_425(char*, char *);
extern void execute_426(char*, char *);
extern void execute_427(char*, char *);
extern void execute_428(char*, char *);
extern void execute_429(char*, char *);
extern void execute_430(char*, char *);
extern void execute_431(char*, char *);
extern void execute_432(char*, char *);
extern void execute_433(char*, char *);
extern void execute_434(char*, char *);
extern void execute_435(char*, char *);
extern void execute_436(char*, char *);
extern void execute_437(char*, char *);
extern void execute_438(char*, char *);
extern void execute_439(char*, char *);
extern void execute_440(char*, char *);
extern void execute_441(char*, char *);
extern void execute_442(char*, char *);
extern void execute_443(char*, char *);
extern void execute_444(char*, char *);
extern void execute_445(char*, char *);
extern void execute_446(char*, char *);
extern void execute_447(char*, char *);
extern void execute_448(char*, char *);
extern void execute_449(char*, char *);
extern void execute_450(char*, char *);
extern void execute_451(char*, char *);
extern void execute_452(char*, char *);
extern void execute_453(char*, char *);
extern void execute_454(char*, char *);
extern void execute_156(char*, char *);
extern void execute_157(char*, char *);
extern void execute_158(char*, char *);
extern void execute_159(char*, char *);
extern void execute_160(char*, char *);
extern void execute_162(char*, char *);
extern void execute_163(char*, char *);
extern void execute_164(char*, char *);
extern void execute_1098(char*, char *);
extern void execute_1099(char*, char *);
extern void execute_1100(char*, char *);
extern void execute_1101(char*, char *);
extern void execute_1102(char*, char *);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[229] = {(funcp)execute_2, (funcp)execute_3, (funcp)execute_4, (funcp)execute_1095, (funcp)execute_1096, (funcp)execute_1097, (funcp)execute_165, (funcp)execute_1090, (funcp)execute_1091, (funcp)execute_1092, (funcp)execute_1093, (funcp)execute_1094, (funcp)execute_9, (funcp)execute_10, (funcp)execute_11, (funcp)execute_12, (funcp)execute_13, (funcp)execute_14, (funcp)execute_15, (funcp)execute_16, (funcp)execute_17, (funcp)execute_18, (funcp)execute_19, (funcp)execute_20, (funcp)execute_22, (funcp)execute_23, (funcp)execute_24, (funcp)execute_25, (funcp)execute_26, (funcp)execute_27, (funcp)execute_28, (funcp)execute_29, (funcp)execute_30, (funcp)execute_31, (funcp)execute_32, (funcp)execute_33, (funcp)execute_34, (funcp)execute_35, (funcp)execute_36, (funcp)execute_37, (funcp)execute_38, (funcp)execute_39, (funcp)execute_40, (funcp)execute_41, (funcp)execute_42, (funcp)execute_43, (funcp)execute_44, (funcp)execute_1084, (funcp)execute_1085, (funcp)execute_1086, (funcp)execute_1087, (funcp)execute_1088, (funcp)execute_1089, (funcp)vlog_const_rhs_process_execute_0_fast_no_reg_no_agg, (funcp)execute_532, (funcp)execute_533, (funcp)execute_534, (funcp)execute_535, (funcp)execute_536, (funcp)execute_537, (funcp)execute_548, (funcp)execute_549, (funcp)execute_550, (funcp)execute_551, (funcp)execute_553, (funcp)execute_554, (funcp)execute_555, (funcp)execute_556, (funcp)execute_560, (funcp)execute_561, (funcp)execute_569, (funcp)execute_573, (funcp)execute_574, (funcp)execute_575, (funcp)execute_576, (funcp)execute_578, (funcp)execute_579, (funcp)execute_580, (funcp)execute_581, (funcp)execute_587, (funcp)execute_588, (funcp)execute_593, (funcp)execute_599, (funcp)execute_603, (funcp)execute_604, (funcp)execute_607, (funcp)execute_608, (funcp)execute_611, (funcp)execute_612, (funcp)execute_615, (funcp)execute_616, (funcp)execute_619, (funcp)execute_620, (funcp)execute_623, (funcp)execute_624, (funcp)execute_166, (funcp)execute_99, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)vlog_simple_process_execute_1_fast_no_reg_no_agg, (funcp)execute_512, (funcp)execute_515, (funcp)execute_516, (funcp)execute_517, (funcp)execute_520, (funcp)execute_521, (funcp)execute_522, (funcp)execute_523, (funcp)execute_524, (funcp)execute_49, (funcp)execute_50, (funcp)execute_51, (funcp)execute_52, (funcp)execute_53, (funcp)execute_54, (funcp)execute_55, (funcp)execute_56, (funcp)execute_57, (funcp)execute_58, (funcp)execute_59, (funcp)execute_60, (funcp)execute_61, (funcp)execute_62, (funcp)execute_63, (funcp)execute_64, (funcp)execute_94, (funcp)execute_95, (funcp)execute_96, (funcp)execute_97, (funcp)execute_98, (funcp)execute_398, (funcp)execute_399, (funcp)execute_402, (funcp)execute_464, (funcp)execute_465, (funcp)execute_466, (funcp)execute_469, (funcp)execute_473, (funcp)execute_486, (funcp)execute_487, (funcp)execute_488, (funcp)execute_496, (funcp)execute_497, (funcp)execute_498, (funcp)execute_499, (funcp)execute_500, (funcp)execute_501, (funcp)execute_502, (funcp)execute_503, (funcp)execute_504, (funcp)execute_505, (funcp)execute_506, (funcp)execute_507, (funcp)execute_508, (funcp)execute_509, (funcp)execute_69, (funcp)execute_70, (funcp)execute_71, (funcp)execute_72, (funcp)execute_73, (funcp)execute_74, (funcp)execute_80, (funcp)execute_81, (funcp)execute_85, (funcp)execute_86, (funcp)execute_87, (funcp)execute_88, (funcp)execute_89, (funcp)execute_90, (funcp)execute_91, (funcp)execute_92, (funcp)execute_403, (funcp)execute_404, (funcp)execute_405, (funcp)execute_406, (funcp)execute_408, (funcp)execute_409, (funcp)execute_412, (funcp)execute_415, (funcp)execute_416, (funcp)execute_417, (funcp)execute_418, (funcp)execute_419, (funcp)execute_422, (funcp)execute_423, (funcp)execute_424, (funcp)execute_425, (funcp)execute_426, (funcp)execute_427, (funcp)execute_428, (funcp)execute_429, (funcp)execute_430, (funcp)execute_431, (funcp)execute_432, (funcp)execute_433, (funcp)execute_434, (funcp)execute_435, (funcp)execute_436, (funcp)execute_437, (funcp)execute_438, (funcp)execute_439, (funcp)execute_440, (funcp)execute_441, (funcp)execute_442, (funcp)execute_443, (funcp)execute_444, (funcp)execute_445, (funcp)execute_446, (funcp)execute_447, (funcp)execute_448, (funcp)execute_449, (funcp)execute_450, (funcp)execute_451, (funcp)execute_452, (funcp)execute_453, (funcp)execute_454, (funcp)execute_156, (funcp)execute_157, (funcp)execute_158, (funcp)execute_159, (funcp)execute_160, (funcp)execute_162, (funcp)execute_163, (funcp)execute_164, (funcp)execute_1098, (funcp)execute_1099, (funcp)execute_1100, (funcp)execute_1101, (funcp)execute_1102, (funcp)vlog_transfunc_eventcallback};
const int NumRelocateId= 229;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/tb_sobel_behav/xsim.reloc",  (void **)funcTab, 229);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/tb_sobel_behav/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void wrapper_func_0(char *dp)

{

}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/tb_sobel_behav/xsim.reloc");
	wrapper_func_0(dp);

	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/tb_sobel_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/tb_sobel_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/tb_sobel_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
