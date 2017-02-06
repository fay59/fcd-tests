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
	uint8_t anon11;
	uint32_t anon7;
	uint8_t* anon4;
	uint32_t anon6;
	uint64_t* anon5;
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
				uint8_t** anon8 = (uint8_t**)anon3;
				anon7 = atoi(*anon8);
				if (anon7 <= 127)
				{
					uint32_t anon9 = atoi(*anon8);
					uint8_t* anon10 = (uint8_t*)0x600dc8;
					anon11 = (uint8_t)anon9;
					*anon10 = anon11;
					if (anon11 != 0)
					{
						bool phi28;
						uint64_t* anon21;
						uint8_t* phi_in12;
						*anon4 = 0;
						uint8_t* anon13 = (uint8_t*)*anon1;
						phi_in12 = anon13;
						uint64_t phi_in14 = *anon1;
						if (*anon5 == 0)
						{
							uint64_t phi_in18;
							uint8_t* phi_in17;
							bool phi_in16;
							int64_t anon15 = (__sext int64_t)anon11;
							if (((uint32_t)(anon15 >> 30) & 1 | (__zext uint32_t)((uint32_t)(anon15 << 1) == 0)) == 0)
							{
								*anon13 = anon11;
								*(uint8_t*)(*anon1 + 3) = 1;
								*(uint8_t*)(*anon1 + 1) = 1;
								*(uint8_t*)(*anon1 + 2) = 2;
								phi_in16 = 1;
								phi_in17 = anon13;
								phi_in18 = *anon1;
							}
							else 
							{
								uint64_t phi26;
								uint64_t anon20 = 0 - anon15;
								uint8_t* anon19 = malloc(anon20);
								anon21 = (uint64_t*)0x600dd0;
								uint64_t anon22 = (uint64_t)anon19;
								*anon21 = anon22;
								uint64_t phi_in23 = anon22;
								uint64_t phi_in24 = anon20;
								do
								{
									uint64_t phi25 = phi_in23;
									phi26 = phi_in24;
									if (phi26 != 0)
									{
										*(uint8_t*)phi25 = 49;
										phi_in23 = phi25 + 1;
										phi_in24 = phi26 - 1;
									}
								}
								while (phi26 != 0);
								puts(anon19);
								*(uint8_t*)(*anon1 + 1) = 48;
								*(uint8_t*)(*anon1 + 3) = 0;
								uint8_t* anon27 = (uint8_t*)*anon1;
								*anon27 = *anon10;
								*(uint8_t*)(*anon1 + 2) = 0;
								phi_in16 = *anon4 == 0;
								phi_in17 = anon27;
								phi_in18 = *anon1;
							}
							phi28 = phi_in16;
							uint8_t* phi29 = phi_in17;
							uint64_t phi30 = phi_in18;
							phi_in12 = phi29;
							phi_in14 = phi30;
						}
						if (*anon5 != 0 || *anon5 == 0 && phi28)
						{
							uint8_t* phi31 = phi_in12;
							uint64_t phi32 = phi_in14;
							if (*(uint8_t*)(phi32 + 3) == 0)
							{
								if (*phi31 == 255)
								{
									*(uint8_t*)(*anon21 + ((__sext int64_t)*anon10 ^ 0xffffffffffffffff)) = *(uint8_t*)(phi32 + 1);
									puts((uint8_t*)*anon21);
								}
								if (!(*phi31 == 254 || *phi31 == 255))
								{
									uint8_t phi_in47;
									uint8_t* anon40;
									uint8_t* anon39;
									uint8_t phi_in37;
									uint8_t phi_in45;
									uint64_t phi_in38;
									uint8_t* phi_in46;
									uint8_t* anon35;
									*phi31 = 2 - (*(uint8_t*)(phi32 + 1) & 1) + *phi31;
									main(4195819, arg1);
									uint8_t* anon34 = (uint8_t*)(*anon1 + 1);
									uint8_t anon33 = *anon34 & 1;
									if (anon33 == 0)
									{
										anon35 = (uint8_t*)*anon1;
										uint8_t anon36 = *anon35 - 2;
										*anon35 = anon36;
										phi_in37 = anon36;
										phi_in38 = *anon1;
										anon39 = (uint8_t*)*anon1;
										*anon39 = *anon39 + 2;
										anon40 = (uint8_t*)(*anon1 + 1);
										*anon40 = *anon40 ^ 1;
										main(4196225, arg1);
										uint8_t* anon41 = (uint8_t*)(*anon1 + 1);
										uint8_t anon42 = *anon41 ^ 1;
										*anon41 = anon42;
										uint8_t* anon43 = (uint8_t*)*anon1;
										uint8_t anon44 = anon42 - 2;
										*anon43 = anon44;
										phi_in45 = anon44;
										phi_in46 = anon43;
										phi_in47 = anon42;
									}
									else 
									{
										*anon35 = *anon35 + 1;
										*anon34 = anon33 ^ 1;
										main(4195870, arg1);
										uint8_t* anon48 = (uint8_t*)(*anon1 + 1);
										uint8_t anon49 = *anon48 ^ 1;
										*anon48 = anon49;
										uint8_t anon50 = anon49 - 2;
										*(uint8_t*)*anon1 = anon50;
										phi_in37 = anon50;
										phi_in38 = *anon1;
									}
									uint8_t phi51 = phi_in37;
									uint64_t phi52 = phi_in38;
									*(uint8_t*)(*anon21 + (__sext int64_t)phi51 - (__sext int64_t)*anon10) = *(uint8_t*)(phi52 + 1);
									puts((uint8_t*)*anon21);
									phi_in45 = *anon39;
									phi_in46 = anon39;
									phi_in47 = *anon40 & 1;
									uint8_t phi53 = phi_in45;
									uint8_t* phi54 = phi_in46;
									uint8_t phi55 = phi_in47;
									*phi54 = (phi55 & 1) + phi53 + 1;
									main(4195974, arg1);
									uint8_t* anon56 = (uint8_t*)*anon1;
									*anon56 = *anon56 - 1 - (*(uint8_t*)(*anon1 + 1) & 1);
								}
								if (*phi31 == 254)
								{
									*(uint8_t*)(*anon21 + ((__sext int64_t)*anon10 ^ 0xffffffffffffffff) - ((__zext uint64_t)*(uint8_t*)(phi32 + 1) & 1 ^ 1)) = *(uint8_t*)(phi32 + 1);
									puts((uint8_t*)*anon21);
									*(uint8_t*)(*anon21 + (((__sext int64_t)*anon10 ^ 0xffffffff) - ((__zext uint64_t)*(uint8_t*)(*anon1 + 1) & 1) << 32 >> 32)) = *(uint8_t*)(*anon1 + 1);
									puts((uint8_t*)*anon21);
								}
							}
							else 
							{
								uint8_t* anon57 = (uint8_t*)0x600db9;
								uint8_t* anon59 = (uint8_t*)(phi32 + 2);
								uint8_t anon58 = 6 - *anon59 + *(uint8_t*)(phi32 + 1);
								*anon57 = anon58;
								if (*phi31 != 1)
								{
									*anon59 = anon58;
									*(uint8_t*)phi32 = *phi31 - 1;
									main(4196059, arg1);
									uint8_t* anon60 = (uint8_t*)*anon1;
									*anon60 = *anon60 + 1;
									uint8_t* anon61 = (uint8_t*)(*anon1 + 2);
									*anon61 = *anon59;
									*anon57 = *anon61;
								}
								printf((uint8_t*)0x600d88);
								uint8_t* anon62 = (uint8_t*)*anon1;
								if (*anon62 != 1)
								{
									uint8_t anon63 = *anon62 - 1;
									*anon62 = anon63;
									uint8_t* anon64 = (uint8_t*)(*anon1 + 1);
									*anon64 = anon63;
									main(4196161, arg1);
									uint8_t* anon65 = (uint8_t*)*anon1;
									*anon65 = *anon65 + 1;
									uint8_t* anon66 = (uint8_t*)(*anon1 + 1);
									*anon66 = *anon64;
									*anon57 = *anon66;
								}
							}
						}
					}
				}
			}
		}
	}
	if (anon6 <= 127 && *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 || *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 == 0 || *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 && anon6 > 127 && anon7 <= 127 && anon11 == 0 || *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 && anon6 > 127 && anon7 > 127 || *(uint64_t*)arg1 == 0 || *anon5 != 0 && *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0)
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
