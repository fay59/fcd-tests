#include "tests/bin/1995-garry.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__(4195557);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601228);
}
void main(uint64_t arg0)
{
	uint8_t* anon4;
	uint64_t* anon1 = (uint64_t*)0x603b18;
	*anon1 = *(uint64_t*)0x601288;
	*(uint64_t*)0x603b10 = *(uint64_t*)0x601280;
	uint64_t phi_in2 = *(uint64_t*)0x601288;
	do
	{
		uint64_t phi3 = phi_in2;
		anon4 = fgets((uint8_t*)0x603b40, 255, (struct _IO_FILE*)phi3);
		*(uint64_t*)0x603b08 = (uint64_t)anon4;
		if (anon4 != null)
		{
			uint64_t anon5 = cb(4195727);
			*(uint64_t*)0x603b00 = anon5;
			fwrite((uint8_t*)anon5, (__sext int64_t)*(uint32_t*)0x6012c0, 1, *(struct _IO_FILE**)0x603b10);
			phi_in2 = *anon1;
		}
	}
	while (anon4 != null);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400560, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400930, (void(*)())0x4009a0, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint64_t anon8;
	uint16_t anon9;
	uint8_t* anon2 = (uint8_t*)0x603b40;
	uint8_t* anon3 = (uint8_t*)0x601248;
	uint8_t* anon1 = strchr(anon2, (__sext int32_t)*anon3);
	uint64_t phi_in4 = 6306624;
	uint32_t* phi_in5 = (uint32_t*)0x603b40;
	do
	{
		uint64_t phi6 = phi_in4;
		uint32_t* phi7 = phi_in5;
		anon8 = (phi6 & 0xffffffff) + 4;
		phi_in4 = anon8;
		phi_in5 = (uint32_t*)anon8;
		uint16_t anon10 = (uint16_t)*phi7;
		anon9 = anon10 - 257 & (anon10 ^ 0x8080) & 0x8080;
	}
	while (anon9 == 0);
	uint8_t anon12 = (uint8_t)anon9;
	struct { uint8_t field0; bool field1; } anon11 = llvm.uadd.with.overflow.i8(anon12, anon12);
	uint32_t* anon13 = (uint32_t*)0x6012c0;
	*anon13 = (uint32_t)anon8 - 3 - (__zext uint32_t)anon11.field1 - 6306624;
	uint64_t phi_in14 = 6306624;
	uint64_t phi_in15 = 6296320;
	uint8_t* phi_in16 = (uint8_t*)0x601300;
	uint8_t* phi_in17 = anon2;
	uint32_t dispatch18 = 0;
	if (anon1 == null)
	{
		return 6306624;
	}
	else 
	{
		uint64_t phi_in23;
		while (true)
		{
			uint64_t phi_in38;
			uint64_t anon32;
			uint8_t* anon31;
			uint8_t* phi22;
			uint8_t* anon30;
			uint8_t* phi29;
			uint64_t phi28;
			uint64_t phi27;
			uint8_t* anon34;
			uint8_t* anon33;
			uint8_t* phi_in26;
			uint64_t phi_in25;
			uint64_t phi_in37;
			uint64_t phi_in24;
			if (dispatch18 == 0)
			{
				uint64_t phi19 = phi_in14;
				uint64_t phi20 = phi_in15;
				uint8_t* phi21 = phi_in16;
				phi22 = phi_in17;
				phi_in23 = phi20;
				phi_in24 = phi19;
				phi_in25 = phi20;
				phi_in26 = phi21;
				if (*phi22 == 0)
				{
					break;
				}
			}
			if (dispatch18 == 1 || *phi22 != 0 && dispatch18 == 0)
			{
				phi27 = phi_in24;
				phi28 = phi_in25;
				phi29 = phi_in26;
			}
			if (*phi22 == *anon3)
			{
				if (dispatch18 == 1 || *phi22 != 0 && dispatch18 == 0)
				{
					anon32 = phi27 + 1;
					anon31 = (uint8_t*)anon32;
					anon30 = strchr(anon31, (__sext int32_t)*phi22);
				}
				if (anon30 != null)
				{
					if (dispatch18 == 1 || *phi22 != 0 && dispatch18 == 0)
					{
						*anon30 = 0;
						anon33 = strchr(anon31, 32);
					}
					if (anon33 == null)
					{
						if (dispatch18 == 1 || *phi22 != 0 && dispatch18 == 0)
						{
							anon34 = getenv(anon31);
						}
						if (anon34 == null)
						{
							if (dispatch18 == 1 || *phi22 != 0 && dispatch18 == 0)
							{
								*anon30 = *anon3;
								*(uint8_t*)phi28 = *anon3;
								*(uint8_t*)(phi28 + 1) = *anon3;
								uint64_t anon35 = phi27 + 2;
								phi_in14 = anon35;
								uint64_t anon36 = phi28 + 2;
								phi_in15 = anon36;
								phi_in16 = (uint8_t*)anon36;
								phi_in17 = (uint8_t*)anon35;
								dispatch18 = 0;
							}
						}
						else if (dispatch18 == 1 || *phi22 != 0 && dispatch18 == 0)
						{
							phi_in37 = (uint64_t)anon34;
							phi_in38 = phi28;
						}
					}
				}
			}
			if (dispatch18 == 2 || anon34 != null && dispatch18 == 1 && *phi22 == *anon3 && anon30 != null && anon33 == null || *phi22 != 0 && anon34 != null && dispatch18 == 0 && *phi22 == *anon3 && anon30 != null && anon33 == null)
			{
				uint8_t* anon42;
				uint64_t phi39 = phi_in37;
				uint64_t phi40 = phi_in38;
				if (*(uint8_t*)phi39 == 0)
				{
					uint64_t anon41 = (uint64_t)anon30 + 1;
					phi_in14 = anon41;
					phi_in15 = phi40;
					anon42 = (uint8_t*)phi40;
					phi_in16 = anon42;
					phi_in17 = (uint8_t*)anon41;
					dispatch18 = 0;
				}
				else 
				{
					uint64_t phi_in44;
					uint8_t phi_in43 = *(uint8_t*)phi39;
					uint64_t anon45 = phi39 + 1;
					phi_in44 = anon45;
					if (*(uint8_t*)phi39 == 92)
					{
						phi_in43 = 92;
						phi_in44 = anon45;
						uint8_t anon46 = *(uint8_t*)anon45 - 48;
						if (*(uint8_t*)anon45 == 57 | anon46 < 9)
						{
							phi_in43 = anon46;
							uint64_t anon47 = phi39 + 2;
							phi_in44 = anon47;
							uint64_t anon48 = (__zext uint64_t)*(uint8_t*)anon47 + 4294967248;
							if ((uint8_t)anon48 < 10)
							{
								uint64_t phi_in49;
								uint64_t phi_in51;
								uint64_t anon50 = anon48 + ((__zext uint64_t)*(uint8_t*)anon45 << 3) + 34359737984;
								phi_in49 = anon50;
								uint64_t anon52 = phi39 + 3;
								phi_in51 = anon52;
								if (*(uint8_t*)anon52 - 48 < 10)
								{
									phi_in49 = (__zext uint64_t)*(uint8_t*)anon52 + 4294967248 + (anon50 << 3) & 0xffffffff;
									phi_in51 = phi39 + 4;
								}
								uint64_t phi53 = phi_in49;
								uint64_t phi54 = phi_in51;
								phi_in43 = (uint8_t)phi53;
								phi_in44 = phi54;
							}
						}
					}
					uint8_t phi55 = phi_in43;
					uint64_t phi56 = phi_in44;
					*anon42 = phi55;
					phi_in37 = phi56;
					phi_in38 = phi40 + 1;
					dispatch18 = 2;
				}
			}
			if (*phi22 == *anon3)
			{
				if (anon30 == null)
				{
					if (dispatch18 == 1 || *phi22 != 0 && dispatch18 == 0)
					{
						*(uint8_t*)phi28 = *phi22;
						phi_in14 = anon32;
						uint64_t anon57 = phi28 + 1;
						phi_in15 = anon57;
						phi_in16 = (uint8_t*)anon57;
						phi_in17 = anon31;
						dispatch18 = 0;
					}
				}
				else if (anon33 != null && (dispatch18 == 1 || *phi22 != 0 && dispatch18 == 0))
				{
					*(uint8_t*)phi28 = *phi22;
					*anon30 = *phi22;
					phi_in14 = anon32;
					uint64_t anon58 = phi28 + 1;
					phi_in15 = anon58;
					phi_in16 = (uint8_t*)anon58;
					phi_in17 = anon31;
					dispatch18 = 0;
				}
			}
			else if (dispatch18 == 1 || *phi22 != 0 && dispatch18 == 0)
			{
				*phi29 = *phi22;
				uint64_t anon59 = (uint64_t)phi29 + 1;
				phi_in23 = anon59;
				phi_in24 = anon32;
				phi_in25 = anon59;
				phi_in26 = (uint8_t*)anon59;
				dispatch18 = 1;
				if (*phi22 == 0)
				{
					break;
				}
			}
		}
		uint64_t phi60 = phi_in23;
		*anon13 = (uint32_t)phi60 - 6296320;
		return 6296320;
	}
}
void tng(uint64_t arg0)
{
	uint32_t phi_in2;
	uint64_t anon1 = cb(4196603);
	*(uint64_t*)0x603b00 = anon1;
	*(uint64_t*)0x601248 = 14981091566371624;
	uint32_t* anon3 = (uint32_t*)0x6012c0;
	phi_in2 = *anon3;
	uint32_t anon4 = *anon3 >> 1 & 0x1f;
	if (anon4 != 0)
	{
		phi_in2 = (uint32_t)((__zext uint64_t)*anon3 << (__zext uint64_t)anon4);
	}
	uint32_t phi5 = phi_in2;
	*anon3 = phi5 * phi5;
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
