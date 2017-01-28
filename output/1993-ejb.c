#include "tests/bin/1993-ejb.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600d08 != 0)
	{
		__gmon_start__(4195429);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600d40);
}
void main(uint64_t arg0, uint64_t arg1)
{
	uint8_t anon9;
	uint32_t anon6;
	uint8_t* anon8;
	uint32_t anon7;
	uint64_t* anon5;
	uint8_t* anon4;
	uint64_t* anon1 = (uint64_t*)0x600dc0;
	uint64_t anon2 = arg1 + 16;
	*anon1 = anon2;
	uint64_t anon3 = arg1 + 8;
	if (*(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0)
	{
		anon4 = (uint8_t*)0x600db8;
		*anon4 = 0;
		anon5 = (uint64_t*)anon2;
		if (*anon5 == 0)
		{
			anon6 = atoi((uint8_t*)*(uint64_t*)anon3);
			if (anon6 > 127)
			{
				anon7 = atoi(*(uint8_t**)anon3);
				if (anon7 <= 127)
				{
					anon8 = (uint8_t*)0x600dc8;
					anon9 = (uint8_t)anon7;
					*anon8 = anon9;
				}
			}
		}
	}
	if (anon6 <= 127 && *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 || *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 == 0 || *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 && anon6 > 127 && anon7 <= 127 && anon9 == 0 || *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 && anon6 > 127 && anon7 > 127 || *(uint64_t*)arg1 == 0 || *anon5 != 0 && *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0)
	{
		puts((uint8_t*)0x600d80);
		*anon4 = 1;
	}
	if (anon9 != 0 && *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 && anon6 > 127 && anon7 <= 127)
	{
		uint8_t* phi_in10;
		uint64_t* anon19;
		bool phi26;
		*anon4 = 0;
		uint8_t* anon11 = (uint8_t*)*anon1;
		phi_in10 = anon11;
		uint64_t phi_in12 = *anon1;
		if (*anon5 == 0)
		{
			uint8_t* phi_in15;
			bool phi_in14;
			uint64_t phi_in16;
			int64_t anon13 = (__sext int64_t)anon9;
			if (((uint32_t)(anon13 >> 30) & 1 | (__zext uint32_t)((uint32_t)(anon13 << 1) == 0)) == 0)
			{
				*anon11 = anon9;
				*(uint8_t*)(*anon1 + 3) = 1;
				*(uint8_t*)(*anon1 + 1) = 1;
				*(uint8_t*)(*anon1 + 2) = 2;
				phi_in14 = 1;
				phi_in15 = anon11;
				phi_in16 = *anon1;
			}
			else 
			{
				uint64_t phi24;
				uint64_t anon18 = 0 - anon13;
				uint8_t* anon17 = malloc(anon18);
				anon19 = (uint64_t*)0x600dd0;
				uint64_t anon20 = (uint64_t)anon17;
				*anon19 = anon20;
				uint64_t phi_in21 = anon20;
				uint64_t phi_in22 = anon18;
				do
				{
					uint64_t phi23 = phi_in21;
					phi24 = phi_in22;
					if (phi24 != 0)
					{
						*(uint8_t*)phi23 = 49;
						phi_in21 = phi23 + 1;
						phi_in22 = phi24 - 1;
					}
				}
				while (phi24 != 0);
				puts(anon17);
				*(uint8_t*)(*anon1 + 1) = 48;
				*(uint8_t*)(*anon1 + 3) = 0;
				uint8_t* anon25 = (uint8_t*)*anon1;
				*anon25 = *anon8;
				*(uint8_t*)(*anon1 + 2) = 0;
				phi_in14 = *anon4 == 0;
				phi_in15 = anon25;
				phi_in16 = *anon1;
			}
			phi26 = phi_in14;
			uint8_t* phi27 = phi_in15;
			uint64_t phi28 = phi_in16;
			phi_in10 = phi27;
			phi_in12 = phi28;
		}
		if (*anon5 != 0 || *anon5 == 0 && phi26)
		{
			uint8_t* phi29 = phi_in10;
			uint64_t phi30 = phi_in12;
			if (*(uint8_t*)(phi30 + 3) == 0)
			{
				if (*phi29 == 255)
				{
					*(uint8_t*)(*anon19 + ((__sext int64_t)*anon8 ^ 0xffffffffffffffff)) = *(uint8_t*)(phi30 + 1);
					puts((uint8_t*)*anon19);
				}
				if (!(*phi29 == 254 || *phi29 == 255))
				{
					uint8_t phi_in45;
					uint8_t* phi_in44;
					uint8_t* anon37;
					uint8_t phi_in35;
					uint8_t* anon38;
					uint64_t phi_in36;
					uint8_t phi_in43;
					uint8_t* anon33;
					*phi29 = 2 - (*(uint8_t*)(phi30 + 1) & 1) + *phi29;
					main(4195819, arg1);
					uint8_t* anon32 = (uint8_t*)(*anon1 + 1);
					uint8_t anon31 = *anon32 & 1;
					if (anon31 == 0)
					{
						anon33 = (uint8_t*)*anon1;
						uint8_t anon34 = *anon33 - 2;
						*anon33 = anon34;
						phi_in35 = anon34;
						phi_in36 = *anon1;
						anon37 = (uint8_t*)*anon1;
						*anon37 = *anon37 + 2;
						anon38 = (uint8_t*)(*anon1 + 1);
						*anon38 = *anon38 ^ 1;
						main(4196225, arg1);
						uint8_t* anon39 = (uint8_t*)(*anon1 + 1);
						uint8_t anon40 = *anon39 ^ 1;
						*anon39 = anon40;
						uint8_t* anon41 = (uint8_t*)*anon1;
						uint8_t anon42 = anon40 - 2;
						*anon41 = anon42;
						phi_in43 = anon42;
						phi_in44 = anon41;
						phi_in45 = anon40;
					}
					else 
					{
						*anon33 = *anon33 + 1;
						*anon32 = anon31 ^ 1;
						main(4195870, arg1);
						uint8_t* anon46 = (uint8_t*)(*anon1 + 1);
						uint8_t anon47 = *anon46 ^ 1;
						*anon46 = anon47;
						uint8_t anon48 = anon47 - 2;
						*(uint8_t*)*anon1 = anon48;
						phi_in35 = anon48;
						phi_in36 = *anon1;
					}
					uint8_t phi49 = phi_in35;
					uint64_t phi50 = phi_in36;
					*(uint8_t*)(*anon19 + (__sext int64_t)phi49 - (__sext int64_t)*anon8) = *(uint8_t*)(phi50 + 1);
					puts((uint8_t*)*anon19);
					phi_in43 = *anon37;
					phi_in44 = anon37;
					phi_in45 = *anon38 & 1;
					uint8_t phi51 = phi_in43;
					uint8_t* phi52 = phi_in44;
					uint8_t phi53 = phi_in45;
					*phi52 = (phi53 & 1) + phi51 + 1;
					main(4195974, arg1);
					uint8_t* anon54 = (uint8_t*)*anon1;
					*anon54 = *anon54 - 1 - (*(uint8_t*)(*anon1 + 1) & 1);
				}
				if (*phi29 == 254)
				{
					*(uint8_t*)(*anon19 + ((__sext int64_t)*anon8 ^ 0xffffffffffffffff) - ((__zext uint64_t)*(uint8_t*)(phi30 + 1) & 1 ^ 1)) = *(uint8_t*)(phi30 + 1);
					puts((uint8_t*)*anon19);
					*(uint8_t*)(*anon19 + (((__sext int64_t)*anon8 ^ 0xffffffff) - ((__zext uint64_t)*(uint8_t*)(*anon1 + 1) & 1) << 32 >> 32)) = *(uint8_t*)(*anon1 + 1);
					puts((uint8_t*)*anon19);
				}
			}
			else 
			{
				uint8_t* anon55 = (uint8_t*)0x600db9;
				uint8_t* anon57 = (uint8_t*)(phi30 + 2);
				uint8_t anon56 = 6 - *anon57 + *(uint8_t*)(phi30 + 1);
				*anon55 = anon56;
				if (*phi29 != 1)
				{
					*anon57 = anon56;
					*(uint8_t*)phi30 = *phi29 - 1;
					main(4196059, arg1);
					uint8_t* anon58 = (uint8_t*)*anon1;
					*anon58 = *anon58 + 1;
					uint8_t* anon59 = (uint8_t*)(*anon1 + 2);
					*anon59 = *anon57;
					*anon55 = *anon59;
				}
				printf((uint8_t*)0x600d88);
				uint8_t* anon60 = (uint8_t*)*anon1;
				if (*anon60 != 1)
				{
					uint8_t anon61 = *anon60 - 1;
					*anon60 = anon61;
					uint8_t* anon62 = (uint8_t*)(*anon1 + 1);
					*anon62 = anon61;
					main(4196161, arg1);
					uint8_t* anon63 = (uint8_t*)*anon1;
					*anon63 = *anon63 + 1;
					uint8_t* anon64 = (uint8_t*)(*anon1 + 1);
					*anon64 = *anon62;
					*anon55 = *anon64;
				}
			}
		}
	}
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x4004e0, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400960, (void(*)())0x4009d0, (void(*)())arg2, *(uint8_t**)anon1);
	llvm.trap();
}
void deregister_tm_clones(uint64_t arg0)
{
	return;
}
void register_tm_clones(uint64_t arg0)
{
	return;
}
void __do_global_dtors_aux(uint64_t arg0)
{
	uint8_t* anon1 = (uint8_t*)0x600db0;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196642);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4196755);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600b20)(arg1 & 0xffffffff, arg2, arg3);
	return;
}
void __libc_csu_fini(uint64_t arg0)
{
	return;
}
void _fini(uint64_t arg0)
{
	return;
}
