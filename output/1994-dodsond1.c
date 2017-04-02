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
	uint32_t anon48;
	l(4195589);
	uint32_t phi_in1 = 60;
	do
	{
		uint32_t phi4;
		uint32_t anon7;
		uint8_t* anon20;
		uint8_t* anon24;
		uint64_t phi_in34;
		uint32_t phi_in35;
		uint32_t anon39;
		uint32_t phi_in2 = 1;
		uint32_t phi_in3 = 0;
		do
		{
			uint32_t anon8;
			phi4 = phi_in2;
			uint32_t phi_in5 = 1;
			do
			{
				uint32_t phi6 = phi_in5;
				anon7 = phi_in3 + (uint32_t)m.constprop.0(4195644, (__zext uint64_t)phi4, (__zext uint64_t)phi6);
				phi_in3 = anon7;
				anon8 = phi6 + 1;
				phi_in5 = anon8;
			}
			while (anon8 != 9);
			phi_in2 = phi4 + 1;
			phi_in3 = anon7;
		}
		while (phi4 != 8);
		uint64_t phi_in9 = 0;
		uint64_t phi_in10 = 1;
		uint32_t phi_in11 = 1;
		if (anon7 != 0)
		{
			uint64_t anon16;
			uint64_t anon22;
			uint32_t anon25;
			do
			{
				uint32_t anon12;
				uint32_t anon13;
				uint32_t anon14;
				uint32_t anon15;
				printf((uint8_t*)0x400f81);
				do
				{
					anon12 = getchar();
					anon13 = anon12 - 65;
				}
				while (anon13 >= 8);
				do
				{
					anon14 = getchar();
					anon15 = anon14 - 49;
				}
				while (anon15 >= 8);
				anon16 = m.constprop.0(4195848, (__zext uint64_t)(anon12 - 64), (__zext uint64_t)(anon14 - 48));
			}
			while ((uint32_t)anon16 == 0);
			putchar(10);
			uint64_t phi_in17 = 65;
			uint64_t phi_in18 = 6297448;
			do
			{
				uint64_t anon21;
				putchar((uint32_t)phi_in17);
				uint64_t phi_in19 = phi_in18;
				do
				{
					anon20 = (uint8_t*)0x400f79;
					printf(anon20);
					anon21 = phi_in18 + 28;
					if (anon21 != phi_in19)
					{
						phi_in19 = phi_in19 + 4;
					}
				}
				while (anon21 != phi_in19);
				putchar(10);
				anon22 = phi_in18 + 40;
				if (anon22 != 6297768)
				{
					phi_in17 = phi_in17 + 1 & 0xffffffff;
					phi_in18 = anon22;
				}
			}
			while (anon22 != 6297768);
			putchar(32);
			uint32_t phi_in23 = 1;
			do
			{
				anon24 = (uint8_t*)0x400f7d;
				printf(anon24);
				anon25 = phi_in23 + 1;
				phi_in23 = anon25;
			}
			while (anon25 != 9);
			putchar(10);
			phi_in9 = 0;
			phi_in10 = 1;
			phi_in11 = 1;
		}
		do
		{
			uint32_t phi37;
			uint64_t phi26 = phi_in10;
			uint64_t phi_in27 = 1;
			uint32_t phi_in28 = 1;
			do
			{
				uint32_t phi_in36;
				uint64_t anon29 = m.constprop.1(4195713, (__zext uint64_t)phi_in11, (__zext uint64_t)phi_in28);
				uint64_t anon31 = random();
				uint32_t anon30 = (uint32_t)anon29 + (uint32_t)anon31 + ((uint32_t)((anon31 & 0xffffffff) / 6) - (uint32_t)(anon31 << 32 >> 32 >> 31)) * 4294967290;
				uint32_t anon32 = (uint32_t)phi_in9;
				if (anon30 > anon32)
				{
					uint32_t anon33 = (uint32_t)phi_in27;
					*(uint32_t*)(arg1 - 72) = anon33;
					phi_in34 = phi26;
					phi_in9 = (__zext uint64_t)anon30;
					phi_in35 = anon30;
					phi_in36 = anon33;
				}
				else 
				{
					phi_in35 = anon32;
					phi_in36 = (uint32_t)phi_in27;
				}
				phi37 = phi_in36;
				if (phi37 != 8)
				{
					uint32_t anon38 = phi37 + 1;
					phi_in27 = (__zext uint64_t)anon38;
					phi_in11 = (uint32_t)phi26;
					phi_in28 = anon38;
				}
			}
			while (phi37 != 8);
			anon39 = (uint32_t)phi26;
			if (anon39 != 8)
			{
				uint32_t anon40 = anon39 + 1;
				phi_in10 = (__zext uint64_t)anon40;
				phi_in11 = anon40;
			}
		}
		while (anon39 != 8);
		if (phi_in35 != 0)
		{
			if ((uint32_t)m.constprop.1(4196072, phi_in34 & 0xffffffff, 0) != 0)
			{
				uint64_t anon45;
				uint32_t anon47;
				putchar(10);
				uint64_t phi_in41 = 65;
				uint64_t phi_in42 = 6297448;
				do
				{
					uint64_t anon44;
					putchar((uint32_t)phi_in41);
					uint64_t phi_in43 = phi_in42;
					do
					{
						printf(anon20);
						anon44 = phi_in42 + 28;
						if (anon44 != phi_in43)
						{
							phi_in43 = phi_in43 + 4;
						}
					}
					while (anon44 != phi_in43);
					putchar(10);
					anon45 = phi_in42 + 40;
					if (anon45 != 6297768)
					{
						phi_in41 = phi_in41 + 1 & 0xffffffff;
						phi_in42 = anon45;
					}
				}
				while (anon45 != 6297768);
				putchar(32);
				uint32_t phi_in46 = 1;
				do
				{
					printf(anon24);
					anon47 = phi_in46 + 1;
					phi_in46 = anon47;
				}
				while (anon47 != 9);
				putchar(10);
			}
		}
		anon48 = phi_in1 - 1;
		phi_in1 = anon48;
	}
	while (anon48 != 0);
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
	uint64_t phi_in15;
	uint64_t anon2 = arg2 << 32 >> 32;
	uint64_t anon3 = arg1 << 32 >> 32;
	uint32_t* anon1 = (uint32_t*)((anon2 + (anon3 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi_in6;
		*anon1 = 1;
		uint64_t phi_in4 = 0;
		uint64_t phi_in5 = 1;
		do
		{
			phi_in6 = phi_in5;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi_in4 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi_in4 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
			{
				uint64_t phi_in7 = 1;
				uint32_t phi_in8 = 1;
				uint64_t phi_in9 = 1;
				uint64_t phi_in10 = (((__zext uint64_t)*(uint32_t*)(phi_in4 + 6296832) << 33 >> 32) + anon2 + (((__zext uint64_t)*(uint32_t*)(phi_in4 + 6296896) << 33 >> 32) + anon3) * 10 << 2) + 6297408;
				while (true)
				{
					phi_in6 = phi_in5;
					int62_t anon12 = (__sext int62_t)*(uint32_t*)(phi_in4 + 6296832);
					uint64_t anon11 = phi_in10 + ((__zext uint64_t)(anon12 + (__sext int62_t)*(uint32_t*)(phi_in4 + 6296896) * 10) << 2);
					int64_t anon13 = (__sext int64_t)*(uint32_t*)(phi_in4 + 6296896);
					if (!(*(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 255 || *(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 1))
					{
						break;
					}
					if (*(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 1)
					{
						uint32_t anon19;
						uint64_t phi_in14 = phi_in5;
						int64_t anon16 = (__sext int64_t)(phi_in8 * *(uint32_t*)(phi_in4 + 6296832)) + anon2 + ((__sext int64_t)((uint32_t)phi_in7 * *(uint32_t*)(phi_in4 + 6296896)) + anon3) * 10 << 2;
						phi_in15 = anon16 + 6297408;
						uint64_t phi_in17 = anon16 + 6296960;
						do
						{
							*(uint32_t*)phi_in15 = 0;
							uint64_t anon18 = (__zext uint64_t)((uint32_t)phi_in14 + *(uint32_t*)phi_in17);
							phi_in6 = anon18;
							anon19 = (uint32_t)phi_in7 - 1;
							if (anon19 != 0)
							{
								phi_in14 = anon18;
								phi_in7 = (__zext uint64_t)anon19;
								int64_t anon20 = (__sext int64_t)-*(uint32_t*)(phi_in4 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi_in4 + 6296896) * 10 << 2;
								phi_in15 = phi_in15 + anon20;
								phi_in17 = phi_in17 + anon20;
							}
						}
						while (anon19 != 0);
						break;
					}
					if (*(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 255)
					{
						uint32_t anon21 = (uint32_t)phi_in9 + 1;
						phi_in7 = (__zext uint64_t)anon21;
						phi_in8 = anon21;
						phi_in9 = phi_in9 + 1 & 0xffffffff;
						phi_in10 = anon11;
					}
				}
			}
			phi_in4 = phi_in4 + 4;
			phi_in5 = phi_in6;
		}
		while (phi_in4 != 28);
		if ((uint32_t)phi_in6 == 1)
		{
			*anon1 = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi_in6 & 0xffffffff;
		}
	}
	else 
	{
		return 0;
	}
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi_in15;
	uint64_t anon2 = arg2 << 32 >> 32;
	uint64_t anon3 = arg1 << 32 >> 32;
	uint32_t* anon1 = (uint32_t*)((anon2 + (anon3 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi_in6;
		*anon1 = 4294967295;
		uint64_t phi_in4 = 0;
		uint64_t phi_in5 = 4294967295;
		do
		{
			phi_in6 = phi_in5;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi_in4 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi_in4 + 6296896)) * 10 << 2) + 6297408) == 1)
			{
				uint64_t phi_in7 = 1;
				uint32_t phi_in8 = 1;
				uint64_t phi_in9 = 1;
				uint64_t phi_in10 = (((__zext uint64_t)*(uint32_t*)(phi_in4 + 6296832) << 33 >> 32) + anon2 + (((__zext uint64_t)*(uint32_t*)(phi_in4 + 6296896) << 33 >> 32) + anon3) * 10 << 2) + 6297408;
				while (true)
				{
					phi_in6 = phi_in5;
					int62_t anon12 = (__sext int62_t)*(uint32_t*)(phi_in4 + 6296832);
					uint64_t anon11 = phi_in10 + ((__zext uint64_t)(anon12 + (__sext int62_t)*(uint32_t*)(phi_in4 + 6296896) * 10) << 2);
					int64_t anon13 = (__sext int64_t)*(uint32_t*)(phi_in4 + 6296896);
					if (!(*(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 1 || *(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 255))
					{
						break;
					}
					if (*(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 255)
					{
						uint32_t anon19;
						uint64_t phi_in14 = phi_in5;
						int64_t anon16 = (__sext int64_t)(phi_in8 * *(uint32_t*)(phi_in4 + 6296832)) + anon2 + ((__sext int64_t)((uint32_t)phi_in7 * *(uint32_t*)(phi_in4 + 6296896)) + anon3) * 10 << 2;
						phi_in15 = anon16 + 6297408;
						uint64_t phi_in17 = anon16 + 6296960;
						do
						{
							*(uint32_t*)phi_in15 = 0;
							uint64_t anon18 = (__zext uint64_t)((uint32_t)phi_in14 + *(uint32_t*)phi_in17);
							phi_in6 = anon18;
							anon19 = (uint32_t)phi_in7 - 1;
							if (anon19 != 0)
							{
								phi_in14 = anon18;
								phi_in7 = (__zext uint64_t)anon19;
								int64_t anon20 = (__sext int64_t)-*(uint32_t*)(phi_in4 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi_in4 + 6296896) * 10 << 2;
								phi_in15 = phi_in15 + anon20;
								phi_in17 = phi_in17 + anon20;
							}
						}
						while (anon19 != 0);
						break;
					}
					if (*(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 1)
					{
						uint32_t anon21 = (uint32_t)phi_in9 + 1;
						phi_in7 = (__zext uint64_t)anon21;
						phi_in8 = anon21;
						phi_in9 = phi_in9 + 1 & 0xffffffff;
						phi_in10 = anon11;
					}
				}
			}
			phi_in4 = phi_in4 + 4;
			phi_in5 = phi_in6;
		}
		while (phi_in4 != 28);
		if ((uint32_t)phi_in6 == 4294967295)
		{
			*anon1 = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi_in6 & 0xffffffff;
		}
	}
	else 
	{
		return 0;
	}
}
void m(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi_in1 = 0;
	uint32_t* anon2 = (uint32_t*)(((arg2 << 32 >> 32) + (arg1 << 32 >> 32 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon2 == 0)
	{
		do
		{
			phi_in1 = phi_in1 + 4;
		}
		while (phi_in1 != 28);
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
	uint64_t anon5;
	uint32_t anon7;
	putchar(10);
	uint64_t phi_in1 = 65;
	uint64_t phi_in2 = 6297448;
	do
	{
		uint64_t anon4;
		putchar((uint32_t)phi_in1);
		uint64_t phi_in3 = phi_in2;
		do
		{
			printf((uint8_t*)0x400f79);
			anon4 = phi_in2 + 28;
			if (phi_in3 != anon4)
			{
				phi_in3 = phi_in3 + 4;
			}
		}
		while (phi_in3 != anon4);
		putchar(10);
		anon5 = phi_in2 + 40;
		if (anon5 != 6297768)
		{
			phi_in1 = phi_in1 + 1 & 0xffffffff;
			phi_in2 = anon5;
		}
	}
	while (anon5 != 6297768);
	putchar(32);
	uint32_t phi_in6 = 1;
	do
	{
		printf((uint8_t*)0x400f7d);
		anon7 = phi_in6 + 1;
		phi_in6 = anon7;
	}
	while (anon7 != 9);
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
