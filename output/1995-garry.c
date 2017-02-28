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
	uint64_t phi6;
	uint32_t* phi7;
	uint64_t anon8;
	uint64_t anon9;
	uint8_t* anon2 = (uint8_t*)0x603b40;
	uint8_t* anon3 = (uint8_t*)0x601248;
	uint8_t* anon1 = strchr(anon2, (__sext int32_t)*anon3);
	uint64_t phi_in4 = 6306624;
	uint32_t* phi_in5 = (uint32_t*)0x603b40;
	do
	{
		phi6 = phi_in4;
		phi7 = phi_in5;
		anon8 = (phi6 & 0xffffffff) + 4;
		phi_in4 = anon8;
		phi_in5 = (uint32_t*)anon8;
		uint64_t anon10 = (__zext uint64_t)*phi7;
		anon9 = (anon10 ^ 0x80808080) & anon10 + 4278124287 & 0x80808080;
	}
	while (anon9 == 0);
	uint16_t anon13 = (uint16_t)*phi7;
	uint8_t anon12 = (uint8_t)((anon13 - 257 & (anon13 ^ 0x8080) & 0x8080) == 0 ? anon9 >> 16 : anon9);
	struct { uint8_t field0; bool field1; } anon11 = llvm.uadd.with.overflow.i8(anon12, anon12);
	uint32_t* anon14 = (uint32_t*)0x6012c0;
	*anon14 = (uint32_t)((anon13 - 257 & (anon13 ^ 0x8080) & 0x8080) == 0 ? phi6 + 6 : anon8) - 3 - (__zext uint32_t)anon11.field1 - 6306624;
	uint64_t phi15 = 6306624;
	uint64_t phi_in16 = 6296320;
	uint8_t* phi17 = (uint8_t*)0x601300;
	uint8_t* phi_in18 = anon2;
	uint32_t dispatch19 = 0;
	if (anon1 == null)
	{
		return 6306624;
	}
	else 
	{
		uint64_t phi23;
		while (true)
		{
			uint8_t* phi21;
			uint8_t* phi22;
			uint64_t phi24;
			uint64_t phi25;
			uint8_t* anon26;
			uint8_t* anon27;
			uint64_t anon28;
			uint8_t* anon30;
			uint8_t* anon31;
			uint64_t phi_in34;
			uint64_t phi_in35;
			if (dispatch19 == 0)
			{
				uint64_t phi_in20 = phi15;
				phi21 = phi17;
				phi22 = phi_in18;
				phi23 = phi_in16;
				phi24 = phi_in20;
				phi25 = phi_in16;
				if (*phi22 == 0)
				{
					break;
				}
			}
			if (*phi22 == *anon3)
			{
				if (dispatch19 == 1 || *phi22 != 0 && dispatch19 == 0)
				{
					anon28 = phi24 + 1;
					anon27 = (uint8_t*)anon28;
					anon26 = strchr(anon27, (__sext int32_t)*phi22);
				}
				if (anon26 == null)
				{
					if (dispatch19 == 1 || *phi22 != 0 && dispatch19 == 0)
					{
						*(uint8_t*)phi25 = *phi22;
						phi15 = anon28;
						uint64_t anon29 = phi25 + 1;
						phi_in16 = anon29;
						phi17 = (uint8_t*)anon29;
						phi_in18 = anon27;
						dispatch19 = 0;
					}
				}
				else 
				{
					if (dispatch19 == 1 || *phi22 != 0 && dispatch19 == 0)
					{
						*anon26 = 0;
						anon30 = strchr(anon27, 32);
					}
					if (anon30 == null)
					{
						if (dispatch19 == 1 || *phi22 != 0 && dispatch19 == 0)
						{
							anon31 = getenv(anon27);
						}
						if (anon31 == null)
						{
							if (dispatch19 == 1 || *phi22 != 0 && dispatch19 == 0)
							{
								*anon26 = *anon3;
								*(uint8_t*)phi25 = *anon3;
								*(uint8_t*)(phi25 + 1) = *anon3;
								uint64_t anon32 = phi24 + 2;
								phi15 = anon32;
								uint64_t anon33 = phi25 + 2;
								phi_in16 = anon33;
								phi17 = (uint8_t*)anon33;
								phi_in18 = (uint8_t*)anon32;
								dispatch19 = 0;
							}
						}
						else if (dispatch19 == 1 || *phi22 != 0 && dispatch19 == 0)
						{
							phi_in34 = (uint64_t)anon31;
							phi_in35 = phi25;
						}
					}
				}
			}
			if (dispatch19 == 2 || anon26 != null && anon31 != null && dispatch19 == 1 && *phi22 == *anon3 && anon30 == null || *phi22 != 0 && anon26 != null && anon31 != null && dispatch19 == 0 && *phi22 == *anon3 && anon30 == null)
			{
				uint8_t* anon39;
				uint64_t anon40;
				uint64_t anon48;
				uint64_t phi36 = phi_in34;
				uint64_t phi37 = phi_in35;
				if (*(uint8_t*)phi36 == 0)
				{
					uint64_t anon38 = (uint64_t)anon26 + 1;
					phi15 = anon38;
					phi_in16 = phi37;
					anon39 = (uint8_t*)phi37;
					phi17 = anon39;
					phi_in18 = (uint8_t*)anon38;
					dispatch19 = 0;
				}
				else if (*(uint8_t*)phi36 == 92)
				{
					anon40 = phi36 + 1;
					uint8_t anon41 = *(uint8_t*)anon40 - 48;
					if (*(uint8_t*)anon40 == 57 | anon41 < 9)
					{
						uint64_t anon43 = phi36 + 2;
						uint64_t anon42 = (__zext uint64_t)*(uint8_t*)anon43 + 4294967248;
						if ((uint8_t)anon42 < 10)
						{
							uint64_t phi44;
							uint64_t phi46;
							uint64_t anon45 = anon42 + ((__zext uint64_t)*(uint8_t*)anon40 << 3) + 34359737984;
							phi44 = anon45;
							uint64_t anon47 = phi36 + 3;
							phi46 = anon47;
							if (((__zext uint8_t)(*(uint8_t*)anon47 != 57) & (__zext uint8_t)(*(uint8_t*)anon47 - 48 > 8)) == 0)
							{
								phi44 = (__zext uint64_t)*(uint8_t*)anon47 + 4294967248 + (anon45 << 3) & 0xffffffff;
								phi46 = phi36 + 4;
							}
							phi_in34 = phi46;
							*anon39 = (uint8_t)phi44;
							anon48 = phi37 + 1;
							phi_in35 = anon48;
							dispatch19 = 2;
						}
						else 
						{
							*anon39 = anon41;
							phi_in34 = anon43;
							phi_in35 = anon48;
							dispatch19 = 2;
						}
					}
					else 
					{
						*anon39 = 92;
						phi_in34 = anon40;
						phi_in35 = anon48;
						dispatch19 = 2;
					}
				}
				else 
				{
					*anon39 = *(uint8_t*)phi36;
					phi_in34 = anon40;
					phi_in35 = anon48;
					dispatch19 = 2;
				}
			}
			if (*phi22 == *anon3)
			{
				if (anon26 != null && anon30 != null && (dispatch19 == 1 || *phi22 != 0 && dispatch19 == 0))
				{
					*(uint8_t*)phi25 = *phi22;
					*anon26 = *phi22;
					phi15 = anon28;
					uint64_t anon49 = phi25 + 1;
					phi_in16 = anon49;
					phi17 = (uint8_t*)anon49;
					phi_in18 = anon27;
					dispatch19 = 0;
				}
			}
			else if (dispatch19 == 1 || *phi22 != 0 && dispatch19 == 0)
			{
				*phi21 = *phi22;
				uint64_t anon50 = (uint64_t)phi21 + 1;
				phi23 = anon50;
				phi24 = anon28;
				phi25 = anon50;
				phi21 = (uint8_t*)anon50;
				dispatch19 = 1;
				if (*phi22 == 0)
				{
					break;
				}
			}
		}
		*anon14 = (uint32_t)phi23 - 6296320;
		return 6296320;
	}
}
void tng(uint64_t arg0)
{
	uint64_t anon1 = cb(4196603);
	*(uint64_t*)0x603b00 = anon1;
	*(uint64_t*)0x601248 = 14981091566371624;
	uint32_t* anon2 = (uint32_t*)0x6012c0;
	uint64_t anon5 = (__zext uint64_t)*anon2;
	uint64_t anon4 = anon5 >> 1 & 0x1f;
	uint32_t anon3 = anon4 == 0 ? *anon2 : (uint32_t)(anon5 << anon4);
	*anon2 = anon3 * anon3;
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
