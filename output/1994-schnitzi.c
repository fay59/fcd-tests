#include "tests/bin/1994-schnitzi.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600bb0 != 0)
	{
		__gmon_start__(4195549);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600be8);
}
void main(uint64_t arg0, uint64_t arg1)
{
	uint32_t phi_in22;
	uint64_t anon16;
	uint32_t* anon19;
	uint32_t* anon11;
	struct { uint8_t field0; uint8_t field1[512]; uint32_t field2; uint8_t field3[420]; uint64_t field4; } alloca1;
	alloca1.field4 = arg0;
	struct __sFILE** anon3 = (struct __sFILE**)0x600c18;
	uint64_t anon2 = ftell(*anon3);
	alloca1.field2 = (uint32_t)anon2;
	uint8_t* anon4 = gets(&alloca1.field1[0]);
	uint32_t dispatch5 = 0;
	if (anon4 != null)
	{
		uint8_t* anon21;
		do
		{
			uint64_t anon9;
			uint64_t anon8;
			uint64_t phi7;
			while (true)
			{
				uint64_t phi_in6;
				if (dispatch5 == 0)
				{
					phi_in6 = (uint64_t)&alloca1.field1;
				}
				phi7 = phi_in6;
				anon8 = phi7 + 4;
				phi_in6 = anon8;
				dispatch5 = 1;
				uint64_t anon10 = (__zext uint64_t)*(uint32_t*)(phi7 & 0xffffffff);
				anon9 = (anon10 ^ 0x80808080) & anon10 + 4278124287 & 0x80808080;
				if (anon9 != 0)
				{
					break;
				}
			}
			anon11 = (uint32_t*)0x600c2c;
			uint32_t anon12 = *anon11 + 1;
			*anon11 = anon12;
			uint16_t anon15 = (uint16_t)*(uint32_t*)(phi7 & 0xffffffff);
			uint8_t anon14 = (anon15 - 257 & (anon15 ^ 0x8080) & 0x8080) == 0 ? (uint8_t)(anon9 >> 16) : (uint8_t)(*(uint32_t*)(phi7 & 0xffffffff) + 255 & (*(uint32_t*)(phi7 & 0xffffffff) ^ 0x80)) & 0x80;
			struct { uint8_t field0; bool field1; } anon13 = llvm.uadd.with.overflow.i8(anon14, anon14);
			anon16 = arg1 - 960;
			uint32_t anon18 = (uint32_t)arg1 - 944;
			uint32_t anon17 = (uint32_t)((anon15 - 257 & (anon15 ^ 0x8080) & 0x8080) == 0 ? phi7 + 6 : anon8) - 3 - (__zext uint32_t)anon13.field1 - anon18;
			*(uint32_t*)(anon16 + ((__sext int64_t)*anon11 << 2) + 128) = anon17;
			anon19 = (uint32_t*)0x600c28;
			*anon19 = anon17;
			uint64_t anon20 = ftell(*anon3);
			*(uint32_t*)(anon16 + ((__zext uint64_t)anon12 << 32 >> 30) + 528) = (uint32_t)anon20;
			anon21 = gets((uint8_t*)(__zext uint64_t)anon18);
			dispatch5 = 0;
		}
		while (anon21 != null);
	}
	uint32_t* anon23 = (uint32_t*)0x600c24;
	phi_in22 = *anon23;
	uint32_t dispatch24 = 0;
	if (*anon23 < *anon19)
	{
		uint32_t anon36;
		do
		{
			while (true)
			{
				uint32_t anon29;
				uint64_t phi_in28;
				uint32_t phi_in27;
				uint32_t* anon26;
				uint32_t anon35;
				if (dispatch24 == 0)
				{
					uint32_t phi25 = phi_in22;
					anon26 = (uint32_t*)0x600c30;
					*anon26 = 0;
					phi_in27 = phi25;
					phi_in28 = 0;
					anon29 = *anon11 >> 31 | (__zext uint32_t)(*anon11 == 0);
					if (anon29 != 0)
					{
						break;
					}
				}
				if (dispatch24 == 1 || dispatch24 == 0 && anon29 == 0)
				{
					uint32_t phi30 = phi_in27;
					uint64_t phi31 = phi_in28;
					alloca1.field0 = 32;
					uint32_t phi_in32 = 32;
					uint64_t anon33 = phi31 << 32 >> 30;
					if (phi30 < *(uint32_t*)(anon16 + anon33 + 128))
					{
						fseek(*anon3, (__sext int64_t)(phi30 + *(uint32_t*)(anon16 + anon33 + 528)), 0);
						scanf((uint8_t*)0x400884);
						phi_in32 = (__sext int32_t)alloca1.field0;
					}
					uint32_t phi34 = phi_in32;
					putchar(phi34);
					anon35 = *anon26 + 1;
					*anon26 = anon35;
					if (*anon11 <= anon35)
					{
						break;
					}
				}
				if (*anon11 > anon35 && (dispatch24 == 1 || dispatch24 == 0 && anon29 == 0))
				{
					phi_in27 = *anon23;
					phi_in28 = (__zext uint64_t)anon35;
					dispatch24 = 1;
				}
			}
			putchar(10);
			anon36 = *anon23 + 1;
			*anon23 = anon36;
			phi_in22 = anon36;
			dispatch24 = 0;
		}
		while (*anon19 > anon36);
	}
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400570, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400800, (void(*)())0x400870, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600c20;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196290);
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
	_init(4196403);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x6009c8)(arg1 & 0xffffffff, arg2, arg3);
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
