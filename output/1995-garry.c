#include "tests/bin/1995-garry.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0)
{
	uint8_t* anon3;
	uint64_t* anon1 = (uint64_t*)0x603b18;
	*anon1 = *(uint64_t*)0x601288;
	*(uint64_t*)0x603b10 = *(uint64_t*)0x601280;
	uint64_t phi2 = *(uint64_t*)0x601288;
	do
	{
		anon3 = fgets((uint8_t*)0x603b40, 255, (struct _IO_FILE*)phi2);
		*(uint64_t*)0x603b08 = (uint64_t)anon3;
		if (anon3 != null)
		{
			uint64_t anon4 = cb(4195727);
			*(uint64_t*)0x603b00 = anon4;
			fwrite((uint8_t*)anon4, (__sext int64_t)*(uint32_t*)0x6012c0, 1, *(struct _IO_FILE**)0x603b10);
			phi2 = *anon1;
		}
	}
	while (anon3 != null);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400560, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400930, (void(*)())0x4009a0, (void(*)())arg2, *(uint8_t**)anon1);
	__builtin_trap();
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
	uint8_t* anon1 = (uint8_t*)0x601290;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196002);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
uint64_t cb(uint64_t arg0)
{
	uint8_t* anon2 = (uint8_t*)0x603b40;
	uint8_t* anon3 = (uint8_t*)0x601248;
	uint8_t* anon1 = strchr(anon2, (__sext int32_t)*anon3);
	uint64_t phi4 = 6306624;
	uint32_t* phi5 = (uint32_t*)0x603b40;
	uint32_t* anon6 = (uint32_t*)0x6012c0;
	uint64_t anon7 = (phi4 & 0xffffffff) + 4;
	uint16_t anon10 = (uint16_t)*phi5;
	uint16_t anon9 = anon10 - 257 & (anon10 ^ 0x8080) & 0x8080;
	uint8_t anon8 = (uint8_t)anon9;
	*anon6 = (uint32_t)anon7 - 3 - (__zext uint32_t)llvm.uadd.with.overflow.i8(anon8, anon8).field1 - 6306624;
	uint64_t phi_in11 = 6306624;
	uint64_t phi12 = 6296320;
	uint8_t* phi_in13 = (uint8_t*)0x601300;
	uint8_t* phi_in14 = anon2;
	if (anon1 == null)
	{
		return 6306624;
	}
	else 
	{
		uint8_t* phi16;
		uint64_t phi17;
		do
		{
			uint64_t phi_in15 = phi12;
			phi16 = phi_in14;
			phi17 = phi_in15;
			uint64_t phi18 = phi_in11;
			uint8_t* phi19 = phi_in13;
			if (*phi16 != 0)
			{
				uint64_t anon23;
				uint64_t phi20 = phi_in15;
				if (*phi16 == *anon3)
				{
					anon23 = phi18 + 1;
					uint8_t* anon22 = (uint8_t*)anon23;
					uint8_t* anon21 = strchr(anon22, (__sext int32_t)*phi16);
					if (anon21 == null)
					{
						*(uint8_t*)phi20 = *phi16;
						phi_in11 = anon23;
						uint64_t anon24 = phi20 + 1;
						phi12 = anon24;
						phi_in13 = (uint8_t*)anon24;
						phi_in14 = anon22;
					}
					else 
					{
						*anon21 = 0;
						if (strchr(anon22, 32) == null)
						{
							uint64_t phi25;
							uint8_t* anon26 = getenv(anon22);
							phi25 = (uint64_t)anon26;
							uint64_t phi27 = phi20;
							if (anon26 == null)
							{
								*anon21 = *anon3;
								*(uint8_t*)phi20 = *anon3;
								*(uint8_t*)(phi20 + 1) = *anon3;
								uint64_t anon28 = phi18 + 2;
								phi_in11 = anon28;
								uint64_t anon29 = phi20 + 2;
								phi12 = anon29;
								phi_in13 = (uint8_t*)anon29;
								phi_in14 = (uint8_t*)anon28;
							}
							else 
							{
								uint8_t* anon30;
								while (true && !(*(uint8_t*)phi25 == 0))
								{
									uint64_t phi_in31;
									if (*(uint8_t*)phi25 == 92)
									{
										anon30 = (uint8_t*)phi27;
										*anon30 = 92;
										uint64_t anon32 = phi25 + 1;
										phi_in31 = anon32;
										uint8_t anon34 = *(uint8_t*)anon32 - 48;
										bool anon33 = *(uint8_t*)anon32 == 57 | anon34 < 9;
										if (anon33)
										{
											*anon30 = anon34;
											uint64_t anon35 = phi25 + 2;
											phi_in31 = anon35;
											uint64_t anon36 = (__zext uint64_t)*(uint8_t*)anon35 + 4294967248;
											if ((uint8_t)anon36 < 10)
											{
												uint64_t phi37;
												uint64_t phi39;
												uint64_t anon38 = anon36 + ((__zext uint64_t)*(uint8_t*)anon32 << 3) + 34359737984;
												phi37 = anon38;
												uint64_t anon40 = phi25 + 3;
												phi39 = anon40;
												if (*(uint8_t*)anon40 - 48 < 10)
												{
													phi37 = (__zext uint64_t)*(uint8_t*)anon40 + 4294967248 + (anon38 << 3) & 0xffffffff;
													phi39 = phi25 + 4;
												}
												uint64_t phi_in41 = phi39;
												*anon30 = (uint8_t)phi37;
												phi_in31 = phi_in41;
											}
										}
									}
									bool anon42 = *(uint8_t*)phi25 == 0 || *(uint8_t*)phi25 == 92;
									if (!anon42)
									{
										*anon30 = *(uint8_t*)phi25;
										phi_in31 = phi25 + 1;
									}
									if (!anon42 || *(uint8_t*)phi25 == 92)
									{
										phi25 = phi_in31;
										phi27 = phi27 + 1;
									}
								}
								uint64_t anon43 = (uint64_t)anon21 + 1;
								phi_in11 = anon43;
								phi12 = phi27;
								phi_in13 = anon30;
								phi_in14 = (uint8_t*)anon43;
							}
						}
						else 
						{
							*(uint8_t*)phi20 = *phi16;
							*anon21 = *phi16;
							phi_in11 = anon23;
							uint64_t anon44 = phi20 + 1;
							phi12 = anon44;
							phi_in13 = (uint8_t*)anon44;
							phi_in14 = anon22;
						}
					}
				}
				else 
				{
					*phi19 = *phi16;
					uint64_t anon45 = phi20 + 1;
					phi17 = anon45;
					if (*phi16 == 0)
					{
						break;
					}
					else 
					{
						phi18 = anon23;
						phi_in15 = anon45;
						phi19 = (uint8_t*)anon45;
					}
				}
			}
		}
		while (*phi16 != 0);
		*anon6 = (uint32_t)phi17 - 6296320;
		return 6296320;
	}
	phi4 = anon7;
	phi5 = (uint32_t*)anon7;
}
void tng(uint64_t arg0)
{
	uint32_t phi1;
	*(uint64_t*)0x603b00 = cb(4196603);
	*(uint64_t*)0x601248 = 14981091566371624;
	uint32_t* anon2 = (uint32_t*)0x6012c0;
	phi1 = *anon2;
	uint8_t anon3 = (uint8_t)(*anon2 >> 1) & 0x1f;
	if (anon3 != 0)
	{
		phi1 = (uint32_t)((__zext uint64_t)*anon2 << (__zext uint64_t)anon3);
	}
	*anon2 = phi1 * phi1;
	return;
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4196707);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x601000)(arg1 & 0xffffffff, arg2, arg3);
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
