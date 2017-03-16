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
	uint32_t anon59;
	l(4195589);
	uint32_t phi_in1 = 60;
	do
	{
		uint32_t phi7;
		uint32_t anon12;
		uint8_t* anon26;
		uint8_t* anon30;
		uint64_t phi43;
		uint32_t phi44;
		uint32_t anon47;
		uint32_t phi2 = phi_in1;
		uint64_t phi3 = phi_in4;
		uint32_t phi_in5 = 1;
		uint32_t phi_in6 = 0;
		do
		{
			uint32_t anon13;
			phi7 = phi_in5;
			uint32_t phi_in8 = 1;
			do
			{
				uint32_t phi9 = phi_in6;
				uint32_t phi10 = phi_in8;
				uint64_t anon11 = m.constprop.0(4195644, (__zext uint64_t)phi7, (__zext uint64_t)phi10);
				anon12 = phi9 + (uint32_t)anon11;
				phi_in6 = anon12;
				anon13 = phi10 + 1;
				phi_in8 = anon13;
			}
			while (anon13 != 9);
			phi_in5 = phi7 + 1;
			phi_in6 = anon12;
		}
		while (phi7 != 8);
		uint64_t phi14 = phi3;
		uint64_t phi15 = 0;
		uint64_t phi_in16 = 1;
		uint32_t phi17 = 1;
		if (anon12 != 0)
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
			phi14 = phi3;
			phi15 = 0;
			phi_in16 = 1;
			phi17 = 1;
		}
		do
		{
			uint64_t phi40;
			uint64_t phi_in32 = phi14;
			uint64_t phi_in33 = phi15;
			uint64_t phi34 = phi_in16;
			uint32_t phi35 = phi17;
			uint64_t phi36 = phi_in32;
			uint64_t phi37 = phi_in33;
			uint32_t phi_in38 = 1;
			do
			{
				uint64_t phi_in39 = phi36;
				phi40 = phi37;
				*(uint32_t*)(arg1 - 72) = phi_in38;
				uint64_t anon41 = m.constprop.1(4195713, (__zext uint64_t)phi35, (__zext uint64_t)*(uint32_t*)(arg1 - 72));
				uint64_t anon42 = random();
				phi43 = phi_in39;
				uint32_t anon45 = (uint32_t)phi40;
				phi44 = anon45;
				uint32_t anon46 = (uint32_t)anon41 + (uint32_t)anon42 + ((uint32_t)((anon42 & 0xffffffff) / 6) - (uint32_t)(anon42 << 32 >> 32 >> 31)) * 4294967290;
				if (anon46 > anon45)
				{
					phi43 = phi34;
					phi40 = (__zext uint64_t)anon46;
					phi44 = anon46;
				}
				phi36 = phi43;
				phi37 = phi40;
				phi_in38 = *(uint32_t*)(arg1 - 72) + 1;
				anon47 = (uint32_t)phi34;
				phi35 = anon47;
			}
			while (*(uint32_t*)(arg1 - 72) != 8);
			phi14 = phi43;
			phi15 = phi40;
			uint32_t anon48 = anon47 + 1;
			phi_in16 = (__zext uint64_t)anon48;
			phi17 = anon48;
		}
		while (anon47 != 8);
		if (phi44 != 0)
		{
			uint64_t anon49 = m.constprop.1(4196072, phi43 & 0xffffffff, 0);
			if ((uint32_t)anon49 != 0)
			{
				uint64_t anon55;
				uint32_t anon58;
				putchar(10);
				uint64_t phi50 = 65;
				uint64_t phi_in51 = 6297448;
				do
				{
					uint64_t phi54;
					uint64_t phi52 = phi_in51;
					putchar((uint32_t)phi50);
					uint64_t phi_in53 = phi52;
					do
					{
						phi54 = phi_in53;
						printf(anon26);
						phi_in53 = phi54 + 4;
					}
					while (phi52 + 28 != phi54);
					putchar(10);
					phi50 = phi50 + 1 & 0xffffffff;
					anon55 = phi52 + 40;
					phi_in51 = anon55;
				}
				while (anon55 != 6297768);
				putchar(32);
				uint32_t phi_in56 = 1;
				do
				{
					uint32_t phi57 = phi_in56;
					printf(anon30);
					anon58 = phi57 + 1;
					phi_in56 = anon58;
				}
				while (anon58 != 9);
				putchar(10);
			}
		}
		anon59 = phi2 - 1;
		phi_in1 = anon59;
		uint64_t phi_in4 = phi43;
	}
	while (anon59 != 0);
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
	uint64_t phi_in10;
	uint32_t phi11;
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
		uint64_t phi7;
		uint64_t phi9;
		*anon1 = 1;
		uint64_t phi_in5 = 0;
		uint64_t phi6 = 1;
		do
		{
			phi7 = phi_in5;
			uint64_t phi8 = phi6;
			phi9 = phi8;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi7 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi7 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
			{
				phi_in10 = 1;
				phi11 = 1;
				phi12 = 1;
				phi13 = (((__zext uint64_t)*(uint32_t*)(phi7 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi7 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
				phi9 = phi8;
				int62_t anon15 = (__sext int62_t)*(uint32_t*)(phi7 + 6296832);
				anon14 = phi13 + ((__zext uint64_t)(anon15 + (__sext int62_t)*(uint32_t*)(phi7 + 6296896) * 10) << 2);
				int64_t anon16 = (__sext int64_t)*(uint32_t*)(phi7 + 6296896);
				if (*(uint32_t*)(anon14 + ((__zext uint64_t)-anon15 << 2) + ((-anon16 << 2) - anon16 << 3)) == 1)
				{
					uint32_t anon22;
					int64_t anon18 = (__sext int64_t)(phi11 * *(uint32_t*)(phi7 + 6296832)) + anon3 + ((__sext int64_t)((uint32_t)phi_in10 * *(uint32_t*)(phi7 + 6296896)) + anon4) * 10 << 2;
					phi17 = anon18 + 6297408;
					uint64_t phi19 = anon18 + 6296960;
					do
					{
						uint64_t phi20 = phi_in10;
						*(uint32_t*)phi17 = 0;
						uint64_t anon21 = (__zext uint64_t)((uint32_t)phi8 + *(uint32_t*)phi19);
						phi9 = anon21;
						phi8 = anon21;
						anon22 = (uint32_t)phi20 - 1;
						phi_in10 = (__zext uint64_t)anon22;
						int64_t anon23 = (__sext int64_t)-*(uint32_t*)(phi7 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi7 + 6296896) * 10 << 2;
						phi17 = phi17 + anon23;
						phi19 = phi19 + anon23;
					}
					while (anon22 != 0);
				}
			}
			phi_in5 = phi7 + 4;
			phi6 = phi9;
		}
		while (phi7 != 28);
		if ((uint32_t)phi9 == 1)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi9 & 0xffffffff;
		}
	}
	else 
	{
		return 0;
	}
	uint32_t anon24 = (uint32_t)phi12 + 1;
	phi_in10 = (__zext uint64_t)anon24;
	phi11 = anon24;
	phi12 = phi12 + 1 & 0xffffffff;
	phi13 = anon14;
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi_in10;
	uint32_t phi11;
	uint64_t phi12;
	uint64_t phi13;
	uint64_t anon14;
	uint64_t phi18;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi7;
		uint64_t phi9;
		*anon1 = 4294967295;
		uint64_t phi_in5 = 0;
		uint64_t phi6 = 4294967295;
		do
		{
			phi7 = phi_in5;
			uint64_t phi_in8 = phi6;
			phi9 = phi_in8;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi7 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi7 + 6296896)) * 10 << 2) + 6297408) == 1)
			{
				phi_in10 = 1;
				phi11 = 1;
				phi12 = 1;
				phi13 = (((__zext uint64_t)*(uint32_t*)(phi7 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi7 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
				phi9 = phi_in8;
				int62_t anon15 = (__sext int62_t)*(uint32_t*)(phi7 + 6296832);
				anon14 = phi13 + ((__zext uint64_t)(anon15 + (__sext int62_t)*(uint32_t*)(phi7 + 6296896) * 10) << 2);
				int64_t anon16 = (__sext int64_t)*(uint32_t*)(phi7 + 6296896);
				if (*(uint32_t*)(anon14 + ((__zext uint64_t)-anon15 << 2) + ((-anon16 << 2) - anon16 << 3)) == 255)
				{
					uint32_t anon23;
					uint64_t phi17 = phi_in8;
					int64_t anon19 = (__sext int64_t)(phi11 * *(uint32_t*)(phi7 + 6296832)) + anon3 + ((__sext int64_t)((uint32_t)phi_in10 * *(uint32_t*)(phi7 + 6296896)) + anon4) * 10 << 2;
					phi18 = anon19 + 6297408;
					uint64_t phi20 = anon19 + 6296960;
					do
					{
						uint64_t phi21 = phi_in10;
						*(uint32_t*)phi18 = 0;
						uint64_t anon22 = (__zext uint64_t)((uint32_t)phi17 + *(uint32_t*)phi20);
						phi9 = anon22;
						phi17 = anon22;
						anon23 = (uint32_t)phi21 - 1;
						phi_in10 = (__zext uint64_t)anon23;
						int64_t anon24 = (__sext int64_t)-*(uint32_t*)(phi7 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi7 + 6296896) * 10 << 2;
						phi18 = phi18 + anon24;
						phi20 = phi20 + anon24;
					}
					while (anon23 != 0);
				}
			}
			phi_in5 = phi7 + 4;
			phi6 = phi9;
		}
		while (phi7 != 28);
		if ((uint32_t)phi9 == 4294967295)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi9 & 0xffffffff;
		}
	}
	else 
	{
		return 0;
	}
	uint32_t anon25 = (uint32_t)phi12 + 1;
	phi_in10 = (__zext uint64_t)anon25;
	phi11 = anon25;
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
