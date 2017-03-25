#include "tests/bin/1994-dodsond1.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x601470 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1)
{
	l(4195589);
	uint32_t phi1 = 60;
	while (true)
	{
		uint32_t phi6;
		uint32_t anon9;
		uint8_t* anon23;
		uint8_t* anon26;
		uint32_t phi39;
		uint32_t phi40;
		uint64_t phi_in2 = phi_in3;
		uint32_t phi_in4 = 1;
		uint32_t phi5 = 0;
		do
		{
			uint32_t anon10;
			phi6 = phi_in4;
			uint32_t phi_in7 = 1;
			do
			{
				uint32_t phi8 = phi_in7;
				anon9 = phi5 + (uint32_t)m.constprop.0(4195644, (__zext uint64_t)phi6, (__zext uint64_t)phi8);
				phi5 = anon9;
				anon10 = phi8 + 1;
				phi_in7 = anon10;
			}
			while (anon10 != 9);
			phi_in4 = phi6 + 1;
			phi5 = anon9;
		}
		while (phi6 != 8);
		uint64_t phi_in11 = phi_in2;
		uint64_t phi_in12 = 0;
		uint64_t phi_in13 = 1;
		uint32_t phi14 = 1;
		if (anon9 != 0)
		{
			uint64_t anon19;
			uint32_t anon27;
			do
			{
				uint32_t anon15;
				uint32_t anon16;
				uint32_t anon17;
				uint32_t anon18;
				printf((uint8_t*)0x400f81);
				do
				{
					anon15 = getchar();
					anon16 = anon15 - 65;
				}
				while (anon16 >= 8);
				do
				{
					anon17 = getchar();
					anon18 = anon17 - 49;
				}
				while (anon18 >= 8);
				anon19 = m.constprop.0(4195848, (__zext uint64_t)(anon15 - 64), (__zext uint64_t)(anon17 - 48));
			}
			while ((uint32_t)anon19 == 0);
			putchar(10);
			uint64_t phi20 = 65;
			uint64_t phi_in21 = 6297448;
			while (true)
			{
				putchar((uint32_t)phi20);
				uint64_t phi22 = phi_in21;
				anon23 = (uint8_t*)0x400f79;
				printf(anon23);
				putchar(10);
				uint64_t anon24 = phi_in21 + 40;
				if (anon24 != 6297768)
				{
					phi20 = phi20 + 1 & 0xffffffff;
					phi_in21 = anon24;
				}
				phi22 = phi22 + 4;
				break;
			}
			putchar(32);
			uint32_t phi25 = 1;
			do
			{
				anon26 = (uint8_t*)0x400f7d;
				printf(anon26);
				anon27 = phi25 + 1;
				phi25 = anon27;
			}
			while (anon27 != 9);
			putchar(10);
			phi_in11 = phi_in2;
			phi_in12 = 0;
			phi_in13 = 1;
			phi14 = 1;
		}
		uint32_t phi28 = phi14;
		uint64_t phi29 = phi_in11;
		uint64_t phi30 = phi_in12;
		uint64_t phi31 = 1;
		uint32_t phi32 = 1;
		phi_in13 = phi29;
		uint64_t phi_in33 = phi30;
		uint64_t anon34 = m.constprop.1(4195713, (__zext uint64_t)phi28, (__zext uint64_t)phi32);
		uint64_t anon36 = random();
		uint32_t anon35 = (uint32_t)anon34 + (uint32_t)anon36 + ((uint32_t)((anon36 & 0xffffffff) / 6) - (uint32_t)(anon36 << 32 >> 32 >> 31)) * 4294967290;
		uint32_t anon37 = (uint32_t)phi_in33;
		if (anon35 > anon37)
		{
			uint32_t anon38 = (uint32_t)phi31;
			*(uint32_t*)(arg1 - 72) = anon38;
			phi_in11 = phi_in13;
			phi_in12 = (__zext uint64_t)anon35;
			phi39 = anon35;
			phi40 = anon38;
		}
		else 
		{
			phi_in11 = phi_in13;
			phi_in12 = phi_in33;
			phi39 = anon37;
			phi40 = (uint32_t)phi31;
		}
		phi_in11 = phi_in11;
		phi_in12 = phi_in12;
		if (phi39 != 0)
		{
			if ((uint32_t)m.constprop.1(4196072, phi_in11 & 0xffffffff, 0) != 0)
			{
				uint32_t anon47;
				putchar(10);
				uint64_t phi41 = 65;
				uint64_t phi42 = 6297448;
				while (true)
				{
					uint64_t phi_in43 = phi42;
					putchar((uint32_t)phi41);
					uint64_t phi44 = phi_in43;
					printf(anon23);
					putchar(10);
					uint64_t anon45 = phi_in43 + 40;
					if (anon45 != 6297768)
					{
						phi41 = phi41 + 1 & 0xffffffff;
						phi42 = anon45;
					}
					phi44 = phi44 + 4;
					break;
				}
				putchar(32);
				uint32_t phi46 = 1;
				do
				{
					printf(anon26);
					anon47 = phi46 + 1;
					phi46 = anon47;
				}
				while (anon47 != 9);
				putchar(10);
			}
		}
		uint32_t anon48 = phi1 - 1;
		phi1 = anon48;
		uint64_t phi_in3 = phi_in11;
		uint32_t anon50 = (uint32_t)phi_in13;
		uint32_t anon49 = anon50 + 1;
		phi_in13 = (__zext uint64_t)anon49;
		phi14 = anon49;
		phi29 = phi_in11;
		phi30 = phi_in12;
		uint32_t anon51 = phi40 + 1;
		phi31 = (__zext uint64_t)anon51;
		phi28 = (uint32_t)phi_in13;
		phi32 = anon51;
		break;
	}
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x4004f0, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400ef0, (void(*)())0x400f60, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x6018d0;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196434);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
uint64_t m.constprop.0(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi8;
	uint32_t phi9;
	uint64_t phi10;
	uint64_t phi11;
	uint64_t anon13;
	uint64_t phi17;
	uint64_t anon2 = arg2 << 32 >> 32;
	uint64_t anon3 = arg1 << 32 >> 32;
	uint32_t* anon1 = (uint32_t*)((anon2 + (anon3 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi6;
		*anon1 = 1;
		uint64_t phi_in4 = 0;
		uint64_t phi5 = 1;
		do
		{
			phi6 = phi_in4;
			uint64_t phi7 = phi5;
			phi5 = phi7;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi6 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi6 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
			{
				phi8 = 1;
				phi9 = 1;
				phi10 = 1;
				phi11 = (((__zext uint64_t)*(uint32_t*)(phi6 + 6296832) << 33 >> 32) + anon2 + (((__zext uint64_t)*(uint32_t*)(phi6 + 6296896) << 33 >> 32) + anon3) * 10 << 2) + 6297408;
				uint64_t phi_in12 = phi8;
				phi5 = phi7;
				int62_t anon14 = (__sext int62_t)*(uint32_t*)(phi6 + 6296832);
				anon13 = phi11 + ((__zext uint64_t)(anon14 + (__sext int62_t)*(uint32_t*)(phi6 + 6296896) * 10) << 2);
				int64_t anon15 = (__sext int64_t)*(uint32_t*)(phi6 + 6296896);
				if (*(uint32_t*)(anon13 + ((__zext uint64_t)-anon14 << 2) + ((-anon15 << 2) - anon15 << 3)) == 1)
				{
					uint32_t anon21;
					uint64_t phi16 = phi_in12;
					int64_t anon18 = (__sext int64_t)(phi9 * *(uint32_t*)(phi6 + 6296832)) + anon2 + ((__sext int64_t)((uint32_t)phi_in12 * *(uint32_t*)(phi6 + 6296896)) + anon3) * 10 << 2;
					phi17 = anon18 + 6297408;
					uint64_t phi19 = anon18 + 6296960;
					do
					{
						*(uint32_t*)phi17 = 0;
						uint64_t anon20 = (__zext uint64_t)((uint32_t)phi7 + *(uint32_t*)phi19);
						phi5 = anon20;
						anon21 = (uint32_t)phi16 - 1;
						if (anon21 != 0)
						{
							phi7 = anon20;
							phi16 = (__zext uint64_t)anon21;
							int64_t anon22 = (__sext int64_t)-*(uint32_t*)(phi6 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi6 + 6296896) * 10 << 2;
							phi17 = phi17 + anon22;
							phi19 = phi19 + anon22;
						}
					}
					while (anon21 != 0);
				}
			}
			phi_in4 = phi6 + 4;
		}
		while (phi6 != 28);
		if ((uint32_t)phi5 == 1)
		{
			*anon1 = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi5 & 0xffffffff;
		}
	}
	uint32_t anon23 = (uint32_t)phi10 + 1;
	phi8 = (__zext uint64_t)anon23;
	phi9 = anon23;
	phi10 = phi10 + 1 & 0xffffffff;
	phi11 = anon13;
	if (*anon1 != 0)
	{
		return 0;
	}
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi8;
	uint32_t phi9;
	uint64_t phi10;
	uint64_t phi11;
	uint64_t anon13;
	uint64_t phi17;
	uint64_t anon2 = arg2 << 32 >> 32;
	uint64_t anon3 = arg1 << 32 >> 32;
	uint32_t* anon1 = (uint32_t*)((anon2 + (anon3 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi6;
		*anon1 = 4294967295;
		uint64_t phi_in4 = 0;
		uint64_t phi5 = 4294967295;
		do
		{
			phi6 = phi_in4;
			uint64_t phi7 = phi5;
			phi5 = phi7;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi6 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi6 + 6296896)) * 10 << 2) + 6297408) == 1)
			{
				phi8 = 1;
				phi9 = 1;
				phi10 = 1;
				phi11 = (((__zext uint64_t)*(uint32_t*)(phi6 + 6296832) << 33 >> 32) + anon2 + (((__zext uint64_t)*(uint32_t*)(phi6 + 6296896) << 33 >> 32) + anon3) * 10 << 2) + 6297408;
				uint64_t phi_in12 = phi8;
				phi5 = phi7;
				int62_t anon14 = (__sext int62_t)*(uint32_t*)(phi6 + 6296832);
				anon13 = phi11 + ((__zext uint64_t)(anon14 + (__sext int62_t)*(uint32_t*)(phi6 + 6296896) * 10) << 2);
				int64_t anon15 = (__sext int64_t)*(uint32_t*)(phi6 + 6296896);
				if (*(uint32_t*)(anon13 + ((__zext uint64_t)-anon14 << 2) + ((-anon15 << 2) - anon15 << 3)) == 255)
				{
					uint32_t anon21;
					uint64_t phi16 = phi_in12;
					int64_t anon18 = (__sext int64_t)(phi9 * *(uint32_t*)(phi6 + 6296832)) + anon2 + ((__sext int64_t)((uint32_t)phi_in12 * *(uint32_t*)(phi6 + 6296896)) + anon3) * 10 << 2;
					phi17 = anon18 + 6297408;
					uint64_t phi19 = anon18 + 6296960;
					do
					{
						*(uint32_t*)phi17 = 0;
						uint64_t anon20 = (__zext uint64_t)((uint32_t)phi7 + *(uint32_t*)phi19);
						phi5 = anon20;
						anon21 = (uint32_t)phi16 - 1;
						if (anon21 != 0)
						{
							phi7 = anon20;
							phi16 = (__zext uint64_t)anon21;
							int64_t anon22 = (__sext int64_t)-*(uint32_t*)(phi6 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi6 + 6296896) * 10 << 2;
							phi17 = phi17 + anon22;
							phi19 = phi19 + anon22;
						}
					}
					while (anon21 != 0);
				}
			}
			phi_in4 = phi6 + 4;
		}
		while (phi6 != 28);
		if ((uint32_t)phi5 == 4294967295)
		{
			*anon1 = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi5 & 0xffffffff;
		}
	}
	uint32_t anon23 = (uint32_t)phi10 + 1;
	phi8 = (__zext uint64_t)anon23;
	phi9 = anon23;
	phi10 = phi10 + 1 & 0xffffffff;
	phi11 = anon13;
	if (*anon1 != 0)
	{
		return 0;
	}
}
void m(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi1 = 0;
	uint32_t* anon2 = (uint32_t*)(((arg2 << 32 >> 32) + (arg1 << 32 >> 32 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon2 == 0)
	{
		do
		{
			phi1 = phi1 + 4;
		}
		while (phi1 != 28);
		*anon2 = 0;
		return;
	}
	else 
	{
		return;
	}
}
void l(uint64_t arg0)
{
	putchar(10);
	uint64_t phi1 = 65;
	uint64_t phi2 = 6297448;
	while (true)
	{
		uint32_t anon5;
		uint64_t phi3 = phi2;
		putchar((uint32_t)phi1);
		printf((uint8_t*)0x400f79);
		putchar(10);
		putchar(32);
		uint32_t phi4 = 1;
		do
		{
			printf((uint8_t*)0x400f7d);
			anon5 = phi4 + 1;
			phi4 = anon5;
		}
		while (anon5 != 9);
		phi1 = phi1 + 1 & 0xffffffff;
		uint64_t anon6 = phi3 + 40;
		phi2 = anon6;
		phi3 = phi3 + 4;
		break;
	}
	__indirect_jump(*(uint64_t*)0x601490);
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4198179);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x601288)(arg1 & 0xffffffff, arg2, arg3);
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
