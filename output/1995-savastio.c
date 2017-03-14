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
	uint64_t phi_in59;
	uint64_t phi_in1 = 0;
	uint8_t phi2 = 9;
	while (true)
	{
		uint64_t anon12;
		uint64_t phi3 = phi_in1;
		anon4 = (struct _IO_FILE**)0x600e10;
		_IO_putc((__sext int32_t)(phi2 ^ 0x4c), *anon4);
		if (phi3 >= 13)
		{
			uint64_t phi_in13;
			uint64_t phi15;
			uint64_t phi_in16;
			uint16_t phi17;
			uint64_t phi18;
			uint64_t phi19;
			uint64_t phi20;
			uint64_t phi21;
			uint64_t phi22;
			uint64_t phi_in23;
			uint64_t phi26;
			uint64_t* phi27;
			uint64_t phi28;
			uint64_t phi_in29;
			uint64_t anon30;
			uint8_t* anon31;
			uint64_t phi32;
			uint64_t phi66;
			uint64_t phi69;
			uint64_t phi70;
			uint64_t phi71;
			uint64_t* phi72;
			uint64_t* phi73;
			uint64_t phi74;
			uint64_t phi75;
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
			uint64_t phi11 = anon6;
			anon12 = phi3 + 1;
			if (anon12 >= 2)
			{
				uint64_t phi_in33;
				uint64_t phi_in34;
				uint64_t phi35;
				phi_in13 = anon8;
				uint64_t phi_in14 = anon8 + 16;
				phi15 = anon9;
				phi_in16 = 2;
				phi_in13 = anon6;
				phi17 = 1;
				phi18 = phi_in13;
				phi19 = phi_in14;
				phi_in14 = phi15;
				phi20 = phi_in16;
				phi21 = phi18;
				phi22 = 0;
				phi_in23 = phi18;
				uint64_t* anon25 = (uint64_t*)phi18;
				phi_in24 = anon25;
				phi26 = phi_in14;
				phi27 = anon25;
				phi28 = 0;
				phi_in29 = *(uint64_t*)phi_in13;
				anon31 = malloc(2016);
				anon30 = (uint64_t)anon31;
				*(uint64_t*)(anon30 + 8) = phi21;
				phi32 = phi_in29;
				if (phi32 == 0 & phi17 == 65535)
				{
					phi_in33 = *(uint64_t*)(anon30 + 8);
					phi_in34 = phi_in23;
					phi35 = phi19;
					uint64_t phi36 = *(uint64_t*)(anon30 + 8);
					uint64_t phi37 = phi_in23;
					uint64_t* phi38 = phi_in24;
					uint64_t phi39 = phi19;
					uint64_t phi40 = phi28;
					uint64_t phi_in41 = phi22;
					if ((phi22 & 0xffff) != 0)
					{
						uint64_t anon52;
						do
						{
							uint8_t* anon43 = malloc(2016);
							uint64_t anon42 = (uint64_t)anon43;
							*(uint64_t*)(anon42 + 8) = phi36;
							uint64_t phi_in44 = phi37;
							uint64_t phi45 = phi_in41;
							uint128_t anon46 = (__zext uint128_t)(phi45 & 0xffff) * 3777893186295716171 >> 75;
							*(uint16_t*)phi39 = (uint16_t)phi45 + (uint16_t)anon46 * 55536;
							uint64_t phi_in47 = *(uint64_t*)(anon42 + 8);
							uint64_t phi48 = phi39 + 2;
							uint64_t* phi_in49 = phi38;
							uint64_t phi50 = phi40 + 1;
							if (phi40 >= 999)
							{
								uint64_t phi51 = *phi38;
								if (*phi38 == 0)
								{
									*(uint64_t*)*(uint64_t*)(anon42 + 8) = anon42;
									*(uint64_t*)anon43 = 0;
									phi51 = anon42;
								}
								phi_in44 = phi51;
								phi_in47 = phi_in44;
								phi48 = phi_in44 + 16;
								phi_in49 = (uint64_t*)phi_in44;
								phi50 = 0;
							}
							phi35 = phi48;
							phi_in33 = phi_in47;
							phi_in34 = phi_in44;
							phi36 = phi_in47;
							phi37 = phi_in44;
							phi38 = phi_in49;
							phi39 = phi35;
							phi40 = phi50;
							anon52 = (uint64_t)anon46;
							phi_in41 = anon52;
						}
						while (anon52 != 0);
					}
				}
				*(uint16_t*)phi35 = 65535;
				phi10 = phi_in33;
				phi11 = phi_in34;
			}
			uint64_t phi_in53 = phi11;
			uint64_t phi54 = phi10;
			uint64_t phi55 = 0;
			uint64_t phi56 = 0;
			uint64_t phi_in57 = 1;
			if (*(uint16_t*)(phi_in53 + 16) != 65535)
			{
				uint64_t phi58;
				do
				{
					phi58 = phi_in57;
					phi54 = phi10;
					phi55 = 0;
					phi56 = phi58;
					if (*(uint16_t*)(phi_in53 + (phi58 << 1) + 16) != 65535)
					{
						phi54 = phi10;
						phi55 = 0;
						phi56 = 1000;
						phi_in57 = phi58 + 1;
						if (phi58 == 999)
						{
							break;
						}
					}
				}
				while (*(uint16_t*)(phi_in53 + (phi58 << 1) + 16) != 65535);
			}
			do
			{
				uint64_t anon60 = phi56 - 1;
				phi_in59 = anon60;
				uint64_t phi61 = phi55;
				if (anon60 > -1)
				{
					uint64_t anon65;
					do
					{
						uint64_t phi62 = phi_in59;
						uint8_t* phi63 = (uint8_t*)0x400a44;
						uint64_t phi64 = 1;
						if (phi61 != 0)
						{
							phi63 = (uint8_t*)0x400a48;
							phi64 = 20;
							if (phi61 != ((uint64_t)((__zext uint128_t)phi61 * 970881267037344822 >> 64) - (phi61 >> 63)) * 19)
							{
								phi63 = (uint8_t*)0x400a49;
								phi64 = phi61 + 1;
							}
						}
						phi55 = phi64;
						printf(phi63);
						anon65 = phi62 - 1;
						phi_in59 = anon65;
						phi61 = phi55;
						phi_in53 = phi54;
					}
					while (anon65 > -1);
				}
				phi66 = phi_in53;
				phi54 = *(uint64_t*)(phi66 + 8);
				phi55 = phi55;
				phi_in53 = *(uint64_t*)(phi66 + 8);
				phi56 = 1000;
			}
			while (*(uint64_t*)(phi66 + 8) != 0);
			phi15 = phi19;
			phi_in16 = (phi20 & 0xffff) + 1;
			phi_in13 = phi18;
			phi17 = 65535;
			uint16_t anon67 = (uint16_t)phi22 + phi17 * (uint16_t)phi20;
			uint128_t anon68 = (__zext uint128_t)anon67 * 3777893186295716171 >> 75;
			*(uint16_t*)phi19 = anon67 + (uint16_t)anon68 * 55536;
			if (phi28 < 1000)
			{
				phi69 = *(uint64_t*)(anon30 + 8);
				phi70 = phi19 + 2;
				phi71 = phi_in23;
				phi72 = phi_in24;
				phi73 = phi27;
				phi74 = phi26 + 2;
				phi75 = phi28 + 1;
			}
			else 
			{
				uint64_t phi76 = *phi27;
				uint64_t phi77 = phi32;
				if (*phi27 == 0)
				{
					*(uint64_t*)*(uint64_t*)(anon30 + 8) = anon30;
					*(uint64_t*)anon31 = 0;
					phi76 = anon30;
					phi77 = anon30;
				}
				phi71 = phi76;
				phi69 = phi71;
				phi70 = phi71 + 16;
				uint64_t* anon78 = (uint64_t*)phi71;
				phi72 = anon78;
				phi73 = anon78;
				phi32 = *(uint64_t*)phi77;
				phi74 = phi77 + 16;
				phi75 = 0;
			}
			phi21 = phi69;
			phi19 = phi70;
			phi_in23 = phi71;
			uint64_t* phi_in24 = phi72;
			phi27 = phi73;
			phi_in29 = phi32;
			phi26 = phi74;
			phi28 = phi75;
			phi22 = (uint64_t)anon68;
			phi17 = *(uint16_t*)phi26;
		}
		break;
		phi_in1 = anon12;
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
