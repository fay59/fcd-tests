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
	uint8_t* anon4;
	uint64_t* anon5;
	uint32_t anon6;
	uint8_t anon10;
	struct { uint32_t field0; bool field1; } anon8;
	uint64_t* anon1 = (uint64_t*)0x600dc0;
	uint64_t anon2 = arg1 + 16;
	*anon1 = anon2;
	uint64_t anon3 = arg1 + 8;
	if (*(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0)
	{
		bool phi27;
		uint8_t* phi_in11;
		uint64_t* anon17;
		uint64_t phi_in13;
		uint8_t* anon9;
		anon4 = (uint8_t*)0x600db8;
		*anon4 = 0;
		anon5 = (uint64_t*)anon2;
		if (*anon5 == 0)
		{
			anon6 = atoi((uint8_t*)*(uint64_t*)anon3);
			if (anon6 > 127)
			{
				uint32_t anon7 = atoi(*(uint8_t**)anon3);
				anon8 = llvm.ssub.with.overflow.i32(anon7, 127);
				if (!anon8.field1)
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
							bool phi_in24;
							uint8_t* phi_in25;
							uint64_t phi_in26;
							int64_t anon14 = (__sext int64_t)anon10;
							if ((anon14 & 0x40000000) != 0 | (anon14 & 0x7f) == 0)
							{
								uint64_t phi22;
								uint64_t anon16 = 0 - anon14;
								uint8_t* anon15 = malloc(anon16);
								anon17 = (uint64_t*)0x600dd0;
								uint64_t anon18 = (uint64_t)anon15;
								*anon17 = anon18;
								uint64_t phi_in19 = anon18;
								uint64_t phi_in20 = anon16;
								do
								{
									uint64_t phi21 = phi_in19;
									phi22 = phi_in20;
									if (phi22 != 0)
									{
										*(uint8_t*)phi21 = 49;
										phi_in19 = phi21 + 1;
										phi_in20 = phi22 - 1;
									}
								}
								while (phi22 != 0);
								puts(anon15);
								*(uint8_t*)(*anon1 + 1) = 48;
								*(uint8_t*)(*anon1 + 3) = 0;
								uint8_t* anon23 = (uint8_t*)*anon1;
								*anon23 = *anon9;
								*(uint8_t*)(*anon1 + 2) = 0;
								phi_in24 = *anon4 == 0;
								phi_in25 = anon23;
								phi_in26 = *anon1;
							}
							else 
							{
								*anon12 = anon10;
								*(uint8_t*)(*anon1 + 3) = 1;
								*(uint8_t*)(*anon1 + 1) = 1;
								*(uint8_t*)(*anon1 + 2) = 2;
								phi_in24 = 1;
								phi_in25 = anon12;
								phi_in26 = *anon1;
							}
							phi27 = phi_in24;
							uint8_t* phi28 = phi_in25;
							uint64_t phi29 = phi_in26;
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
		if (*anon5 != 0 || !anon8.field1 && *anon5 != 0 && *anon5 == 0 && anon6 > 127 && anon10 != 0 || !anon8.field1 && *anon5 == 0 && anon6 > 127 && anon10 != 0 && *anon5 == 0 && phi27)
		{
			uint8_t* phi30 = phi_in11;
			uint64_t phi31 = phi_in13;
			if (*(uint8_t*)(phi31 + 3) == 0)
			{
				uint8_t anon32;
				if (*phi30 == 254)
				{
					anon32 = *(uint8_t*)(phi31 + 1) & 1;
					*(uint8_t*)(*anon17 + ((__zext uint64_t)(*anon9 & 0xf ^ 0xf) - (__zext uint64_t)(anon32 ^ 1) & 0xff)) = anon32;
					puts((uint8_t*)*anon17);
					uint8_t anon33 = *(uint8_t*)(*anon1 + 1) & 1;
					*(uint8_t*)(*anon17 + ((__zext uint64_t)(*anon9 & 0xf ^ 0xf) - (__zext uint64_t)anon33 & 0xff)) = anon33;
					puts((uint8_t*)*anon17);
				}
				else 
				{
					uint8_t phi_in48;
					uint8_t* phi_in47;
					uint64_t phi_in39;
					uint8_t* anon40;
					uint8_t* anon36;
					uint8_t phi_in46;
					uint8_t* anon41;
					uint8_t phi_in38;
					*phi30 = 2 - anon32 + *phi30;
					main(4195819, arg1);
					uint8_t* anon35 = (uint8_t*)(*anon1 + 1);
					uint8_t anon34 = *anon35 & 1;
					if (anon34 == 0)
					{
						anon36 = (uint8_t*)*anon1;
						uint8_t anon37 = *anon36 - 2;
						*anon36 = anon37;
						phi_in38 = anon37;
						phi_in39 = *anon1;
						anon40 = (uint8_t*)*anon1;
						*anon40 = *anon40 + 2;
						anon41 = (uint8_t*)(*anon1 + 1);
						*anon41 = 1;
						main(4196225, arg1);
						uint8_t* anon42 = (uint8_t*)(*anon1 + 1);
						uint8_t anon43 = *anon42 ^ 1;
						*anon42 = anon43;
						uint8_t* anon44 = (uint8_t*)*anon1;
						uint8_t anon45 = anon43 - 2;
						*anon44 = anon45;
						phi_in46 = anon45;
						phi_in47 = anon44;
						phi_in48 = anon43;
					}
					else 
					{
						*anon36 = (*anon36 & 0xf) + 1;
						*anon35 = anon34 ^ 1;
						main(4195870, arg1);
						uint8_t* anon49 = (uint8_t*)(*anon1 + 1);
						uint8_t anon50 = *anon49 ^ 1;
						*anon49 = anon50;
						uint8_t anon51 = anon50 - 2;
						*(uint8_t*)*anon1 = anon51;
						phi_in38 = anon51;
						phi_in39 = *anon1;
					}
					uint8_t phi52 = phi_in38;
					uint64_t phi53 = phi_in39;
					*(uint8_t*)(*anon17 + ((__zext uint64_t)(phi52 & 0xf) - (__zext uint64_t)(*anon9 & 0xf) & 0xff)) = *(uint8_t*)(phi53 + 1);
					puts((uint8_t*)*anon17);
					phi_in46 = *anon40;
					phi_in47 = anon40;
					phi_in48 = *anon41;
					uint8_t phi54 = phi_in46;
					uint8_t* phi55 = phi_in47;
					uint8_t phi56 = phi_in48;
					*phi55 = (phi56 & 1) + phi54 + 1;
					main(4195974, arg1);
					uint8_t* anon57 = (uint8_t*)*anon1;
					*anon57 = (*anon57 + 15 & 0xf) - (*(uint8_t*)(*anon1 + 1) & 1);
				}
			}
			else 
			{
				uint8_t* anon58 = (uint8_t*)0x600db9;
				uint8_t* anon60 = (uint8_t*)(phi31 + 2);
				uint8_t anon59 = 6 - *anon60 + *(uint8_t*)(phi31 + 1);
				*anon58 = anon59;
				uint8_t anon61 = *phi30 & 0xf;
				if (anon61 != 1)
				{
					*anon60 = anon59;
					*(uint8_t*)phi31 = anon61 - 1;
					main(4196059, arg1);
					uint8_t* anon62 = (uint8_t*)*anon1;
					*anon62 = *anon62 + 1;
					uint8_t* anon63 = (uint8_t*)(*anon1 + 2);
					*anon63 = *anon60;
					*anon58 = *anon63;
				}
				printf((uint8_t*)0x600d88);
				uint8_t* anon65 = (uint8_t*)*anon1;
				uint8_t anon64 = *anon65 & 0xf;
				if (anon64 != 1)
				{
					uint8_t anon66 = anon64 - 1;
					*anon65 = anon66;
					uint8_t* anon67 = (uint8_t*)(*anon1 + 1);
					*anon67 = anon66;
					main(4196161, arg1);
					uint8_t* anon68 = (uint8_t*)*anon1;
					*anon68 = *anon68 + 1;
					uint8_t* anon69 = (uint8_t*)(*anon1 + 1);
					*anon69 = *anon67;
					*anon58 = *anon69;
				}
			}
		}
	}
	if (anon6 <= 127 && *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 || *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 == 0 || !anon8.field1 && *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 && anon6 > 127 && anon10 == 0 || *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 && anon6 > 127 && anon8.field1 || *(uint64_t*)arg1 == 0)
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
