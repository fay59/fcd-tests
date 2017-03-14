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
	uint32_t anon58;
	l(4195589);
	uint32_t phi_in1 = 60;
	do
	{
		uint32_t phi7;
		uint32_t anon13;
		uint8_t* anon26;
		uint8_t* anon30;
		uint64_t phi39;
		uint32_t phi43;
		uint32_t anon46;
		uint32_t phi2 = phi_in1;
		uint64_t phi3 = phi_in4;
		uint32_t phi_in5 = 1;
		uint32_t phi6 = 0;
		do
		{
			uint32_t anon14;
			phi7 = phi_in5;
			uint32_t phi_in8 = phi6;
			uint32_t phi_in9 = 1;
			do
			{
				uint32_t phi10 = phi_in8;
				uint32_t phi11 = phi_in9;
				uint64_t anon12 = m.constprop.0(4195644, (__zext uint64_t)phi7, (__zext uint64_t)phi11);
				anon13 = phi10 + (uint32_t)anon12;
				phi_in8 = anon13;
				anon14 = phi11 + 1;
				phi_in9 = anon14;
			}
			while (anon14 != 9);
			phi_in5 = phi7 + 1;
			phi6 = anon13;
		}
		while (phi7 != 8);
		uint64_t phi15 = 0;
		uint64_t phi_in16 = 1;
		uint32_t phi17 = 1;
		if (anon13 != 0)
		{
			uint64_t anon20;
			uint64_t anon27;
			uint32_t anon31;
			do
			{
				uint32_t anon18;
				uint32_t anon19;
				printf((uint8_t*)0x400f81);
				do
				{
					anon18 = getchar();
				}
				while (anon18 - 65 >= 8);
				do
				{
					anon19 = getchar();
				}
				while (anon19 - 49 >= 8);
				anon20 = m.constprop.0(4195848, (__zext uint64_t)(anon18 - 64), (__zext uint64_t)(anon19 - 48));
			}
			while ((uint32_t)anon20 == 0);
			putchar(10);
			uint64_t phi21 = 65;
			uint64_t phi_in22 = 6297448;
			do
			{
				uint64_t phi25;
				uint64_t phi23 = phi_in22;
				putchar((uint32_t)phi21);
				uint64_t phi_in24 = phi23;
				do
				{
					phi25 = phi_in24;
					anon26 = (uint8_t*)0x400f79;
					printf(anon26);
					phi_in24 = phi25 + 4;
				}
				while (phi23 + 28 != phi25);
				putchar(10);
				phi21 = phi21 + 1 & 0xffffffff;
				anon27 = phi23 + 40;
				phi_in22 = anon27;
			}
			while (anon27 != 6297768);
			putchar(32);
			uint32_t phi_in28 = 1;
			do
			{
				uint32_t phi29 = phi_in28;
				anon30 = (uint8_t*)0x400f7d;
				printf(anon30);
				anon31 = phi29 + 1;
				phi_in28 = anon31;
			}
			while (anon31 != 9);
			putchar(10);
			phi15 = 0;
			phi_in16 = 1;
			phi17 = 1;
		}
		do
		{
			uint64_t phi40;
			uint64_t phi_in32 = phi3;
			uint64_t phi_in33 = phi15;
			uint64_t phi34 = phi_in16;
			uint32_t phi35 = phi17;
			uint64_t phi36 = phi_in32;
			uint64_t phi37 = phi_in33;
			uint32_t phi_in38 = 1;
			do
			{
				phi39 = phi36;
				phi40 = phi37;
				*(uint32_t*)(arg1 - 72) = phi_in38;
				uint64_t anon41 = m.constprop.1(4195713, (__zext uint64_t)phi35, (__zext uint64_t)*(uint32_t*)(arg1 - 72));
				uint64_t anon42 = random();
				uint32_t anon44 = (uint32_t)phi40;
				phi43 = anon44;
				uint32_t anon45 = (uint32_t)anon41 + (uint32_t)anon42 + ((uint32_t)((anon42 & 0xffffffff) / 6) - (uint32_t)(anon42 << 32 >> 32 >> 31)) * 4294967290;
				if (anon45 > anon44)
				{
					phi39 = phi34;
					phi40 = (__zext uint64_t)anon45;
					phi43 = anon45;
				}
				phi36 = phi39;
				phi37 = phi40;
				phi_in38 = *(uint32_t*)(arg1 - 72) + 1;
				anon46 = (uint32_t)phi34;
				phi35 = anon46;
			}
			while (*(uint32_t*)(arg1 - 72) != 8);
			phi3 = phi39;
			phi15 = phi40;
			uint32_t anon47 = anon46 + 1;
			phi_in16 = (__zext uint64_t)anon47;
			phi17 = anon47;
		}
		while (anon46 != 8);
		if (phi43 != 0)
		{
			uint64_t anon48 = m.constprop.1(4196072, phi39 & 0xffffffff, 0);
			if ((uint32_t)anon48 != 0)
			{
				uint64_t anon54;
				uint32_t anon57;
				putchar(10);
				uint64_t phi49 = 65;
				uint64_t phi_in50 = 6297448;
				do
				{
					uint64_t phi53;
					uint64_t phi51 = phi_in50;
					putchar((uint32_t)phi49);
					uint64_t phi_in52 = phi51;
					do
					{
						phi53 = phi_in52;
						printf(anon26);
						phi_in52 = phi53 + 4;
					}
					while (phi51 + 28 != phi53);
					putchar(10);
					phi49 = phi49 + 1 & 0xffffffff;
					anon54 = phi51 + 40;
					phi_in50 = anon54;
				}
				while (anon54 != 6297768);
				putchar(32);
				uint32_t phi_in55 = 1;
				do
				{
					uint32_t phi56 = phi_in55;
					printf(anon30);
					anon57 = phi56 + 1;
					phi_in55 = anon57;
				}
				while (anon57 != 9);
				putchar(10);
			}
		}
		anon58 = phi2 - 1;
		phi_in1 = anon58;
		uint64_t phi_in4 = phi39;
	}
	while (anon58 != 0);
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
	uint32_t phi11;
	uint64_t phi_in12;
	uint64_t phi13;
	uint64_t phi14;
	uint64_t phi16;
	uint64_t anon17;
	uint64_t phi20;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi9;
		uint32_t phi10;
		*anon1 = 1;
		uint32_t phi5 = 1;
		uint32_t phi6 = 1;
		uint64_t phi_in7 = 0;
		do
		{
			uint32_t phi_in8 = phi6;
			phi9 = phi_in7;
			phi10 = phi5;
			phi6 = phi_in8;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi9 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi9 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
			{
				phi11 = 1;
				phi_in12 = 1;
				phi13 = 1;
				phi14 = (((__zext uint64_t)*(uint32_t*)(phi9 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi9 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
				uint32_t phi_in15 = phi11;
				phi16 = phi_in12;
				phi10 = phi5;
				phi6 = phi_in8;
				int64_t anon18 = (__sext int64_t)*(uint32_t*)(phi9 + 6296832);
				int64_t anon19 = (__sext int64_t)*(uint32_t*)(phi9 + 6296896);
				anon17 = phi14 + (anon18 + anon19 * 10 << 2);
				if (*(uint32_t*)(anon17 + (-anon18 << 2) + ((-anon19 << 2) - anon19 << 3)) == 1)
				{
					uint32_t anon26;
					int64_t anon21 = (__sext int64_t)((uint32_t)phi13 * *(uint32_t*)(phi9 + 6296832)) + anon3 + ((__sext int64_t)((uint32_t)phi16 * *(uint32_t*)(phi9 + 6296896)) + anon4) * 10 << 2;
					phi20 = anon21 + 6297408;
					uint32_t phi22 = phi_in8;
					uint64_t phi23 = anon21 + 6296960;
					do
					{
						uint32_t phi24 = phi_in15;
						*(uint32_t*)phi20 = 0;
						uint32_t anon25 = phi22 + *(uint32_t*)phi23;
						phi10 = anon25;
						phi6 = anon25;
						anon26 = phi24 - 1;
						phi_in15 = anon26;
						int64_t anon27 = (__sext int64_t)-*(uint32_t*)(phi9 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi9 + 6296896) * 10 << 2;
						phi20 = phi20 + anon27;
						phi22 = anon25;
						phi23 = phi23 + anon27;
					}
					while (anon26 != 0);
				}
			}
			phi5 = phi10;
			phi_in7 = phi9 + 4;
		}
		while (phi9 != 28);
		if (phi10 == 1)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return (__zext uint64_t)phi10;
		}
	}
	else 
	{
		return 0;
	}
	phi11 = (uint32_t)phi16 + 1;
	uint64_t anon28 = phi16 + 1;
	phi_in12 = anon28 & 0xffffffff;
	phi13 = anon28;
	phi14 = anon17;
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi_in11;
	uint64_t phi_in12;
	uint64_t phi13;
	uint64_t phi14;
	uint64_t phi15;
	uint64_t anon16;
	uint64_t phi19;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi9;
		*anon1 = 4294967295;
		uint32_t phi5 = 4294967295;
		uint32_t phi6 = 4294967295;
		uint64_t phi_in7 = 0;
		do
		{
			uint32_t phi_in8 = phi6;
			phi9 = phi_in7;
			phi5 = phi5;
			uint32_t phi10 = phi_in8;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi9 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi9 + 6296896)) * 10 << 2) + 6297408) == 1)
			{
				phi_in11 = 1;
				phi_in12 = 1;
				phi13 = 1;
				phi14 = (((__zext uint64_t)*(uint32_t*)(phi9 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi9 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
				phi15 = phi_in12;
				phi5 = phi5;
				phi10 = phi_in8;
				int64_t anon17 = (__sext int64_t)*(uint32_t*)(phi9 + 6296832);
				int64_t anon18 = (__sext int64_t)*(uint32_t*)(phi9 + 6296896);
				anon16 = phi14 + (anon17 + anon18 * 10 << 2);
				if (*(uint32_t*)(anon16 + (-anon17 << 2) + ((-anon18 << 2) - anon18 << 3)) == 255)
				{
					uint32_t anon25;
					int64_t anon20 = (__sext int64_t)((uint32_t)phi13 * *(uint32_t*)(phi9 + 6296832)) + anon3 + ((__sext int64_t)((uint32_t)phi15 * *(uint32_t*)(phi9 + 6296896)) + anon4) * 10 << 2;
					phi19 = anon20 + 6297408;
					uint32_t phi21 = phi_in8;
					uint64_t phi22 = anon20 + 6296960;
					do
					{
						uint32_t phi23 = phi_in11;
						*(uint32_t*)phi19 = 0;
						uint32_t anon24 = phi21 + *(uint32_t*)phi22;
						phi5 = anon24;
						phi10 = anon24;
						anon25 = phi23 - 1;
						phi_in11 = anon25;
						int64_t anon26 = (__sext int64_t)-*(uint32_t*)(phi9 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi9 + 6296896) * 10 << 2;
						phi19 = phi19 + anon26;
						phi21 = anon24;
						phi22 = phi22 + anon26;
					}
					while (anon25 != 0);
				}
			}
			phi6 = phi10;
			phi_in7 = phi9 + 4;
		}
		while (phi9 != 28);
		if (phi5 == 4294967295)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return (__zext uint64_t)phi5;
		}
	}
	else 
	{
		return 0;
	}
	phi_in11 = (uint32_t)phi15 + 1;
	uint64_t anon27 = phi15 + 1;
	phi_in12 = anon27 & 0xffffffff;
	phi13 = anon27;
	phi14 = anon16;
}
void m(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi_in1 = 0;
	uint32_t* anon2 = (uint32_t*)(((arg2 << 32 >> 32) + (arg1 << 32 >> 32 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon2 == 0)
	{
		uint64_t phi3;
		do
		{
			phi3 = phi_in1;
			phi_in1 = phi3 + 4;
		}
		while (phi3 != 28);
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
	uint64_t anon6;
	uint32_t anon9;
	putchar(10);
	uint64_t phi1 = 65;
	uint64_t phi_in2 = 6297448;
	do
	{
		uint64_t phi5;
		uint64_t phi3 = phi_in2;
		putchar((uint32_t)phi1);
		uint64_t phi_in4 = phi3;
		do
		{
			phi5 = phi_in4;
			printf((uint8_t*)0x400f79);
			phi_in4 = phi5 + 4;
		}
		while (phi5 != phi3 + 28);
		putchar(10);
		phi1 = phi1 + 1 & 0xffffffff;
		anon6 = phi3 + 40;
		phi_in2 = anon6;
	}
	while (anon6 != 6297768);
	putchar(32);
	uint32_t phi_in7 = 1;
	do
	{
		uint32_t phi8 = phi_in7;
		printf((uint8_t*)0x400f7d);
		anon9 = phi8 + 1;
		phi_in7 = anon9;
	}
	while (anon9 != 9);
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
