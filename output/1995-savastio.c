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
	uint64_t phi_in66;
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
			uint16_t phi_in18;
			uint64_t phi19;
			uint64_t phi20;
			uint64_t phi21;
			uint64_t phi22;
			uint64_t phi23;
			uint64_t phi24;
			uint64_t* phi25;
			uint64_t* phi27;
			uint64_t phi28;
			uint16_t phi29;
			uint64_t phi30;
			uint64_t phi31;
			uint64_t anon32;
			uint8_t* anon33;
			uint64_t phi34;
			uint64_t* phi_in35;
			uint64_t* phi36;
			uint64_t phi37;
			uint64_t phi72;
			uint64_t phi75;
			uint64_t phi76;
			uint64_t phi77;
			uint64_t phi78;
			uint64_t phi79;
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
				uint64_t phi38;
				uint64_t phi39;
				uint64_t phi40;
				uint64_t phi_in13 = anon8;
				uint64_t phi_in14 = anon8 + 16;
				phi15 = anon9;
				phi_in16 = 2;
				phi17 = anon6;
				phi_in18 = 1;
				phi19 = phi_in13;
				phi20 = phi_in14;
				phi_in14 = phi15;
				phi21 = phi_in16;
				phi_in13 = phi17;
				phi22 = phi20;
				phi23 = 0;
				phi24 = phi19;
				uint64_t* anon26 = (uint64_t*)phi19;
				phi25 = anon26;
				phi27 = anon26;
				phi28 = phi_in14;
				phi29 = phi_in18;
				phi30 = 0;
				phi31 = *(uint64_t*)phi_in13;
				anon33 = malloc(2016);
				anon32 = (uint64_t)anon33;
				*(uint64_t*)(anon32 + 8) = phi19;
				phi34 = phi24;
				phi_in35 = phi25;
				phi36 = phi27;
				phi37 = phi31;
				if (phi37 == 0 & phi29 == 65535)
				{
					phi38 = *(uint64_t*)(anon32 + 8);
					phi39 = phi34;
					phi40 = phi22;
					uint64_t phi41 = *(uint64_t*)(anon32 + 8);
					uint64_t phi_in42 = phi34;
					uint64_t* phi43 = phi_in35;
					uint64_t phi44 = phi22;
					uint64_t phi45 = phi30;
					uint64_t phi_in46 = phi23;
					if ((phi23 & 0xffff) != 0)
					{
						uint64_t anon55;
						do
						{
							uint64_t phi47 = phi41;
							uint64_t* phi48 = phi43;
							uint64_t phi49 = phi_in46;
							uint128_t anon50 = (__zext uint128_t)(phi49 & 0xffff) * 3777893186295716171 >> 75;
							*(uint16_t*)phi44 = (uint16_t)phi49 + (uint16_t)anon50 * 55536;
							uint64_t phi51 = phi_in42;
							phi44 = phi44 + 2;
							uint64_t phi52 = phi45 + 1;
							if (phi45 >= 999)
							{
								phi47 = *phi48;
								if (*phi48 == 0)
								{
									uint8_t* anon53 = malloc(2016);
									uint64_t anon54 = (uint64_t)anon53;
									*(uint64_t*)phi47 = anon54;
									*(uint64_t*)anon53 = 0;
									*(uint64_t*)(anon54 + 8) = phi47;
									phi47 = anon54;
								}
								phi51 = phi47;
								phi44 = phi47 + 16;
								phi48 = (uint64_t*)phi47;
								phi52 = 0;
							}
							phi39 = phi51;
							phi38 = phi47;
							phi40 = phi44;
							phi41 = phi47;
							phi_in42 = phi39;
							phi43 = phi48;
							phi45 = phi52;
							anon55 = (uint64_t)anon50;
							phi_in46 = anon55;
						}
						while (anon55 != 0);
					}
				}
				uint64_t phi_in56 = phi38;
				uint64_t phi_in57 = phi39;
				*(uint16_t*)phi40 = 65535;
				phi10 = phi_in56;
				phi11 = phi_in57;
			}
			uint64_t phi58 = phi10;
			uint64_t phi59 = phi11;
			uint64_t phi60 = 0;
			uint64_t phi61 = 0;
			uint64_t phi_in62 = 1;
			if (*(uint16_t*)(phi59 + 16) != 65535)
			{
				uint64_t phi63;
				do
				{
					phi63 = phi_in62;
					phi60 = 0;
					phi61 = phi63;
					if (*(uint16_t*)(phi59 + (phi63 << 1) + 16) != 65535)
					{
						phi60 = 0;
						phi61 = 1000;
						phi_in62 = phi63 + 1;
						if (phi63 == 999)
						{
							break;
						}
					}
				}
				while (*(uint16_t*)(phi59 + (phi63 << 1) + 16) != 65535);
			}
			do
			{
				uint64_t phi64 = phi60;
				uint64_t phi_in65 = phi59;
				uint64_t anon67 = phi61 - 1;
				phi_in66 = anon67;
				uint64_t phi68 = phi64;
				if (anon67 > -1)
				{
					uint64_t anon71;
					do
					{
						uint64_t phi69 = phi_in66;
						uint8_t* phi70 = (uint8_t*)0x400a44;
						phi68 = 1;
						if (phi68 != 0)
						{
							phi70 = (uint8_t*)0x400a48;
							phi68 = 20;
							if (phi68 != ((uint64_t)((__zext uint128_t)phi68 * 970881267037344822 >> 64) - (phi68 >> 63)) * 19)
							{
								phi70 = (uint8_t*)0x400a49;
								phi68 = phi68 + 1;
							}
						}
						printf(phi70);
						anon71 = phi69 - 1;
						phi_in66 = anon71;
						phi64 = phi68;
						phi_in65 = phi58;
					}
					while (anon71 > -1);
				}
				phi72 = phi_in65;
				phi58 = *(uint64_t*)(phi72 + 8);
				phi60 = phi64;
				phi59 = *(uint64_t*)(phi72 + 8);
				phi61 = 1000;
			}
			while (*(uint64_t*)(phi72 + 8) != 0);
			phi15 = phi20;
			phi_in16 = (phi21 & 0xffff) + 1;
			phi17 = phi19;
			phi_in18 = 65535;
			uint16_t anon73 = (uint16_t)phi23 + phi29 * (uint16_t)phi21;
			uint128_t anon74 = (__zext uint128_t)anon73 * 3777893186295716171 >> 75;
			*(uint16_t*)phi22 = anon73 + (uint16_t)anon74 * 55536;
			if (phi30 < 1000)
			{
				phi75 = *(uint64_t*)(anon32 + 8);
				phi76 = phi22 + 2;
				phi25 = phi_in35;
				phi77 = phi37;
				phi78 = phi28 + 2;
				phi79 = phi30 + 1;
			}
			else 
			{
				uint64_t phi80 = *phi36;
				if (*phi36 == 0)
				{
					*(uint64_t*)*(uint64_t*)(anon32 + 8) = anon32;
					*(uint64_t*)anon33 = 0;
					phi80 = anon32;
					phi37 = anon32;
				}
				phi34 = phi80;
				phi75 = phi34;
				phi76 = phi34 + 16;
				uint64_t* anon81 = (uint64_t*)phi34;
				phi25 = anon81;
				phi36 = anon81;
				phi77 = *(uint64_t*)phi37;
				phi78 = phi37 + 16;
				phi79 = 0;
			}
			phi19 = phi75;
			phi22 = phi76;
			phi24 = phi34;
			phi27 = phi36;
			phi31 = phi77;
			phi30 = phi79;
			phi23 = (uint64_t)anon74;
			phi28 = phi78;
			phi29 = *(uint16_t*)phi78;
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
