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
	uint64_t phi_in55;
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
			uint64_t phi_in12;
			uint64_t phi14;
			uint64_t phi_in15;
			uint16_t phi16;
			uint64_t phi17;
			uint64_t phi18;
			uint64_t phi19;
			uint16_t phi20;
			uint64_t phi21;
			uint64_t phi22;
			uint64_t phi23;
			uint64_t phi24;
			uint64_t phi25;
			uint64_t phi26;
			uint64_t anon27;
			uint8_t* anon28;
			uint64_t phi29;
			uint64_t phi53;
			uint64_t phi_in65;
			uint64_t phi66;
			uint64_t phi67;
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
				phi_in12 = anon8;
				uint64_t phi_in13 = anon8 + 16;
				phi14 = anon9;
				phi_in15 = 2;
				phi_in12 = anon6;
				phi16 = 1;
				phi17 = phi_in12;
				phi18 = phi_in13;
				phi_in13 = phi14;
				phi19 = phi_in15;
				phi20 = phi16;
				phi21 = phi17;
				phi22 = *(uint64_t*)phi_in12;
				phi23 = phi_in13;
				phi24 = phi18;
				phi25 = 0;
				phi26 = 0;
				anon28 = malloc(2016);
				anon27 = (uint64_t)anon28;
				*(uint64_t*)(anon27 + 8) = phi21;
				phi29 = phi22;
				if (phi29 == 0 & phi20 == 65535)
				{
					phi30 = *(uint64_t*)(anon27 + 8);
					phi31 = phi24;
					uint8_t* anon33 = malloc(2016);
					uint64_t anon32 = (uint64_t)anon33;
					*(uint64_t*)(anon32 + 8) = *(uint64_t*)(anon27 + 8);
					uint64_t phi34 = phi25;
					uint64_t phi35 = phi24;
					uint64_t phi36 = phi26;
					uint64_t phi37 = phi25 & 0xffff;
					if (phi25 != 0)
					{
						uint64_t phi47;
						do
						{
							uint64_t phi40;
							uint64_t phi_in41;
							uint64_t anon42;
							uint64_t phi43;
							uint64_t phi38 = *(uint64_t*)(anon32 + 8);
							uint128_t anon39 = (__zext uint128_t)phi37 * 3777893186295716171 >> 75;
							*(uint16_t*)phi35 = (uint16_t)phi34 + (uint16_t)anon39 * 55536;
							if (phi36 < 999)
							{
								phi40 = phi35 + 2;
								anon42 = (uint64_t)anon39;
								phi_in41 = anon42;
								phi43 = phi36 + 1;
							}
							else 
							{
								uint64_t phi44;
								uint64_t* anon45 = (uint64_t*)phi38;
								phi44 = *anon45;
								uint64_t phi46 = anon42;
								if (*anon45 == 0)
								{
									*anon45 = anon32;
									*(uint64_t*)anon33 = 0;
									*(uint64_t*)(anon32 + 8) = phi38;
									phi44 = anon32;
									phi46 = anon42 & 0xffff;
								}
								phi_in41 = phi46;
								phi38 = phi44;
								phi40 = phi44 + 16;
								phi43 = 0;
							}
							phi47 = phi_in41;
							phi30 = phi38;
							phi31 = phi40;
							*(uint64_t*)(anon32 + 8) = phi38;
							phi34 = anon42;
							phi35 = phi40;
							phi36 = phi43;
							phi37 = anon42;
						}
						while (phi47 != 0);
					}
				}
				uint64_t phi_in48 = phi30;
				*(uint16_t*)phi31 = 65535;
				phi10 = phi_in48;
			}
			uint64_t phi_in49 = phi10;
			uint64_t phi50 = 0;
			uint64_t phi51 = 0;
			uint64_t phi52 = 1;
			if (*(uint16_t*)(phi_in49 + 16) != 65535)
			{
				phi50 = 0;
				phi51 = phi52;
				if (*(uint16_t*)(phi_in49 + (phi52 << 1) + 16) != 65535)
				{
					phi50 = 0;
					phi51 = 1000;
				}
			}
			do
			{
				phi53 = phi_in49;
				uint64_t phi_in54 = phi50;
				uint64_t anon56 = phi51 - 1;
				phi_in55 = anon56;
				uint64_t phi57 = phi_in54;
				uint64_t phi_in58 = phi_in54;
				if (anon56 > -1)
				{
					uint64_t anon62;
					do
					{
						uint64_t phi59 = phi_in55;
						uint8_t* phi60 = (uint8_t*)0x400a44;
						uint64_t phi61 = 1;
						if (phi57 != 0)
						{
							phi60 = (uint8_t*)0x400a48;
							phi61 = 20;
							if (phi57 != ((uint64_t)((__zext uint128_t)phi57 * 970881267037344822 >> 64) - (phi57 >> 63)) * 19)
							{
								phi60 = (uint8_t*)0x400a49;
								phi61 = phi57 + 1;
							}
						}
						phi_in54 = phi61;
						printf(phi60);
						anon62 = phi59 - 1;
						phi_in55 = anon62;
						phi57 = phi_in54;
						phi_in58 = phi_in54;
					}
					while (anon62 > -1);
				}
				phi_in49 = *(uint64_t*)(phi53 + 8);
				phi50 = phi_in58;
				phi51 = 1000;
			}
			while (*(uint64_t*)(phi53 + 8) != 0);
			phi52 = phi52 + 1;
			phi14 = phi18;
			phi_in15 = (phi19 & 0xffff) + 1;
			phi_in12 = phi17;
			phi16 = 65535;
			uint16_t anon63 = (uint16_t)phi25 + phi20 * (uint16_t)phi19;
			uint128_t anon64 = (__zext uint128_t)anon63 * 3777893186295716171 >> 75;
			*(uint16_t*)phi24 = anon63 + (uint16_t)anon64 * 55536;
			if (phi26 < 1000)
			{
				phi_in65 = *(uint64_t*)(anon27 + 8);
				phi66 = phi23 + 2;
				phi67 = phi24 + 2;
				phi26 = phi26 + 1;
			}
			else 
			{
				uint64_t phi68;
				uint64_t* anon69 = (uint64_t*)*(uint64_t*)(anon27 + 8);
				phi68 = *anon69;
				uint64_t phi70 = phi29;
				if (*anon69 == 0)
				{
					*anon69 = anon27;
					*(uint64_t*)anon28 = 0;
					phi68 = anon27;
					phi70 = anon27;
				}
				phi_in65 = phi68;
				phi29 = *(uint64_t*)phi70;
				phi66 = phi70 + 16;
				phi67 = phi_in65 + 16;
				phi26 = 0;
			}
			phi22 = phi29;
			phi23 = phi66;
			phi24 = phi67;
			phi21 = phi_in65;
			phi25 = (uint64_t)anon64;
			phi20 = *(uint16_t*)phi23;
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
