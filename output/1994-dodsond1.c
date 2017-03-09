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
	uint32_t anon61;
	l(4195589);
	uint32_t phi_in1 = 60;
	do
	{
		uint32_t phi7;
		uint32_t anon13;
		uint8_t* anon27;
		uint8_t* anon31;
		uint64_t anon44;
		uint32_t anon45;
		uint32_t anon46;
		uint32_t anon49;
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
		uint64_t phi15 = phi3;
		uint64_t phi_in16 = 0;
		uint64_t phi_in17 = 1;
		uint32_t phi_in18 = 1;
		if (anon13 != 0)
		{
			uint64_t anon21;
			uint64_t anon28;
			uint32_t anon32;
			do
			{
				uint32_t anon19;
				uint32_t anon20;
				printf((uint8_t*)0x400f81);
				do
				{
					anon19 = getchar();
				}
				while (((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) != 0);
				do
				{
					anon20 = getchar();
				}
				while (((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) != 0);
				anon21 = m.constprop.0(4195848, (__zext uint64_t)(anon19 - 64), (__zext uint64_t)(anon20 - 48));
			}
			while ((uint32_t)anon21 == 0);
			putchar(10);
			uint64_t phi22 = 65;
			uint64_t phi_in23 = 6297448;
			do
			{
				uint64_t phi26;
				uint64_t phi24 = phi_in23;
				putchar((uint32_t)phi22);
				uint64_t phi_in25 = phi24;
				do
				{
					phi26 = phi_in25;
					anon27 = (uint8_t*)0x400f79;
					printf(anon27);
					phi_in25 = phi26 + 4;
				}
				while (phi24 + 28 != phi26);
				putchar(10);
				phi22 = phi22 + 1 & 0xffffffff;
				anon28 = phi24 + 40;
				phi_in23 = anon28;
			}
			while (anon28 != 6297768);
			putchar(32);
			uint32_t phi_in29 = 1;
			do
			{
				uint32_t phi30 = phi_in29;
				anon31 = (uint8_t*)0x400f7d;
				printf(anon31);
				anon32 = phi30 + 1;
				phi_in29 = anon32;
			}
			while (anon32 != 9);
			putchar(10);
			phi15 = phi3;
			phi_in16 = 0;
			phi_in17 = 1;
			phi_in18 = 1;
		}
		do
		{
			uint32_t phi39;
			uint64_t anon47;
			uint64_t phi_in33 = phi15;
			uint64_t phi34 = phi_in17;
			uint32_t phi_in35 = 1;
			uint64_t phi_in36 = 1;
			do
			{
				uint64_t phi37 = phi_in33;
				uint64_t phi38 = phi_in16;
				phi39 = phi_in35;
				uint32_t phi40 = phi_in18;
				uint64_t phi41 = phi_in36;
				uint64_t anon42 = m.constprop.1(4195713, (__zext uint64_t)phi40, phi41);
				uint64_t anon43 = random();
				anon45 = (uint32_t)anon42 + (uint32_t)anon43 + ((uint32_t)((anon43 & 0xffffffff) / 6) - (uint32_t)(anon43 << 32 >> 32 >> 31)) * 4294967290;
				anon46 = (uint32_t)phi38;
				anon44 = anon45 > anon46 ? phi34 : phi37;
				phi_in33 = anon44;
				anon47 = anon45 > anon46 ? (__zext uint64_t)anon45 : phi38;
				phi_in16 = anon47;
				uint32_t anon48 = phi39 + 1;
				phi_in35 = anon48;
				anon49 = (uint32_t)phi34;
				phi_in18 = anon49;
				phi_in36 = (__zext uint64_t)anon48;
			}
			while (phi39 != 8);
			phi15 = anon44;
			phi_in16 = anon47;
			uint32_t anon50 = anon49 + 1;
			phi_in17 = (__zext uint64_t)anon50;
			phi_in18 = anon50;
		}
		while (anon49 != 8);
		if ((anon45 > anon46 ? anon45 : anon46) != 0)
		{
			uint64_t anon51 = m.constprop.1(4196072, anon44 & 0xffffffff, (__zext uint64_t)*(uint32_t*)(arg1 - 72));
			if ((uint32_t)anon51 != 0)
			{
				uint64_t anon57;
				uint32_t anon60;
				putchar(10);
				uint64_t phi52 = 65;
				uint64_t phi_in53 = 6297448;
				do
				{
					uint64_t phi56;
					uint64_t phi54 = phi_in53;
					putchar((uint32_t)phi52);
					uint64_t phi_in55 = phi54;
					do
					{
						phi56 = phi_in55;
						printf(anon27);
						phi_in55 = phi56 + 4;
					}
					while (phi54 + 28 != phi56);
					putchar(10);
					phi52 = phi52 + 1 & 0xffffffff;
					anon57 = phi54 + 40;
					phi_in53 = anon57;
				}
				while (anon57 != 6297768);
				putchar(32);
				uint32_t phi_in58 = 1;
				do
				{
					uint32_t phi59 = phi_in58;
					printf(anon31);
					anon60 = phi59 + 1;
					phi_in58 = anon60;
				}
				while (anon60 != 9);
				putchar(10);
			}
		}
		anon61 = phi2 - 1;
		phi_in1 = anon61;
		uint64_t phi_in4 = anon44;
	}
	while (anon61 != 0);
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
	uint32_t phi_in11;
	uint64_t phi12;
	uint64_t phi13;
	uint64_t anon14;
	uint64_t phi17;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi8;
		uint32_t phi9;
		*anon1 = 1;
		uint32_t phi5 = 1;
		uint32_t phi_in6 = 1;
		uint64_t phi_in7 = 0;
		do
		{
			phi8 = phi_in7;
			phi9 = phi5;
			uint32_t phi10 = phi_in6;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi8 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi8 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
			{
				phi_in11 = 1;
				phi12 = 1;
				phi13 = (((__zext uint64_t)*(uint32_t*)(phi8 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi8 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
				phi9 = phi5;
				phi10 = phi_in6;
				int64_t anon15 = (__sext int64_t)*(uint32_t*)(phi8 + 6296832);
				int64_t anon16 = (__sext int64_t)*(uint32_t*)(phi8 + 6296896);
				anon14 = phi13 + (anon15 + anon16 * 10 << 2);
				if (*(uint32_t*)(anon14 + (-anon15 << 2) + ((-anon16 << 2) - anon16 << 3)) == 1)
				{
					uint32_t anon24;
					uint32_t anon19 = (uint32_t)phi12;
					int64_t anon18 = (__sext int64_t)(*(uint32_t*)(phi8 + 6296832) * anon19) + anon3 + ((__sext int64_t)(*(uint32_t*)(phi8 + 6296896) * anon19) + anon4) * 10 << 2;
					phi17 = anon18 + 6297408;
					uint32_t phi20 = phi_in6;
					uint64_t phi21 = anon18 + 6296960;
					do
					{
						uint32_t phi22 = phi_in11;
						*(uint32_t*)phi17 = 0;
						uint32_t anon23 = phi20 + *(uint32_t*)phi21;
						phi9 = anon23;
						phi10 = anon23;
						anon24 = phi22 - 1;
						phi_in11 = anon24;
						int64_t anon25 = (__sext int64_t)-*(uint32_t*)(phi8 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi8 + 6296896) * 10 << 2;
						phi17 = phi17 + anon25;
						phi20 = anon23;
						phi21 = phi21 + anon25;
					}
					while (anon24 != 0);
				}
			}
			phi5 = phi9;
			phi_in6 = phi10;
			phi_in7 = phi8 + 4;
		}
		while (phi8 != 28);
		if (phi9 == 1)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return (__zext uint64_t)phi9;
		}
	}
	else 
	{
		return 0;
	}
	phi_in11 = (uint32_t)phi12 + 1;
	phi12 = phi12 + 1 & 0xffffffff;
	phi13 = anon14;
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi_in11;
	uint64_t phi12;
	uint64_t phi13;
	uint64_t anon14;
	uint64_t phi17;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi9;
		uint32_t phi10;
		*anon1 = 4294967295;
		uint32_t phi5 = 4294967295;
		uint32_t phi6 = 4294967295;
		uint64_t phi_in7 = 0;
		do
		{
			uint32_t phi_in8 = phi6;
			phi9 = phi_in7;
			phi10 = phi5;
			phi6 = phi_in8;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi9 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi9 + 6296896)) * 10 << 2) + 6297408) == 1)
			{
				phi_in11 = 1;
				phi12 = 1;
				phi13 = (((__zext uint64_t)*(uint32_t*)(phi9 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi9 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
				phi10 = phi5;
				phi6 = phi_in8;
				int64_t anon15 = (__sext int64_t)*(uint32_t*)(phi9 + 6296832);
				int64_t anon16 = (__sext int64_t)*(uint32_t*)(phi9 + 6296896);
				anon14 = phi13 + (anon15 + anon16 * 10 << 2);
				if (*(uint32_t*)(anon14 + (-anon15 << 2) + ((-anon16 << 2) - anon16 << 3)) == 255)
				{
					uint32_t anon24;
					uint32_t anon19 = (uint32_t)phi12;
					int64_t anon18 = (__sext int64_t)(*(uint32_t*)(phi9 + 6296832) * anon19) + anon3 + ((__sext int64_t)(*(uint32_t*)(phi9 + 6296896) * anon19) + anon4) * 10 << 2;
					phi17 = anon18 + 6297408;
					uint32_t phi20 = phi_in8;
					uint64_t phi21 = anon18 + 6296960;
					do
					{
						uint32_t phi22 = phi_in11;
						*(uint32_t*)phi17 = 0;
						uint32_t anon23 = phi20 + *(uint32_t*)phi21;
						phi10 = anon23;
						phi6 = anon23;
						anon24 = phi22 - 1;
						phi_in11 = anon24;
						int64_t anon25 = (__sext int64_t)-*(uint32_t*)(phi9 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi9 + 6296896) * 10 << 2;
						phi17 = phi17 + anon25;
						phi20 = anon23;
						phi21 = phi21 + anon25;
					}
					while (anon24 != 0);
				}
			}
			phi5 = phi10;
			phi_in7 = phi9 + 4;
		}
		while (phi9 != 28);
		if (phi10 == 4294967295)
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
	phi_in11 = (uint32_t)phi12 + 1;
	phi12 = phi12 + 1 & 0xffffffff;
	phi13 = anon14;
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
