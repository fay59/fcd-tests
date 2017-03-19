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
	struct _IO_FILE** anon5;
	uint64_t phi_in80;
	uint64_t phi_in1 = 0;
	uint8_t phi_in2 = 9;
	while (true)
	{
		uint64_t anon12;
		uint64_t phi3 = phi_in1;
		uint8_t phi4 = phi_in2;
		anon5 = (struct _IO_FILE**)0x600e10;
		_IO_putc((__sext int32_t)(phi4 ^ 0x4c), *anon5);
		if (phi3 >= 13)
		{
			uint64_t phi_in13;
			uint64_t phi_in14;
			uint64_t phi_in15;
			uint64_t phi_in16;
			uint64_t phi_in17;
			uint16_t phi_in18;
			uint64_t phi19;
			uint64_t phi20;
			uint64_t phi21;
			uint64_t phi22;
			uint64_t phi23;
			uint64_t phi_in25;
			uint64_t phi_in26;
			uint64_t phi_in27;
			uint64_t phi_in28;
			uint64_t phi_in29;
			uint16_t phi_in30;
			uint64_t phi_in31;
			uint64_t phi32;
			uint64_t phi33;
			uint64_t phi34;
			uint64_t phi35;
			uint64_t phi36;
			uint16_t phi37;
			uint64_t phi38;
			uint64_t phi76;
			uint64_t phi77;
			uint64_t phi_in95;
			uint64_t phi_in96;
			uint64_t phi_in97;
			uint64_t phi_in98;
			uint64_t phi_in99;
			scanf((uint8_t*)0x400a4e);
			uint8_t* anon6 = malloc(2016);
			*(uint64_t*)anon6 = 0;
			uint64_t anon7 = (uint64_t)anon6;
			*(uint64_t*)(anon7 + 8) = 0;
			uint8_t* anon8 = malloc(2016);
			*(uint64_t*)anon8 = 0;
			uint64_t anon9 = (uint64_t)anon8;
			*(uint64_t*)(anon9 + 8) = 0;
			uint64_t anon10 = anon7 + 16;
			*(uint16_t*)anon10 = 1;
			*(uint16_t*)(anon7 + 18) = 65535;
			uint64_t phi_in11 = anon7;
			anon12 = phi3 + 1;
			if (anon12 >= 2)
			{
				uint64_t phi_in40;
				uint64_t phi_in41;
				phi_in13 = anon9;
				phi_in14 = anon9 + 16;
				phi_in15 = anon10;
				phi_in16 = 2;
				phi_in17 = anon7;
				phi_in18 = 1;
				phi19 = phi_in13;
				phi20 = phi_in14;
				phi21 = phi_in15;
				phi22 = phi_in16;
				phi23 = phi_in17;
				uint16_t phi24 = phi_in18;
				phi_in25 = phi19;
				phi_in26 = *(uint64_t*)phi23;
				phi_in27 = phi21;
				phi_in28 = phi20;
				phi_in29 = 0;
				phi_in30 = phi24;
				phi_in31 = 0;
				phi32 = phi_in25;
				phi33 = phi_in26;
				phi34 = phi_in27;
				phi35 = phi_in28;
				phi36 = phi_in29;
				phi37 = phi_in30;
				phi38 = phi_in31;
				bool anon39 = phi33 == 0 & phi37 == 65535;
				if (anon39)
				{
					phi_in40 = phi32;
					phi_in41 = phi35;
					uint64_t phi_in42 = phi32;
					uint64_t phi_in43 = phi36;
					uint64_t phi_in44 = phi35;
					uint64_t phi_in45 = phi38;
					uint64_t phi_in46 = phi36 & 0xffff;
					if (phi36 != 0)
					{
						uint64_t phi67;
						do
						{
							uint64_t phi_in53;
							uint64_t phi_in54;
							uint64_t phi_in55;
							uint64_t anon56;
							uint64_t phi_in57;
							uint64_t phi47 = phi_in42;
							uint64_t phi48 = phi_in43;
							uint64_t phi49 = phi_in44;
							uint64_t phi50 = phi_in45;
							uint64_t phi51 = phi_in46;
							uint128_t anon52 = (__zext uint128_t)phi51 * 3777893186295716171 >> 75;
							*(uint16_t*)phi49 = (uint16_t)phi48 + (uint16_t)anon52 * 55536;
							if (phi50 < 999)
							{
								phi_in53 = phi47;
								phi_in54 = phi49 + 2;
								anon56 = (uint64_t)anon52;
								phi_in55 = anon56;
								phi_in57 = phi50 + 1;
							}
							else 
							{
								uint64_t phi_in58;
								uint64_t* anon59 = (uint64_t*)phi47;
								phi_in58 = *anon59;
								uint64_t phi_in60 = anon56;
								if (*anon59 == 0)
								{
									uint8_t* anon61 = malloc(2016);
									uint64_t anon62 = (uint64_t)anon61;
									*anon59 = anon62;
									*(uint64_t*)anon61 = 0;
									*(uint64_t*)(anon62 + 8) = phi47;
									phi_in58 = anon62;
									phi_in60 = anon56 & 0xffff;
								}
								uint64_t phi63 = phi_in58;
								uint64_t phi64 = phi_in60;
								phi_in53 = phi63;
								phi_in54 = phi63 + 16;
								phi_in55 = phi64;
								phi_in57 = 0;
							}
							uint64_t phi65 = phi_in53;
							uint64_t phi66 = phi_in54;
							phi67 = phi_in55;
							uint64_t phi68 = phi_in57;
							phi_in40 = phi65;
							phi_in41 = phi66;
							phi_in42 = phi65;
							phi_in43 = anon56;
							phi_in44 = phi66;
							phi_in45 = phi68;
							phi_in46 = anon56;
						}
						while (phi67 != 0);
					}
				}
				uint64_t phi69 = phi_in40;
				uint64_t phi70 = phi_in41;
				*(uint16_t*)phi70 = 65535;
				phi_in11 = phi69;
			}
			uint64_t phi71 = phi_in11;
			uint64_t phi_in72 = phi71;
			uint64_t phi_in73 = 0;
			uint64_t phi_in74 = 0;
			uint64_t phi_in75 = 1;
			if (*(uint16_t*)(phi71 + 16) != 65535)
			{
				phi76 = phi_in75;
				phi_in72 = phi71;
				phi_in73 = 0;
				phi_in74 = phi76;
				if (*(uint16_t*)(phi71 + (phi76 << 1) + 16) != 65535)
				{
					phi_in72 = phi71;
					phi_in73 = 0;
					phi_in74 = 1000;
				}
			}
			do
			{
				phi77 = phi_in72;
				uint64_t phi78 = phi_in73;
				uint64_t phi79 = phi_in74;
				uint64_t anon81 = phi79 - 1;
				phi_in80 = anon81;
				uint64_t phi_in82 = phi78;
				uint64_t phi_in83 = phi78;
				if (anon81 > -1)
				{
					uint64_t anon90;
					do
					{
						uint64_t phi84 = phi_in80;
						uint64_t phi85 = phi_in82;
						uint8_t* phi_in86 = (uint8_t*)0x400a44;
						uint64_t phi_in87 = 1;
						if (phi85 != 0)
						{
							phi_in86 = (uint8_t*)0x400a48;
							phi_in87 = 20;
							if (phi85 != ((uint64_t)((__zext uint128_t)phi85 * 970881267037344822 >> 64) - (phi85 >> 63)) * 19)
							{
								phi_in86 = (uint8_t*)0x400a49;
								phi_in87 = phi85 + 1;
							}
						}
						uint8_t* phi88 = phi_in86;
						uint64_t phi89 = phi_in87;
						printf(phi88);
						anon90 = phi84 - 1;
						phi_in80 = anon90;
						phi_in82 = phi89;
						phi_in83 = phi89;
					}
					while (anon90 > -1);
				}
				uint64_t phi91 = phi_in83;
				phi_in72 = *(uint64_t*)(phi77 + 8);
				phi_in73 = phi91;
				phi_in74 = 1000;
			}
			while (*(uint64_t*)(phi77 + 8) != 0);
			phi_in75 = phi76 + 1;
			phi_in13 = phi23;
			phi_in14 = phi21;
			phi_in15 = phi20;
			uint64_t anon92 = phi22 & 0xffff;
			phi_in16 = anon92 + 1;
			phi_in17 = phi19;
			phi_in18 = 65535;
			uint16_t anon93 = (uint16_t)phi36 + phi37 * (uint16_t)phi22;
			uint128_t anon94 = (__zext uint128_t)anon93 * 3777893186295716171 >> 75;
			*(uint16_t*)phi35 = anon93 + (uint16_t)anon94 * 55536;
			if (phi38 < 1000)
			{
				phi_in95 = phi32;
				phi_in96 = phi33;
				phi_in97 = phi34 + 2;
				phi_in98 = phi35 + 2;
				phi_in99 = phi38 + 1;
			}
			else 
			{
				uint64_t phi_in100;
				uint64_t* anon101 = (uint64_t*)phi32;
				phi_in100 = *anon101;
				uint64_t phi_in102 = phi33;
				if (*anon101 == 0)
				{
					uint8_t* anon103 = malloc(2016);
					uint64_t anon104 = (uint64_t)anon103;
					*anon101 = anon104;
					*(uint64_t*)anon103 = 0;
					*(uint64_t*)(anon104 + 8) = phi32;
					phi_in100 = anon104;
					phi_in102 = anon104;
				}
				uint64_t phi105 = phi_in100;
				uint64_t phi106 = phi_in102;
				phi_in95 = phi105;
				phi_in96 = *(uint64_t*)phi106;
				phi_in97 = phi106 + 16;
				phi_in98 = phi105 + 16;
				phi_in99 = 0;
			}
			uint64_t phi107 = phi_in95;
			uint64_t phi108 = phi_in96;
			uint64_t phi109 = phi_in97;
			uint64_t phi110 = phi_in98;
			uint64_t phi111 = phi_in99;
			phi_in25 = phi107;
			phi_in26 = phi108;
			phi_in27 = phi109;
			phi_in28 = phi110;
			phi_in29 = (uint64_t)anon94;
			phi_in30 = *(uint16_t*)phi109;
			phi_in31 = phi111;
		}
		break;
		phi_in1 = anon12;
		phi_in2 = *(uint8_t*)(phi3 + 4196946);
	}
	_IO_putc(10, *anon5);
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
