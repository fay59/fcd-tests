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
	uint8_t anon10;
	uint32_t anon6;
	uint32_t anon8;
	uint64_t* anon5;
	uint8_t* anon4;
	uint64_t* anon1 = (uint64_t*)0x600dc0;
	uint64_t anon2 = arg1 + 16;
	*anon1 = anon2;
	uint64_t anon3 = arg1 + 8;
	if (*(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0)
	{
		uint64_t* anon20;
		uint64_t phi_in13;
		uint8_t* anon9;
		bool phi27;
		uint8_t* phi_in11;
		anon4 = (uint8_t*)0x600db8;
		*anon4 = 0;
		anon5 = (uint64_t*)anon2;
		if (*anon5 == 0)
		{
			anon6 = atoi((uint8_t*)*(uint64_t*)anon3);
			if (anon6 > 127)
			{
				uint32_t anon7 = atoi(*(uint8_t**)anon3);
				anon8 = (__zext uint32_t)(anon7 > 126) & (__zext uint32_t)((anon7 + 129 & 0xff) != 0);
				if (anon8 == 0)
				{
					anon9 = (uint8_t*)0x600dc8;
					anon10 = (uint8_t)anon7;
					*anon9 = anon10;
					if (anon10 != 0)
					{
						*anon4 = 0;
						uint8_t* anon12 = (uint8_t*)*anon1;
						phi_in11 = anon12;
						phi_in13 = *anon1;
						if (*anon5 == 0)
						{
							bool phi_in15;
							uint8_t* phi_in16;
							uint64_t phi_in17;
							int64_t anon14 = (__sext int64_t)anon10;
							if (((uint32_t)(anon14 >> 30) & 1 | (__zext uint32_t)((anon14 & 0x7f) == 0)) == 0)
							{
								*anon12 = anon10;
								*(uint8_t*)(*anon1 + 3) = 1;
								*(uint8_t*)(*anon1 + 1) = 1;
								*(uint8_t*)(*anon1 + 2) = 2;
								phi_in15 = 1;
								phi_in16 = anon12;
								phi_in17 = *anon1;
							}
							else 
							{
								uint64_t phi25;
								uint64_t anon19 = (__zext uint64_t)(0 - anon10);
								uint8_t* anon18 = malloc(anon19);
								anon20 = (uint64_t*)0x600dd0;
								uint64_t anon21 = (uint64_t)anon18;
								*anon20 = anon21;
								uint64_t phi_in22 = anon21;
								uint64_t phi_in23 = anon19;
								do
								{
									uint64_t phi24 = phi_in22;
									phi25 = phi_in23;
									if (phi25 != 0)
									{
										*(uint8_t*)phi24 = 49;
										phi_in22 = phi24 + 1;
										phi_in23 = phi25 - 1;
									}
								}
								while (phi25 != 0);
								puts(anon18);
								*(uint8_t*)(*anon1 + 1) = 48;
								*(uint8_t*)(*anon1 + 3) = 0;
								uint8_t* anon26 = (uint8_t*)*anon1;
								*anon26 = *anon9;
								*(uint8_t*)(*anon1 + 2) = 0;
								phi_in15 = *anon4 == 0;
								phi_in16 = anon26;
								phi_in17 = *anon1;
							}
							phi27 = phi_in15;
							uint8_t* phi28 = phi_in16;
							uint64_t phi29 = phi_in17;
							phi_in11 = phi28;
							phi_in13 = phi29;
						}
					}
				}
			}
		}
		else 
		{
			phi_in11 = (uint8_t*)anon2;
			phi_in13 = anon2;
		}
		if (*anon5 != 0 || *anon5 != 0 && *anon5 == 0 && anon6 > 127 && anon8 == 0 && anon10 != 0 || *anon5 == 0 && anon6 > 127 && anon8 == 0 && anon10 != 0 && *anon5 == 0 && phi27)
		{
			uint8_t* phi30 = phi_in11;
			uint64_t phi31 = phi_in13;
			if (*(uint8_t*)(phi31 + 3) == 0)
			{
				if (*phi30 == 255)
				{
					*(uint8_t*)(*anon20 + (__zext uint64_t)(0 - *anon9) - 1) = *(uint8_t*)(phi31 + 1);
					puts((uint8_t*)*anon20);
				}
				if (*phi30 == 254)
				{
					*(uint8_t*)(*anon20 + (((__zext uint64_t)*anon9 ^ 0xff) - ((__zext uint64_t)*(uint8_t*)(phi31 + 1) & 1 ^ 1) & 0xff)) = *(uint8_t*)(phi31 + 1);
					puts((uint8_t*)*anon20);
					*(uint8_t*)(*anon20 + (((__zext uint64_t)*anon9 ^ 0xff) - ((__zext uint64_t)*(uint8_t*)(*anon1 + 1) & 1) & 0xff)) = *(uint8_t*)(*anon1 + 1);
					puts((uint8_t*)*anon20);
				}
				if (!(*phi30 == 254 || *phi30 == 255))
				{
					uint8_t phi_in45;
					uint8_t phi_in43;
					uint8_t* anon38;
					uint8_t* anon37;
					uint64_t phi_in36;
					uint8_t phi_in35;
					uint8_t* phi_in44;
					uint8_t* anon33;
					*phi30 = 2 - (*(uint8_t*)(phi31 + 1) & 1) + *phi30;
					main(4195819, arg1);
					uint8_t* anon32 = (uint8_t*)(*anon1 + 1);
					if ((*anon32 & 1) == 0)
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
						*anon32 = *anon32 ^ 1;
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
					*(uint8_t*)(*anon20 + ((__zext uint64_t)phi49 - (__zext uint64_t)*anon9 & 0xff)) = *(uint8_t*)(phi50 + 1);
					puts((uint8_t*)*anon20);
					phi_in43 = *anon37;
					phi_in44 = anon37;
					phi_in45 = *anon38;
					uint8_t phi51 = phi_in43;
					uint8_t* phi52 = phi_in44;
					uint8_t phi53 = phi_in45;
					*phi52 = (phi53 & 1) + phi51 + 1;
					main(4195974, arg1);
					uint8_t* anon54 = (uint8_t*)*anon1;
					*anon54 = *anon54 - 1 - (*(uint8_t*)(*anon1 + 1) & 1);
				}
			}
			else 
			{
				uint8_t* anon55 = (uint8_t*)0x600db9;
				uint8_t* anon57 = (uint8_t*)(phi31 + 2);
				uint8_t anon56 = 6 - *anon57 + *(uint8_t*)(phi31 + 1);
				*anon55 = anon56;
				if (*phi30 != 1)
				{
					*anon57 = anon56;
					*(uint8_t*)phi31 = *phi30 - 1;
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
	if (anon6 <= 127 && *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 || anon8 != 0 && *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 && anon6 > 127 || *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 == 0 || *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 && anon6 > 127 && anon8 == 0 && anon10 == 0 || *(uint64_t*)arg1 == 0)
	{
		puts((uint8_t*)0x600d80);
		*anon4 = 1;
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
