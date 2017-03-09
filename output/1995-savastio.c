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
	uint64_t phi_in65;
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
			uint64_t phi15;
			uint64_t phi_in16;
			uint64_t phi17;
			uint16_t phi18;
			uint64_t phi19;
			uint64_t phi20;
			uint64_t phi21;
			uint64_t phi23;
			uint64_t phi24;
			uint64_t phi25;
			uint64_t* phi26;
			uint64_t* phi28;
			uint64_t phi29;
			uint16_t phi30;
			uint64_t phi31;
			uint64_t phi32;
			uint64_t anon33;
			uint8_t* anon34;
			uint64_t phi_in35;
			uint64_t* phi_in36;
			uint64_t* phi37;
			uint64_t phi_in38;
			uint64_t phi72;
			uint64_t phi75;
			uint64_t phi76;
			uint64_t phi77;
			uint64_t phi78;
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
				uint64_t phi_in39;
				uint64_t phi40;
				uint64_t phi41;
				uint64_t phi_in13 = anon8;
				uint64_t phi_in14 = anon8 + 16;
				phi15 = anon9;
				phi_in16 = 2;
				phi17 = anon6;
				phi18 = 1;
				phi19 = phi_in13;
				phi20 = phi_in14;
				phi_in14 = phi15;
				phi21 = phi_in16;
				phi_in13 = phi17;
				uint16_t phi_in22 = phi18;
				phi23 = phi19;
				phi24 = phi20;
				phi25 = 0;
				uint64_t* anon27 = (uint64_t*)phi19;
				phi26 = anon27;
				phi28 = anon27;
				phi29 = phi_in14;
				phi30 = phi_in22;
				phi31 = 0;
				phi32 = *(uint64_t*)phi_in13;
				anon34 = malloc(2016);
				anon33 = (uint64_t)anon34;
				*(uint64_t*)(anon33 + 8) = phi23;
				phi_in35 = phi19;
				phi_in36 = phi26;
				phi37 = phi28;
				phi_in38 = phi32;
				if (phi_in38 == 0 & phi30 == 65535)
				{
					phi_in39 = *(uint64_t*)(anon33 + 8);
					phi40 = phi_in35;
					phi41 = phi24;
					uint64_t phi42 = *(uint64_t*)(anon33 + 8);
					uint64_t phi43 = phi_in35;
					uint64_t* phi44 = phi_in36;
					uint64_t phi45 = phi24;
					uint64_t phi46 = phi31;
					uint64_t phi_in47 = phi25;
					if ((phi25 & 0xffff) != 0)
					{
						uint64_t anon57;
						do
						{
							uint64_t phi48 = phi42;
							uint64_t phi_in49 = phi43;
							uint64_t phi50 = phi_in47;
							uint128_t anon51 = (__zext uint128_t)(phi50 & 0xffff) * 3777893186295716171 >> 75;
							*(uint16_t*)phi45 = (uint16_t)phi50 + (uint16_t)anon51 * 55536;
							uint64_t phi52 = phi_in49;
							phi45 = phi45 + 2;
							uint64_t phi_in53 = phi46 + 1;
							if (phi46 >= 999)
							{
								uint64_t phi54 = *phi44;
								if (*phi44 == 0)
								{
									uint8_t* anon55 = malloc(2016);
									uint64_t anon56 = (uint64_t)anon55;
									*(uint64_t*)phi48 = anon56;
									*(uint64_t*)anon55 = 0;
									*(uint64_t*)(anon56 + 8) = phi48;
									phi54 = anon56;
								}
								phi48 = phi54;
								phi52 = phi54;
								phi45 = phi54 + 16;
								phi44 = (uint64_t*)phi54;
								phi_in53 = 0;
							}
							phi_in39 = phi48;
							phi40 = phi52;
							phi41 = phi45;
							phi42 = phi48;
							phi43 = phi52;
							phi44 = phi44;
							phi46 = phi_in53;
							anon57 = (uint64_t)anon51;
							phi_in47 = anon57;
						}
						while (anon57 != 0);
					}
				}
				phi11 = phi40;
				*(uint16_t*)phi41 = 65535;
				phi10 = phi_in39;
			}
			uint64_t phi58 = phi10;
			uint64_t phi59 = 0;
			uint64_t phi_in60 = phi11;
			uint64_t phi61 = 0;
			uint64_t phi_in62 = 1;
			if (*(uint16_t*)(phi11 + 16) != 65535)
			{
				uint64_t phi63;
				do
				{
					phi63 = phi_in62;
					phi59 = 0;
					phi_in60 = phi11;
					phi61 = phi63;
					if (*(uint16_t*)(phi11 + (phi63 << 1) + 16) != 65535)
					{
						phi59 = 0;
						phi_in60 = phi11;
						phi61 = 1000;
						phi_in62 = phi63 + 1;
						if (phi63 == 999)
						{
							break;
						}
					}
				}
				while (*(uint16_t*)(phi11 + (phi63 << 1) + 16) != 65535);
			}
			do
			{
				uint64_t phi_in64 = phi59;
				uint64_t anon66 = phi61 - 1;
				phi_in65 = anon66;
				uint64_t phi67 = phi_in64;
				uint64_t phi_in68 = phi_in64;
				if (anon66 > -1)
				{
					uint64_t anon71;
					do
					{
						uint64_t phi69 = phi_in65;
						uint8_t* phi70 = (uint8_t*)0x400a44;
						phi_in64 = 1;
						if (phi67 != 0)
						{
							phi70 = (uint8_t*)0x400a48;
							phi_in64 = 20;
							if (phi67 != ((uint64_t)((__zext uint128_t)phi67 * 970881267037344822 >> 64) - (phi67 >> 63)) * 19)
							{
								phi70 = (uint8_t*)0x400a49;
								phi_in64 = phi67 + 1;
							}
						}
						printf(phi70);
						anon71 = phi69 - 1;
						phi_in65 = anon71;
						phi67 = phi_in64;
						phi_in68 = phi_in64;
						phi_in60 = phi58;
					}
					while (anon71 > -1);
				}
				phi72 = phi_in60;
				phi58 = *(uint64_t*)(phi72 + 8);
				phi59 = phi_in68;
				phi_in60 = *(uint64_t*)(phi72 + 8);
				phi61 = 1000;
			}
			while (*(uint64_t*)(phi72 + 8) != 0);
			phi15 = phi20;
			phi_in16 = (phi21 & 0xffff) + 1;
			phi17 = phi19;
			phi18 = 65535;
			uint16_t anon73 = (uint16_t)phi25 + phi30 * (uint16_t)phi21;
			uint128_t anon74 = (__zext uint128_t)anon73 * 3777893186295716171 >> 75;
			*(uint16_t*)phi24 = anon73 + (uint16_t)anon74 * 55536;
			if (phi31 < 1000)
			{
				phi23 = *(uint64_t*)(anon33 + 8);
				phi75 = phi24 + 2;
				phi76 = phi_in35;
				phi26 = phi_in36;
				phi32 = phi_in38;
				phi77 = phi29 + 2;
				phi78 = phi31 + 1;
			}
			else 
			{
				uint64_t phi79 = *phi37;
				uint64_t phi80 = phi_in38;
				if (*phi37 == 0)
				{
					*(uint64_t*)*(uint64_t*)(anon33 + 8) = anon33;
					*(uint64_t*)anon34 = 0;
					phi79 = anon33;
					phi80 = anon33;
				}
				phi23 = phi79;
				phi75 = phi79 + 16;
				phi76 = phi79;
				uint64_t* anon81 = (uint64_t*)phi79;
				phi26 = anon81;
				phi37 = anon81;
				phi32 = *(uint64_t*)phi80;
				phi77 = phi80 + 16;
				phi78 = 0;
			}
			phi24 = phi75;
			phi19 = phi76;
			phi28 = phi37;
			phi31 = phi78;
			phi25 = (uint64_t)anon74;
			phi29 = phi77;
			phi30 = *(uint16_t*)phi77;
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
