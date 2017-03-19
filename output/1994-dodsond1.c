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
	uint32_t phi_in1 = 60;
	while (true)
	{
		uint32_t phi7;
		uint32_t anon14;
		uint8_t* anon31;
		uint8_t* anon35;
		uint64_t phi_in56;
		uint64_t phi_in57;
		uint32_t phi_in58;
		uint32_t phi_in59;
		uint32_t phi2 = phi_in1;
		uint64_t phi3 = phi_in4;
		uint32_t phi_in5 = 1;
		uint32_t phi_in6 = 0;
		do
		{
			uint32_t anon15;
			phi7 = phi_in5;
			uint32_t phi8 = phi_in6;
			uint32_t phi_in9 = phi8;
			uint32_t phi_in10 = 1;
			do
			{
				uint32_t phi11 = phi_in9;
				uint32_t phi12 = phi_in10;
				uint64_t anon13 = m.constprop.0(4195644, (__zext uint64_t)phi7, (__zext uint64_t)phi12);
				anon14 = phi11 + (uint32_t)anon13;
				phi_in9 = anon14;
				anon15 = phi12 + 1;
				phi_in10 = anon15;
			}
			while (anon15 != 9);
			phi_in5 = phi7 + 1;
			phi_in6 = anon14;
		}
		while (phi7 != 8);
		uint64_t phi_in16 = phi3;
		uint64_t phi_in17 = 0;
		uint64_t phi_in18 = 1;
		uint32_t phi_in19 = 1;
		if (anon14 != 0)
		{
			uint64_t anon24;
			uint32_t anon36;
			do
			{
				uint32_t anon20;
				uint32_t anon21;
				uint32_t anon22;
				uint32_t anon23;
				printf((uint8_t*)0x400f81);
				do
				{
					anon20 = getchar();
					anon21 = anon20 - 65;
				}
				while (anon21 >= 8);
				do
				{
					anon22 = getchar();
					anon23 = anon22 - 49;
				}
				while (anon23 >= 8);
				anon24 = m.constprop.0(4195848, (__zext uint64_t)(anon20 - 64), (__zext uint64_t)(anon22 - 48));
			}
			while ((uint32_t)anon24 == 0);
			putchar(10);
			uint64_t phi_in25 = 65;
			uint64_t phi_in26 = 6297448;
			while (true)
			{
				uint64_t phi27 = phi_in25;
				uint64_t phi28 = phi_in26;
				putchar((uint32_t)phi27);
				uint64_t phi_in29 = phi28;
				uint64_t phi30 = phi_in29;
				anon31 = (uint8_t*)0x400f79;
				printf(anon31);
				putchar(10);
				uint64_t anon32 = phi28 + 40;
				if (anon32 != 6297768)
				{
					phi_in25 = phi27 + 1 & 0xffffffff;
					phi_in26 = anon32;
				}
				phi_in29 = phi30 + 4;
				break;
			}
			putchar(32);
			uint32_t phi_in33 = 1;
			do
			{
				uint32_t phi34 = phi_in33;
				anon35 = (uint8_t*)0x400f7d;
				printf(anon35);
				anon36 = phi34 + 1;
				phi_in33 = anon36;
			}
			while (anon36 != 9);
			putchar(10);
			phi_in16 = phi3;
			phi_in17 = 0;
			phi_in18 = 1;
			phi_in19 = 1;
		}
		uint64_t phi37 = phi_in16;
		uint64_t phi38 = phi_in17;
		uint64_t phi39 = phi_in18;
		uint32_t phi40 = phi_in19;
		uint64_t phi_in41 = phi37;
		uint64_t phi_in42 = phi38;
		uint64_t phi_in43 = 1;
		uint32_t phi_in44 = phi40;
		uint32_t phi_in45 = 1;
		uint64_t phi46 = phi_in41;
		uint64_t phi47 = phi_in42;
		uint64_t phi48 = phi_in43;
		uint32_t phi49 = phi_in44;
		uint32_t phi50 = phi_in45;
		uint64_t anon51 = m.constprop.1(4195713, (__zext uint64_t)phi49, (__zext uint64_t)phi50);
		uint64_t anon52 = random();
		uint32_t anon53 = (uint32_t)anon51 + (uint32_t)anon52 + ((uint32_t)((anon52 & 0xffffffff) / 6) - (uint32_t)(anon52 << 32 >> 32 >> 31)) * 4294967290;
		uint32_t anon54 = (uint32_t)phi47;
		if (anon53 > anon54)
		{
			uint32_t anon55 = (uint32_t)phi48;
			*(uint32_t*)(arg1 - 72) = anon55;
			phi_in56 = phi39;
			phi_in57 = (__zext uint64_t)anon53;
			phi_in58 = anon53;
			phi_in59 = anon55;
		}
		else 
		{
			phi_in56 = phi46;
			phi_in57 = phi47;
			phi_in58 = anon54;
			phi_in59 = (uint32_t)phi48;
		}
		uint64_t phi60 = phi_in56;
		uint64_t phi61 = phi_in57;
		uint32_t phi62 = phi_in58;
		uint32_t phi63 = phi_in59;
		if (phi62 != 0)
		{
			uint64_t anon64 = m.constprop.1(4196072, phi60 & 0xffffffff, 0);
			if ((uint32_t)anon64 != 0)
			{
				uint32_t anon74;
				putchar(10);
				uint64_t phi_in65 = 65;
				uint64_t phi_in66 = 6297448;
				while (true)
				{
					uint64_t phi67 = phi_in65;
					uint64_t phi68 = phi_in66;
					putchar((uint32_t)phi67);
					uint64_t phi_in69 = phi68;
					uint64_t phi70 = phi_in69;
					printf(anon31);
					putchar(10);
					uint64_t anon71 = phi68 + 40;
					if (anon71 != 6297768)
					{
						phi_in65 = phi67 + 1 & 0xffffffff;
						phi_in66 = anon71;
					}
					phi_in69 = phi70 + 4;
					break;
				}
				putchar(32);
				uint32_t phi_in72 = 1;
				do
				{
					uint32_t phi73 = phi_in72;
					printf(anon35);
					anon74 = phi73 + 1;
					phi_in72 = anon74;
				}
				while (anon74 != 9);
				putchar(10);
			}
		}
		uint32_t anon75 = phi2 - 1;
		phi_in1 = anon75;
		uint64_t phi_in4 = phi60;
		phi_in16 = phi60;
		phi_in17 = phi61;
		uint32_t anon77 = (uint32_t)phi39;
		uint32_t anon76 = anon77 + 1;
		phi_in18 = (__zext uint64_t)anon76;
		phi_in19 = anon76;
		phi_in41 = phi60;
		phi_in42 = phi61;
		uint32_t anon78 = phi63 + 1;
		phi_in43 = (__zext uint64_t)anon78;
		phi_in44 = (uint32_t)phi39;
		phi_in45 = anon78;
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
	uint64_t phi_in9;
	uint32_t phi_in10;
	uint64_t phi_in11;
	uint64_t phi_in12;
	uint64_t phi15;
	uint64_t anon17;
	uint64_t phi_in22;
	uint64_t anon2 = arg2 << 32 >> 32;
	uint64_t anon3 = arg1 << 32 >> 32;
	uint32_t* anon1 = (uint32_t*)((anon2 + (anon3 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi6;
		uint64_t phi32;
		*anon1 = 1;
		uint64_t phi_in4 = 0;
		uint64_t phi_in5 = 1;
		do
		{
			phi6 = phi_in4;
			uint64_t phi7 = phi_in5;
			uint64_t phi_in8 = phi7;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi6 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi6 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
			{
				phi_in9 = 1;
				phi_in10 = 1;
				phi_in11 = 1;
				phi_in12 = (((__zext uint64_t)*(uint32_t*)(phi6 + 6296832) << 33 >> 32) + anon2 + (((__zext uint64_t)*(uint32_t*)(phi6 + 6296896) << 33 >> 32) + anon3) * 10 << 2) + 6297408;
				uint64_t phi13 = phi_in9;
				uint32_t phi14 = phi_in10;
				phi15 = phi_in11;
				uint64_t phi16 = phi_in12;
				phi_in8 = phi7;
				int62_t anon18 = (__sext int62_t)*(uint32_t*)(phi6 + 6296832);
				anon17 = phi16 + ((__zext uint64_t)(anon18 + (__sext int62_t)*(uint32_t*)(phi6 + 6296896) * 10) << 2);
				int64_t anon19 = (__sext int64_t)*(uint32_t*)(phi6 + 6296896);
				if (*(uint32_t*)(anon17 + ((__zext uint64_t)-anon18 << 2) + ((-anon19 << 2) - anon19 << 3)) == 1)
				{
					uint32_t anon30;
					uint64_t phi_in20 = phi7;
					uint64_t phi_in21 = phi13;
					int64_t anon23 = (__sext int64_t)(phi14 * *(uint32_t*)(phi6 + 6296832)) + anon2 + ((__sext int64_t)((uint32_t)phi13 * *(uint32_t*)(phi6 + 6296896)) + anon3) * 10 << 2;
					phi_in22 = anon23 + 6297408;
					uint64_t phi_in24 = anon23 + 6296960;
					do
					{
						uint64_t phi25 = phi_in20;
						uint64_t phi26 = phi_in21;
						uint64_t phi27 = phi_in22;
						uint64_t phi28 = phi_in24;
						*(uint32_t*)phi27 = 0;
						uint64_t anon29 = (__zext uint64_t)((uint32_t)phi25 + *(uint32_t*)phi28);
						phi_in8 = anon29;
						anon30 = (uint32_t)phi26 - 1;
						if (anon30 != 0)
						{
							phi_in20 = anon29;
							phi_in21 = (__zext uint64_t)anon30;
							int64_t anon31 = (__sext int64_t)-*(uint32_t*)(phi6 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi6 + 6296896) * 10 << 2;
							phi_in22 = phi27 + anon31;
							phi_in24 = phi28 + anon31;
						}
					}
					while (anon30 != 0);
				}
			}
			phi32 = phi_in8;
			phi_in4 = phi6 + 4;
			phi_in5 = phi32;
		}
		while (phi6 != 28);
		if ((uint32_t)phi32 == 1)
		{
			*anon1 = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi32 & 0xffffffff;
		}
	}
	uint32_t anon33 = (uint32_t)phi15 + 1;
	phi_in9 = (__zext uint64_t)anon33;
	phi_in10 = anon33;
	phi_in11 = phi15 + 1 & 0xffffffff;
	phi_in12 = anon17;
	if (*anon1 != 0)
	{
		return 0;
	}
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi_in9;
	uint32_t phi_in10;
	uint64_t phi_in11;
	uint64_t phi_in12;
	uint64_t phi15;
	uint64_t anon17;
	uint64_t phi_in22;
	uint64_t anon2 = arg2 << 32 >> 32;
	uint64_t anon3 = arg1 << 32 >> 32;
	uint32_t* anon1 = (uint32_t*)((anon2 + (anon3 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi6;
		uint64_t phi32;
		*anon1 = 4294967295;
		uint64_t phi_in4 = 0;
		uint64_t phi_in5 = 4294967295;
		do
		{
			phi6 = phi_in4;
			uint64_t phi7 = phi_in5;
			uint64_t phi_in8 = phi7;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi6 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi6 + 6296896)) * 10 << 2) + 6297408) == 1)
			{
				phi_in9 = 1;
				phi_in10 = 1;
				phi_in11 = 1;
				phi_in12 = (((__zext uint64_t)*(uint32_t*)(phi6 + 6296832) << 33 >> 32) + anon2 + (((__zext uint64_t)*(uint32_t*)(phi6 + 6296896) << 33 >> 32) + anon3) * 10 << 2) + 6297408;
				uint64_t phi13 = phi_in9;
				uint32_t phi14 = phi_in10;
				phi15 = phi_in11;
				uint64_t phi16 = phi_in12;
				phi_in8 = phi7;
				int62_t anon18 = (__sext int62_t)*(uint32_t*)(phi6 + 6296832);
				anon17 = phi16 + ((__zext uint64_t)(anon18 + (__sext int62_t)*(uint32_t*)(phi6 + 6296896) * 10) << 2);
				int64_t anon19 = (__sext int64_t)*(uint32_t*)(phi6 + 6296896);
				if (*(uint32_t*)(anon17 + ((__zext uint64_t)-anon18 << 2) + ((-anon19 << 2) - anon19 << 3)) == 255)
				{
					uint32_t anon30;
					uint64_t phi_in20 = phi7;
					uint64_t phi_in21 = phi13;
					int64_t anon23 = (__sext int64_t)(phi14 * *(uint32_t*)(phi6 + 6296832)) + anon2 + ((__sext int64_t)((uint32_t)phi13 * *(uint32_t*)(phi6 + 6296896)) + anon3) * 10 << 2;
					phi_in22 = anon23 + 6297408;
					uint64_t phi_in24 = anon23 + 6296960;
					do
					{
						uint64_t phi25 = phi_in20;
						uint64_t phi26 = phi_in21;
						uint64_t phi27 = phi_in22;
						uint64_t phi28 = phi_in24;
						*(uint32_t*)phi27 = 0;
						uint64_t anon29 = (__zext uint64_t)((uint32_t)phi25 + *(uint32_t*)phi28);
						phi_in8 = anon29;
						anon30 = (uint32_t)phi26 - 1;
						if (anon30 != 0)
						{
							phi_in20 = anon29;
							phi_in21 = (__zext uint64_t)anon30;
							int64_t anon31 = (__sext int64_t)-*(uint32_t*)(phi6 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi6 + 6296896) * 10 << 2;
							phi_in22 = phi27 + anon31;
							phi_in24 = phi28 + anon31;
						}
					}
					while (anon30 != 0);
				}
			}
			phi32 = phi_in8;
			phi_in4 = phi6 + 4;
			phi_in5 = phi32;
		}
		while (phi6 != 28);
		if ((uint32_t)phi32 == 4294967295)
		{
			*anon1 = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi32 & 0xffffffff;
		}
	}
	uint32_t anon33 = (uint32_t)phi15 + 1;
	phi_in9 = (__zext uint64_t)anon33;
	phi_in10 = anon33;
	phi_in11 = phi15 + 1 & 0xffffffff;
	phi_in12 = anon17;
	if (*anon1 != 0)
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
	putchar(10);
	uint64_t phi_in1 = 65;
	uint64_t phi_in2 = 6297448;
	while (true)
	{
		uint32_t anon9;
		uint64_t phi3 = phi_in1;
		uint64_t phi4 = phi_in2;
		putchar((uint32_t)phi3);
		uint64_t phi_in5 = phi4;
		uint64_t phi6 = phi_in5;
		printf((uint8_t*)0x400f79);
		putchar(10);
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
		phi_in1 = phi3 + 1 & 0xffffffff;
		uint64_t anon10 = phi4 + 40;
		phi_in2 = anon10;
		phi_in5 = phi6 + 4;
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
