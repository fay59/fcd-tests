#include "tests/bin/1995-savastio.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600da8 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0)
{
	struct _IO_FILE** anon4;
	uint64_t phi_in53;
	uint64_t phi_in1 = 0;
	uint8_t phi2 = 9;
	while (true)
	{
		uint64_t anon11;
		uint64_t phi3 = phi_in1;
		anon4 = (struct _IO_FILE**)0x600e10;
		_IO_putc((__sext int32_t)(phi2 ^ 0x4c), *anon4);
		if (phi3 >= 13)
		{
			uint64_t phi14;
			uint64_t phi_in15;
			uint64_t phi16;
			uint16_t phi17;
			uint64_t phi18;
			uint64_t phi19;
			uint64_t phi20;
			uint16_t phi21;
			uint64_t phi22;
			uint64_t phi23;
			uint64_t phi24;
			uint64_t phi25;
			uint64_t phi26;
			uint64_t phi27;
			uint64_t anon28;
			uint8_t* anon29;
			uint64_t phi52;
			uint64_t phi63;
			uint64_t phi64;
			uint64_t phi65;
			scanf((uint8_t*)0x400a4e);
			uint8_t* anon5 = malloc(2016);
			*(uint64_t*)anon5 = 0;
			uint64_t anon6 = (uint64_t)anon5;
			*(uint64_t*)(anon6 + 8) = 0;
			uint8_t* anon7 = malloc(2016);
			*(uint64_t*)anon7 = 0;
			uint64_t anon8 = (uint64_t)anon7;
			*(uint64_t*)(anon8 + 8) = 0;
			uint64_t anon9 = anon6 + 16;
			*(uint16_t*)anon9 = 1;
			*(uint16_t*)(anon6 + 18) = 65535;
			uint64_t phi10 = anon6;
			anon11 = phi3 + 1;
			if (anon11 >= 2)
			{
				uint64_t phi_in31;
				uint64_t phi32;
				uint64_t phi_in12 = anon8;
				uint64_t phi_in13 = anon8 + 16;
				phi14 = anon9;
				phi_in15 = 2;
				phi16 = anon6;
				phi17 = 1;
				phi18 = phi_in12;
				phi19 = phi_in13;
				phi_in13 = phi14;
				phi20 = phi_in15;
				phi_in12 = phi16;
				phi21 = phi17;
				phi22 = phi18;
				phi23 = *(uint64_t*)phi_in12;
				phi24 = phi_in13;
				phi25 = phi19;
				phi26 = 0;
				phi27 = 0;
				anon29 = malloc(2016);
				anon28 = (uint64_t)anon29;
				*(uint64_t*)(anon28 + 8) = phi22;
				bool anon30 = phi23 == 0 & phi21 == 65535;
				if (anon30)
				{
					phi_in31 = *(uint64_t*)(anon28 + 8);
					phi32 = phi25;
					uint8_t* anon34 = malloc(2016);
					uint64_t anon33 = (uint64_t)anon34;
					*(uint64_t*)(anon33 + 8) = *(uint64_t*)(anon28 + 8);
					uint64_t phi35 = phi26;
					uint64_t phi36 = phi25;
					uint64_t phi37 = phi27;
					uint64_t phi38 = phi26 & 0xffff;
					if (phi26 != 0)
					{
						uint64_t phi47;
						do
						{
							uint64_t phi40;
							uint64_t phi_in41;
							uint64_t anon42;
							uint64_t phi_in43;
							uint128_t anon39 = (__zext uint128_t)phi38 * 3777893186295716171 >> 75;
							*(uint16_t*)phi36 = (uint16_t)phi35 + (uint16_t)anon39 * 55536;
							if (phi37 < 999)
							{
								phi40 = *(uint64_t*)(anon33 + 8);
								phi32 = phi36 + 2;
								anon42 = (uint64_t)anon39;
								phi_in41 = anon42;
								phi_in43 = phi37 + 1;
							}
							else 
							{
								uint64_t phi44;
								uint64_t* anon45 = (uint64_t*)*(uint64_t*)(anon33 + 8);
								phi44 = *anon45;
								uint64_t phi46 = anon42;
								if (*anon45 == 0)
								{
									*anon45 = anon33;
									*(uint64_t*)anon34 = 0;
									phi44 = anon33;
									phi46 = anon42 & 0xffff;
								}
								phi_in41 = phi46;
								phi40 = phi44;
								phi32 = phi44 + 16;
								phi_in43 = 0;
							}
							phi47 = phi_in41;
							phi_in31 = phi40;
							*(uint64_t*)(anon33 + 8) = phi40;
							phi35 = anon42;
							phi36 = phi32;
							phi37 = phi_in43;
							phi38 = anon42;
						}
						while (phi47 != 0);
					}
				}
				*(uint16_t*)phi32 = 65535;
				phi10 = phi_in31;
			}
			uint64_t phi_in48 = phi10;
			uint64_t phi_in49 = 0;
			uint64_t phi50 = 0;
			uint64_t phi51 = 1;
			if (*(uint16_t*)(phi_in48 + 16) != 65535)
			{
				phi_in49 = 0;
				phi50 = phi51;
				if (*(uint16_t*)(phi_in48 + (phi51 << 1) + 16) != 65535)
				{
					phi_in49 = 0;
					phi50 = 1000;
				}
			}
			do
			{
				phi52 = phi_in48;
				uint64_t anon54 = phi50 - 1;
				phi_in53 = anon54;
				uint64_t phi55 = phi_in49;
				uint64_t phi56 = phi_in49;
				if (anon54 > -1)
				{
					uint64_t anon59;
					do
					{
						uint64_t phi57 = phi_in53;
						uint8_t* phi58 = (uint8_t*)0x400a44;
						phi_in49 = 1;
						if (phi55 != 0)
						{
							phi58 = (uint8_t*)0x400a48;
							phi_in49 = 20;
							if (phi55 != ((uint64_t)((__zext uint128_t)phi55 * 970881267037344822 >> 64) - (phi55 >> 63)) * 19)
							{
								phi58 = (uint8_t*)0x400a49;
								phi_in49 = phi55 + 1;
							}
						}
						printf(phi58);
						anon59 = phi57 - 1;
						phi_in53 = anon59;
						phi55 = phi_in49;
						phi56 = phi_in49;
					}
					while (anon59 > -1);
				}
				phi_in48 = *(uint64_t*)(phi52 + 8);
				phi_in49 = phi56;
				phi50 = 1000;
			}
			while (*(uint64_t*)(phi52 + 8) != 0);
			phi51 = phi51 + 1;
			phi14 = phi19;
			uint64_t anon60 = phi20 & 0xffff;
			phi_in15 = anon60 + 1;
			phi16 = phi18;
			phi17 = 65535;
			uint16_t anon61 = (uint16_t)phi26 + phi21 * (uint16_t)phi20;
			uint128_t anon62 = (__zext uint128_t)anon61 * 3777893186295716171 >> 75;
			*(uint16_t*)phi25 = anon61 + (uint16_t)anon62 * 55536;
			if (phi27 < 1000)
			{
				phi63 = *(uint64_t*)(anon28 + 8);
				phi64 = phi24 + 2;
				phi65 = phi25 + 2;
				phi27 = phi27 + 1;
			}
			else 
			{
				uint64_t phi66;
				uint64_t* anon67 = (uint64_t*)*(uint64_t*)(anon28 + 8);
				phi66 = *anon67;
				uint64_t phi68 = phi23;
				if (*anon67 == 0)
				{
					*anon67 = anon28;
					*(uint64_t*)anon29 = 0;
					phi66 = anon28;
					phi68 = anon28;
				}
				phi63 = phi66;
				phi23 = *(uint64_t*)phi68;
				phi64 = phi68 + 16;
				phi65 = phi66 + 16;
				phi27 = 0;
			}
			phi22 = phi63;
			phi24 = phi64;
			uint64_t phi_in69 = phi65;
			phi25 = phi_in69;
			phi26 = (uint64_t)anon62;
			phi21 = *(uint16_t*)phi24;
		}
		break;
		phi_in1 = anon11;
		phi2 = *(uint8_t*)(phi3 + 4196946);
	}
	_IO_putc(10, *anon4);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400530, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x4009c0, (void(*)())0x400a30, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600e18;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196738);
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
	_init(4196851);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600bc0)(arg1 & 0xffffffff, arg2, arg3);
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
