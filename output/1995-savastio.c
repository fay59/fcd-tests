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
	uint64_t phi51;
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
			uint64_t phi15;
			uint16_t phi17;
			uint16_t phi18;
			uint64_t phi_in19;
			uint64_t phi20;
			uint64_t phi21;
			uint64_t phi22;
			uint64_t phi23;
			uint64_t phi_in24;
			uint64_t anon25;
			uint8_t* anon26;
			uint64_t phi_in27;
			uint64_t phi60;
			uint64_t phi61;
			uint64_t phi62;
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
			uint64_t phi_in10 = anon6;
			anon11 = phi3 + 1;
			if (anon11 >= 2)
			{
				uint64_t phi_in29;
				uint64_t phi30;
				uint64_t phi_in12 = anon8;
				uint64_t phi_in13 = anon8 + 16;
				uint64_t phi14 = anon9;
				phi15 = 2;
				uint64_t phi16 = anon6;
				phi17 = 1;
				phi16 = phi_in12;
				phi14 = phi_in13;
				phi_in13 = phi14;
				phi_in12 = phi16;
				phi18 = phi17;
				phi_in19 = phi16;
				phi20 = *(uint64_t*)phi_in12;
				phi21 = phi_in13;
				phi22 = phi14;
				phi23 = 0;
				phi_in24 = 0;
				anon26 = malloc(2016);
				anon25 = (uint64_t)anon26;
				*(uint64_t*)(anon25 + 8) = phi_in19;
				phi_in27 = phi20;
				bool anon28 = phi_in27 == 0 & phi18 == 65535;
				if (anon28)
				{
					phi_in29 = *(uint64_t*)(anon25 + 8);
					phi30 = phi22;
					uint64_t phi_in31 = *(uint64_t*)(anon25 + 8);
					uint64_t phi32 = phi23;
					uint64_t phi33 = phi22;
					uint64_t phi34 = phi_in24;
					uint64_t phi35 = phi23 & 0xffff;
					if (phi23 != 0)
					{
						uint64_t phi46;
						do
						{
							uint64_t phi39;
							uint64_t phi_in40;
							uint64_t anon41;
							uint64_t phi42;
							uint8_t* anon37 = malloc(2016);
							uint64_t anon36 = (uint64_t)anon37;
							*(uint64_t*)(anon36 + 8) = phi_in31;
							uint128_t anon38 = (__zext uint128_t)phi35 * 3777893186295716171 >> 75;
							*(uint16_t*)phi33 = (uint16_t)phi32 + (uint16_t)anon38 * 55536;
							if (phi34 < 999)
							{
								phi_in19 = *(uint64_t*)(anon36 + 8);
								phi39 = phi33 + 2;
								anon41 = (uint64_t)anon38;
								phi_in40 = anon41;
								phi42 = phi34 + 1;
							}
							else 
							{
								uint64_t phi43;
								uint64_t* anon44 = (uint64_t*)*(uint64_t*)(anon36 + 8);
								phi43 = *anon44;
								phi_in40 = anon41;
								if (*anon44 == 0)
								{
									*anon44 = anon36;
									*(uint64_t*)anon37 = 0;
									phi43 = anon36;
									phi_in40 = anon41 & 0xffff;
								}
								phi_in31 = phi43;
								phi_in19 = phi_in31;
								phi39 = phi_in31 + 16;
								phi42 = 0;
							}
							uint64_t phi_in45 = phi39;
							phi46 = phi_in40;
							phi_in29 = phi_in19;
							phi30 = phi_in45;
							phi_in31 = phi_in19;
							phi32 = anon41;
							phi33 = phi_in45;
							phi34 = phi42;
							phi35 = anon41;
						}
						while (phi46 != 0);
					}
				}
				*(uint16_t*)phi30 = 65535;
				phi_in10 = phi_in29;
			}
			uint64_t phi47 = phi_in10;
			uint64_t phi48 = 0;
			uint64_t phi49 = 0;
			uint64_t phi50 = 1;
			if (*(uint16_t*)(phi_in10 + 16) != 65535)
			{
				phi47 = phi_in10;
				phi48 = 0;
				phi49 = phi50;
				if (*(uint16_t*)(phi_in10 + (phi50 << 1) + 16) != 65535)
				{
					phi47 = phi_in10;
					phi48 = 0;
					phi49 = 1000;
				}
			}
			do
			{
				uint64_t anon52 = phi49 - 1;
				phi51 = anon52;
				uint64_t phi53 = phi48;
				if (anon52 > -1)
				{
					uint64_t anon56;
					do
					{
						uint8_t* phi54 = (uint8_t*)0x400a44;
						uint64_t phi55 = 1;
						if (phi53 != 0)
						{
							phi54 = (uint8_t*)0x400a48;
							phi55 = 20;
							if (phi53 != ((uint64_t)((__zext uint128_t)phi53 * 970881267037344822 >> 64) - (phi53 >> 63)) * 19)
							{
								phi54 = (uint8_t*)0x400a49;
								phi55 = phi53 + 1;
							}
						}
						phi48 = phi55;
						printf(phi54);
						anon56 = phi51 - 1;
						phi51 = anon56;
						phi53 = phi48;
					}
					while (anon56 > -1);
				}
				phi47 = *(uint64_t*)(phi47 + 8);
				phi49 = 1000;
			}
			while (*(uint64_t*)(phi47 + 8) != 0);
			phi50 = phi50 + 1;
			uint64_t anon57 = phi15 & 0xffff;
			phi15 = anon57 + 1;
			phi17 = 65535;
			uint16_t anon58 = (uint16_t)phi23 + phi18 * (uint16_t)phi15;
			uint128_t anon59 = (__zext uint128_t)anon58 * 3777893186295716171 >> 75;
			*(uint16_t*)phi22 = anon58 + (uint16_t)anon59 * 55536;
			if (phi_in24 < 1000)
			{
				phi_in19 = *(uint64_t*)(anon25 + 8);
				phi60 = phi_in27;
				phi61 = phi21 + 2;
				phi22 = phi22 + 2;
				phi62 = phi_in24 + 1;
			}
			else 
			{
				uint64_t phi_in63;
				uint64_t* anon64 = (uint64_t*)*(uint64_t*)(anon25 + 8);
				phi_in63 = *anon64;
				uint64_t phi65 = phi_in27;
				if (*anon64 == 0)
				{
					*anon64 = anon25;
					*(uint64_t*)anon26 = 0;
					phi_in63 = anon25;
					phi65 = anon25;
				}
				phi_in19 = phi_in63;
				phi60 = *(uint64_t*)phi65;
				phi61 = phi65 + 16;
				phi22 = phi_in63 + 16;
				phi62 = 0;
			}
			phi20 = phi60;
			phi21 = phi61;
			phi_in24 = phi62;
			phi23 = (uint64_t)anon59;
			phi18 = *(uint16_t*)phi21;
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
