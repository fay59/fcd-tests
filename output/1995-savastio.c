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
	uint64_t phi_in54;
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
			uint64_t anon22;
			uint8_t* anon23;
			uint64_t phi_in24;
			uint64_t phi25;
			uint64_t phi26;
			uint64_t phi27;
			uint16_t phi28;
			uint64_t phi29;
			uint64_t phi30;
			uint64_t phi53;
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
			uint64_t phi_in10 = anon6;
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
				uint16_t phi_in21 = phi17;
				anon23 = malloc(2016);
				anon22 = (uint64_t)anon23;
				*(uint64_t*)(anon22 + 8) = phi18;
				phi_in24 = *(uint64_t*)phi_in12;
				phi25 = phi_in13;
				phi26 = phi19;
				phi27 = 0;
				phi28 = phi_in21;
				phi29 = 0;
				phi30 = phi_in24;
				if (phi30 == 0 & phi28 == 65535)
				{
					phi_in31 = *(uint64_t*)(anon22 + 8);
					phi32 = phi26;
					uint8_t* anon34 = malloc(2016);
					uint64_t anon33 = (uint64_t)anon34;
					*(uint64_t*)(anon33 + 8) = *(uint64_t*)(anon22 + 8);
					uint64_t phi35 = phi27;
					uint64_t phi36 = phi26;
					uint64_t phi37 = phi29;
					uint64_t phi38 = phi27 & 0xffff;
					if (phi27 != 0)
					{
						uint64_t phi48;
						do
						{
							uint64_t phi_in42;
							uint128_t anon39 = (__zext uint128_t)phi38 * 3777893186295716171 >> 75;
							*(uint16_t*)phi36 = (uint16_t)phi35 + (uint16_t)anon39 * 55536;
							uint64_t phi40 = *(uint64_t*)(anon33 + 8);
							uint64_t phi41 = phi36 + 2;
							uint64_t anon43 = (uint64_t)anon39;
							phi_in42 = anon43;
							uint64_t phi44 = phi37 + 1;
							if (phi37 >= 999)
							{
								uint64_t phi45;
								uint64_t* anon46 = (uint64_t*)*(uint64_t*)(anon33 + 8);
								phi45 = *anon46;
								uint64_t phi47 = anon43;
								if (*anon46 == 0)
								{
									*anon46 = anon33;
									*(uint64_t*)anon34 = 0;
									phi45 = anon33;
									phi47 = anon43 & 0xffff;
								}
								phi40 = phi45;
								phi_in42 = phi47;
								phi41 = phi40 + 16;
								phi44 = 0;
							}
							phi32 = phi41;
							phi48 = phi_in42;
							phi_in31 = phi40;
							*(uint64_t*)(anon33 + 8) = phi40;
							phi35 = anon43;
							phi36 = phi32;
							phi37 = phi44;
							phi38 = anon43;
						}
						while (phi48 != 0);
					}
				}
				*(uint16_t*)phi32 = 65535;
				phi_in10 = phi_in31;
			}
			uint64_t phi_in49 = 0;
			uint64_t phi50 = 0;
			uint64_t phi_in51 = 1;
			if (*(uint16_t*)(phi_in10 + 16) != 65535)
			{
				uint64_t phi52;
				do
				{
					phi52 = phi_in51;
					phi_in49 = 0;
					phi50 = phi52;
					if (*(uint16_t*)(phi_in10 + (phi52 << 1) + 16) != 65535)
					{
						phi_in49 = 0;
						phi50 = 1000;
						phi_in51 = phi52 + 1;
						if (phi52 == 999)
						{
							break;
						}
					}
				}
				while (*(uint16_t*)(phi_in10 + (phi52 << 1) + 16) != 65535);
			}
			do
			{
				phi53 = phi_in10;
				uint64_t anon55 = phi50 - 1;
				phi_in54 = anon55;
				uint64_t phi56 = phi_in49;
				uint64_t phi_in57 = phi_in49;
				if (anon55 > -1)
				{
					uint64_t anon61;
					do
					{
						uint64_t phi58 = phi_in54;
						uint8_t* phi59 = (uint8_t*)0x400a44;
						uint64_t phi60 = 1;
						if (phi56 != 0)
						{
							phi59 = (uint8_t*)0x400a48;
							phi60 = 20;
							if (phi56 != ((uint64_t)((__zext uint128_t)phi56 * 970881267037344822 >> 64) - (phi56 >> 63)) * 19)
							{
								phi59 = (uint8_t*)0x400a49;
								phi60 = phi56 + 1;
							}
						}
						phi_in49 = phi60;
						printf(phi59);
						anon61 = phi58 - 1;
						phi_in54 = anon61;
						phi56 = phi_in49;
						phi_in57 = phi_in49;
					}
					while (anon61 > -1);
				}
				phi_in10 = *(uint64_t*)(phi53 + 8);
				phi_in49 = phi_in57;
				phi50 = 1000;
			}
			while (*(uint64_t*)(phi53 + 8) != 0);
			phi14 = phi19;
			phi_in15 = (phi20 & 0xffff) + 1;
			phi16 = phi18;
			phi17 = 65535;
			uint16_t anon62 = (uint16_t)phi27 + phi28 * (uint16_t)phi20;
			uint128_t anon63 = (__zext uint128_t)anon62 * 3777893186295716171 >> 75;
			*(uint16_t*)phi26 = anon62 + (uint16_t)anon63 * 55536;
			if (phi29 < 1000)
			{
				phi64 = *(uint64_t*)(anon22 + 8);
				phi65 = phi25 + 2;
				phi26 = phi26 + 2;
				phi29 = phi29 + 1;
			}
			else 
			{
				uint64_t phi66;
				uint64_t* anon67 = (uint64_t*)*(uint64_t*)(anon22 + 8);
				phi66 = *anon67;
				uint64_t phi68 = phi30;
				if (*anon67 == 0)
				{
					*anon67 = anon22;
					*(uint64_t*)anon23 = 0;
					phi66 = anon22;
					phi68 = anon22;
				}
				phi64 = phi66;
				phi30 = *(uint64_t*)phi68;
				phi65 = phi68 + 16;
				phi26 = phi66 + 16;
				phi29 = 0;
			}
			*(uint64_t*)(anon22 + 8) = phi64;
			phi_in24 = phi30;
			phi25 = phi65;
			phi27 = (uint64_t)anon63;
			phi28 = *(uint16_t*)phi25;
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
