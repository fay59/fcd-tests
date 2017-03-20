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
	uint64_t phi_in52;
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
			uint64_t anon26;
			uint8_t* anon27;
			uint64_t phi28;
			uint64_t phi50;
			uint64_t phi62;
			uint64_t phi63;
			uint64_t phi64;
			uint64_t phi65;
			uint64_t phi66;
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
				uint64_t phi30;
				uint64_t phi31;
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
				phi22 = *(uint64_t*)phi_in12;
				phi23 = phi_in13;
				phi24 = 0;
				phi25 = 0;
				anon27 = malloc(2016);
				anon26 = (uint64_t)anon27;
				*(uint64_t*)(anon26 + 8) = phi18;
				phi28 = phi22;
				bool anon29 = phi28 == 0 & phi21 == 65535;
				if (anon29)
				{
					phi30 = *(uint64_t*)(anon26 + 8);
					phi31 = phi19;
					uint8_t* anon33 = malloc(2016);
					uint64_t anon32 = (uint64_t)anon33;
					*(uint64_t*)(anon32 + 8) = *(uint64_t*)(anon26 + 8);
					uint64_t phi34 = phi24;
					uint64_t phi35 = phi19;
					uint64_t phi36 = phi25;
					uint64_t phi37 = phi24 & 0xffff;
					if (phi24 != 0)
					{
						uint64_t phi45;
						do
						{
							uint64_t phi39;
							uint64_t phi40;
							uint64_t phi_in41;
							uint64_t anon42;
							uint128_t anon38 = (__zext uint128_t)phi37 * 3777893186295716171 >> 75;
							*(uint16_t*)phi35 = (uint16_t)phi34 + (uint16_t)anon38 * 55536;
							if (phi36 < 999)
							{
								phi39 = *(uint64_t*)(anon32 + 8);
								phi40 = phi35 + 2;
								anon42 = (uint64_t)anon38;
								phi_in41 = anon42;
								phi36 = phi36 + 1;
							}
							else 
							{
								uint64_t phi43;
								uint64_t* anon44 = (uint64_t*)*(uint64_t*)(anon32 + 8);
								phi43 = *anon44;
								phi_in41 = anon42;
								if (*anon44 == 0)
								{
									*anon44 = anon32;
									*(uint64_t*)anon33 = 0;
									phi43 = anon32;
									phi_in41 = anon42 & 0xffff;
								}
								phi39 = phi43;
								phi40 = phi43 + 16;
								phi36 = 0;
							}
							phi31 = phi40;
							phi45 = phi_in41;
							phi30 = phi39;
							*(uint64_t*)(anon32 + 8) = phi39;
							phi34 = anon42;
							phi35 = phi31;
							phi37 = anon42;
						}
						while (phi45 != 0);
					}
				}
				phi10 = phi30;
				*(uint16_t*)phi31 = 65535;
			}
			uint64_t phi_in46 = phi10;
			uint64_t phi47 = 0;
			uint64_t phi48 = 0;
			uint64_t phi49 = 1;
			if (*(uint16_t*)(phi_in46 + 16) != 65535)
			{
				phi47 = 0;
				phi48 = phi49;
				if (*(uint16_t*)(phi_in46 + (phi49 << 1) + 16) != 65535)
				{
					phi47 = 0;
					phi48 = 1000;
				}
			}
			do
			{
				phi50 = phi_in46;
				uint64_t phi51 = phi47;
				uint64_t anon53 = phi48 - 1;
				phi_in52 = anon53;
				uint64_t phi54 = phi51;
				if (anon53 > -1)
				{
					uint64_t anon58;
					do
					{
						uint64_t phi55 = phi_in52;
						uint8_t* phi56 = (uint8_t*)0x400a44;
						uint64_t phi57 = 1;
						if (phi54 != 0)
						{
							phi56 = (uint8_t*)0x400a48;
							phi57 = 20;
							if (phi54 != ((uint64_t)((__zext uint128_t)phi54 * 970881267037344822 >> 64) - (phi54 >> 63)) * 19)
							{
								phi56 = (uint8_t*)0x400a49;
								phi57 = phi54 + 1;
							}
						}
						phi51 = phi57;
						printf(phi56);
						anon58 = phi55 - 1;
						phi_in52 = anon58;
						phi54 = phi51;
					}
					while (anon58 > -1);
				}
				phi_in46 = *(uint64_t*)(phi50 + 8);
				phi47 = phi51;
				phi48 = 1000;
			}
			while (*(uint64_t*)(phi50 + 8) != 0);
			phi49 = phi49 + 1;
			phi14 = phi19;
			uint64_t anon59 = phi20 & 0xffff;
			phi_in15 = anon59 + 1;
			phi16 = phi18;
			phi17 = 65535;
			uint16_t anon60 = (uint16_t)phi24 + phi21 * (uint16_t)phi20;
			uint128_t anon61 = (__zext uint128_t)anon60 * 3777893186295716171 >> 75;
			*(uint16_t*)phi19 = anon60 + (uint16_t)anon61 * 55536;
			if (phi25 < 1000)
			{
				phi62 = *(uint64_t*)(anon26 + 8);
				phi63 = phi28;
				phi64 = phi23 + 2;
				phi65 = phi19 + 2;
				phi66 = phi25 + 1;
			}
			else 
			{
				uint64_t phi67;
				uint64_t* anon68 = (uint64_t*)*(uint64_t*)(anon26 + 8);
				phi67 = *anon68;
				if (*anon68 == 0)
				{
					*anon68 = anon26;
					*(uint64_t*)anon27 = 0;
					phi67 = anon26;
					phi28 = anon26;
				}
				phi62 = phi67;
				phi63 = *(uint64_t*)phi28;
				phi64 = phi28 + 16;
				phi65 = phi62 + 16;
				phi66 = 0;
			}
			phi18 = phi62;
			phi22 = phi63;
			phi23 = phi64;
			phi19 = phi65;
			phi25 = phi66;
			phi24 = (uint64_t)anon61;
			phi21 = *(uint16_t*)phi23;
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
