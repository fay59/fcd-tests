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
		uint32_t anon10;
		uint8_t* anon24;
		uint8_t* anon27;
		uint32_t phi41;
		uint32_t phi42;
		uint64_t phi_in2 = phi_in3;
		uint32_t phi_in4 = 1;
		uint32_t phi_in5 = 0;
		do
		{
			uint32_t anon11;
			phi6 = phi_in4;
			uint32_t phi7 = phi_in5;
			uint32_t phi_in8 = 1;
			do
			{
				uint32_t phi9 = phi_in8;
				anon10 = phi7 + (uint32_t)m.constprop.0(4195644, (__zext uint64_t)phi6, (__zext uint64_t)phi9);
				phi7 = anon10;
				anon11 = phi9 + 1;
				phi_in8 = anon11;
			}
			while (anon11 != 9);
			phi_in4 = phi6 + 1;
			phi_in5 = anon10;
		}
		while (phi6 != 8);
		uint64_t phi_in12 = phi_in2;
		uint64_t phi13 = 0;
		uint64_t phi14 = 1;
		uint32_t phi_in15 = 1;
		if (anon10 != 0)
		{
			uint64_t anon20;
			uint32_t anon28;
			do
			{
				uint32_t anon16;
				uint32_t anon17;
				uint32_t anon18;
				uint32_t anon19;
				printf((uint8_t*)0x400f81);
				do
				{
					anon16 = getchar();
					anon17 = anon16 - 65;
				}
				while (anon17 >= 8);
				do
				{
					anon18 = getchar();
					anon19 = anon18 - 49;
				}
				while (anon19 >= 8);
				anon20 = m.constprop.0(4195848, (__zext uint64_t)(anon16 - 64), (__zext uint64_t)(anon18 - 48));
			}
			while ((uint32_t)anon20 == 0);
			putchar(10);
			uint64_t phi21 = 65;
			uint64_t phi22 = 6297448;
			while (true)
			{
				uint64_t phi23 = phi22;
				putchar((uint32_t)phi21);
				anon24 = (uint8_t*)0x400f79;
				printf(anon24);
				putchar(10);
				uint64_t anon25 = phi23 + 40;
				if (anon25 != 6297768)
				{
					phi21 = phi21 + 1 & 0xffffffff;
					phi22 = anon25;
				}
				phi23 = phi23 + 4;
				break;
			}
			putchar(32);
			uint32_t phi26 = 1;
			do
			{
				anon27 = (uint8_t*)0x400f7d;
				printf(anon27);
				anon28 = phi26 + 1;
				phi26 = anon28;
			}
			while (anon28 != 9);
			putchar(10);
			phi_in12 = phi_in2;
			phi13 = 0;
			phi14 = 1;
			phi_in15 = 1;
		}
		uint64_t phi29 = phi13;
		uint64_t phi30 = phi14;
		uint64_t phi31 = phi_in12;
		uint64_t phi32 = 1;
		uint32_t phi33 = phi_in15;
		uint32_t phi34 = 1;
		phi30 = phi31;
		uint64_t phi35 = phi29;
		uint64_t anon36 = m.constprop.1(4195713, (__zext uint64_t)phi33, (__zext uint64_t)phi34);
		uint64_t anon38 = random();
		uint32_t anon37 = (uint32_t)anon36 + (uint32_t)anon38 + ((uint32_t)((anon38 & 0xffffffff) / 6) - (uint32_t)(anon38 << 32 >> 32 >> 31)) * 4294967290;
		uint32_t anon39 = (uint32_t)phi35;
		if (anon37 > anon39)
		{
			uint32_t anon40 = (uint32_t)phi32;
			*(uint32_t*)(arg1 - 72) = anon40;
			phi35 = (__zext uint64_t)anon37;
			phi41 = anon37;
			phi42 = anon40;
		}
		else 
		{
			phi41 = anon39;
			phi42 = (uint32_t)phi32;
		}
		phi31 = phi30;
		phi29 = phi35;
		if (phi41 != 0)
		{
			if ((uint32_t)m.constprop.1(4196072, phi31 & 0xffffffff, 0) != 0)
			{
				uint32_t anon48;
				putchar(10);
				uint64_t phi43 = 65;
				uint64_t phi44 = 6297448;
				while (true)
				{
					uint64_t phi45 = phi44;
					putchar((uint32_t)phi43);
					printf(anon24);
					putchar(10);
					uint64_t anon46 = phi45 + 40;
					if (anon46 != 6297768)
					{
						phi43 = phi43 + 1 & 0xffffffff;
						phi44 = anon46;
					}
					phi45 = phi45 + 4;
					break;
				}
				putchar(32);
				uint32_t phi47 = 1;
				do
				{
					printf(anon27);
					anon48 = phi47 + 1;
					phi47 = anon48;
				}
				while (anon48 != 9);
				putchar(10);
			}
		}
		uint32_t anon49 = phi1 - 1;
		phi1 = anon49;
		uint64_t phi_in3 = phi31;
		phi_in12 = phi31;
		phi13 = phi29;
		uint32_t anon51 = (uint32_t)phi30;
		uint32_t anon50 = anon51 + 1;
		phi14 = (__zext uint64_t)anon50;
		phi_in15 = anon50;
		uint32_t anon52 = phi42 + 1;
		phi32 = (__zext uint64_t)anon52;
		phi33 = (uint32_t)phi30;
		phi34 = anon52;
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
	uint64_t anon12;
	uint64_t phi15;
	uint64_t anon2 = arg2 << 32 >> 32;
	uint64_t anon3 = arg1 << 32 >> 32;
	uint32_t* anon1 = (uint32_t*)((anon2 + (anon3 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi6;
		uint64_t phi7;
		*anon1 = 1;
		uint64_t phi_in4 = 0;
		uint64_t phi5 = 1;
		do
		{
			phi6 = phi_in4;
			phi7 = phi5;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi6 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi6 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
			{
				phi8 = 1;
				phi9 = 1;
				phi10 = 1;
				phi11 = (((__zext uint64_t)*(uint32_t*)(phi6 + 6296832) << 33 >> 32) + anon2 + (((__zext uint64_t)*(uint32_t*)(phi6 + 6296896) << 33 >> 32) + anon3) * 10 << 2) + 6297408;
				phi7 = phi5;
				int62_t anon13 = (__sext int62_t)*(uint32_t*)(phi6 + 6296832);
				anon12 = phi11 + ((__zext uint64_t)(anon13 + (__sext int62_t)*(uint32_t*)(phi6 + 6296896) * 10) << 2);
				int64_t anon14 = (__sext int64_t)*(uint32_t*)(phi6 + 6296896);
				if (*(uint32_t*)(anon12 + ((__zext uint64_t)-anon13 << 2) + ((-anon14 << 2) - anon14 << 3)) == 1)
				{
					uint32_t anon19;
					int64_t anon16 = (__sext int64_t)(phi9 * *(uint32_t*)(phi6 + 6296832)) + anon2 + ((__sext int64_t)((uint32_t)phi8 * *(uint32_t*)(phi6 + 6296896)) + anon3) * 10 << 2;
					phi15 = anon16 + 6297408;
					uint64_t phi17 = anon16 + 6296960;
					do
					{
						*(uint32_t*)phi15 = 0;
						uint64_t anon18 = (__zext uint64_t)((uint32_t)phi5 + *(uint32_t*)phi17);
						phi7 = anon18;
						anon19 = (uint32_t)phi8 - 1;
						if (anon19 != 0)
						{
							phi5 = anon18;
							phi8 = (__zext uint64_t)anon19;
							int64_t anon20 = (__sext int64_t)-*(uint32_t*)(phi6 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi6 + 6296896) * 10 << 2;
							phi15 = phi15 + anon20;
							phi17 = phi17 + anon20;
						}
					}
					while (anon19 != 0);
				}
			}
			phi_in4 = phi6 + 4;
			phi5 = phi7;
		}
		while (phi6 != 28);
		if ((uint32_t)phi7 == 1)
		{
			*anon1 = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi7 & 0xffffffff;
		}
	}
	uint32_t anon21 = (uint32_t)phi10 + 1;
	phi8 = (__zext uint64_t)anon21;
	phi9 = anon21;
	phi10 = phi10 + 1 & 0xffffffff;
	phi11 = anon12;
	if (*anon1 != 0)
	{
		return 0;
	}
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi_in8;
	uint32_t phi9;
	uint64_t phi10;
	uint64_t phi11;
	uint64_t anon12;
	uint64_t phi17;
	uint64_t anon2 = arg2 << 32 >> 32;
	uint64_t anon3 = arg1 << 32 >> 32;
	uint32_t* anon1 = (uint32_t*)((anon2 + (anon3 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi6;
		uint64_t phi7;
		*anon1 = 4294967295;
		uint64_t phi_in4 = 0;
		uint64_t phi5 = 4294967295;
		do
		{
			phi6 = phi_in4;
			phi7 = phi5;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi6 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi6 + 6296896)) * 10 << 2) + 6297408) == 1)
			{
				phi_in8 = 1;
				phi9 = 1;
				phi10 = 1;
				phi11 = (((__zext uint64_t)*(uint32_t*)(phi6 + 6296832) << 33 >> 32) + anon2 + (((__zext uint64_t)*(uint32_t*)(phi6 + 6296896) << 33 >> 32) + anon3) * 10 << 2) + 6297408;
				int62_t anon13 = (__sext int62_t)*(uint32_t*)(phi6 + 6296832);
				anon12 = phi11 + ((__zext uint64_t)(anon13 + (__sext int62_t)*(uint32_t*)(phi6 + 6296896) * 10) << 2);
				int64_t anon14 = (__sext int64_t)*(uint32_t*)(phi6 + 6296896);
				if (*(uint32_t*)(anon12 + ((__zext uint64_t)-anon13 << 2) + ((-anon14 << 2) - anon14 << 3)) == 255)
				{
					uint32_t anon21;
					uint64_t phi15 = phi7;
					uint64_t phi16 = phi_in8;
					int64_t anon18 = (__sext int64_t)(phi9 * *(uint32_t*)(phi6 + 6296832)) + anon2 + ((__sext int64_t)((uint32_t)phi_in8 * *(uint32_t*)(phi6 + 6296896)) + anon3) * 10 << 2;
					phi17 = anon18 + 6297408;
					uint64_t phi19 = anon18 + 6296960;
					do
					{
						*(uint32_t*)phi17 = 0;
						uint64_t anon20 = (__zext uint64_t)((uint32_t)phi15 + *(uint32_t*)phi19);
						phi7 = anon20;
						anon21 = (uint32_t)phi16 - 1;
						if (anon21 != 0)
						{
							phi15 = anon20;
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
			phi5 = phi7;
		}
		while (phi6 != 28);
		if ((uint32_t)phi7 == 4294967295)
		{
			*anon1 = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi7 & 0xffffffff;
		}
	}
	uint32_t anon23 = (uint32_t)phi10 + 1;
	phi_in8 = (__zext uint64_t)anon23;
	phi9 = anon23;
	phi10 = phi10 + 1 & 0xffffffff;
	phi11 = anon12;
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
	uint64_t phi_in2 = 6297448;
	while (true)
	{
		uint32_t anon5;
		putchar((uint32_t)phi1);
		uint64_t phi3 = phi_in2;
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
		uint64_t anon6 = phi_in2 + 40;
		phi_in2 = anon6;
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
