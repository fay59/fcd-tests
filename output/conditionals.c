#include "tests/bin/conditionals.h"

void main(uint64_t arg0, uint64_t arg1)
{
	uint64_t anon1 = arg1 + 2 & 0xffffffff;
	testO_64(4194946, arg1, anon1);
	uint64_t anon2 = arg1 & 0xffffffff;
	testO_32(4194960, anon2, anon1);
	testNO_64(4194974, anon2, anon1);
	testNO_32(4194988, anon2, anon1);
	testB_64(4195002, anon2, anon1);
	testB_32(4195016, anon2, anon1);
	testAE_64(4195030, anon2, anon1);
	testAE_32(4195044, anon2, anon1);
	testE_64(4195058, anon2, anon1);
	testE_32(4195072, anon2, anon1);
	testNZ_64(4195086, anon2, anon1);
	testNZ_32(4195100, anon2, anon1);
	testNA_64(4195114, anon2, anon1);
	testNA_32(4195128, anon2, anon1);
	testNBE_64(4195142, anon2, anon1);
	testNBE_32(4195156, anon2, anon1);
	testS_64(4195170, anon2, anon1);
	testS_32(4195184, anon2, anon1);
	testNS_64(4195198, anon2, anon1);
	testNS_32(4195212, anon2, anon1);
	testPE_64(4195226, anon2, anon1);
	testPE_32(4195240, anon2, anon1);
	testPO_64(4195254, anon2, anon1);
	testPO_32(4195268, anon2, anon1);
	testNGE_64(4195282, anon2, anon1);
	testNGE_32(4195296, anon2, anon1);
	testNL_64(4195310, anon2, anon1);
	testNL_32(4195324, anon2, anon1);
	testNG_64(4195338, anon2, anon1);
	testNG_32(4195352, anon2, anon1);
	testNLE_64(4195366, anon2, anon1);
	testNLE_32(4195380, anon2, anon1);
	return;
}
uint64_t testO_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	struct { uint64_t field0; bool field1; } anon1 = llvm.ssub.with.overflow.i64(arg1, arg2);
	return (__zext uint64_t)anon1.field1;
}
uint64_t testO_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	struct { uint32_t field0; bool field1; } anon1 = llvm.ssub.with.overflow.i32((uint32_t)arg1, (uint32_t)arg2);
	return (__zext uint64_t)anon1.field1;
}
uint64_t testNO_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	struct { uint64_t field0; bool field1; } anon1 = llvm.ssub.with.overflow.i64(arg1, arg2);
	return (__zext uint64_t)anon1.field1 ^ 1;
}
uint64_t testNO_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	struct { uint32_t field0; bool field1; } anon1 = llvm.ssub.with.overflow.i32((uint32_t)arg1, (uint32_t)arg2);
	return (__zext uint64_t)anon1.field1 ^ 1;
}
uint64_t testB_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)(arg1 < arg2);
}
uint64_t testB_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)((uint32_t)arg1 < (uint32_t)arg2);
}
uint64_t testAE_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)(arg1 >= arg2);
}
uint64_t testAE_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)((uint32_t)arg1 >= (uint32_t)arg2);
}
uint64_t testE_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)(arg1 == arg2);
}
uint64_t testE_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)((uint32_t)arg1 == (uint32_t)arg2);
}
uint64_t testNZ_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)(arg1 != arg2);
}
uint64_t testNZ_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)((uint32_t)arg1 != (uint32_t)arg2);
}
uint64_t testNA_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)(arg1 <= arg2);
}
uint64_t testNA_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)((uint32_t)arg1 <= (uint32_t)arg2);
}
uint64_t testNBE_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)(arg1 > arg2);
}
uint64_t testNBE_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)((uint32_t)arg1 > (uint32_t)arg2);
}
uint64_t testS_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return arg1 - arg2 >> 63;
}
uint64_t testS_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return arg1 - arg2 >> 31 & 1;
}
uint64_t testNS_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return arg1 - arg2 >> 63 ^ 1;
}
uint64_t testNS_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return arg1 - arg2 >> 31 & 1 ^ 1;
}
uint64_t testPE_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t anon1 = llvm.ctpop.i32((uint32_t)(arg1 - arg2) & 0xff);
	return (__zext uint64_t)(anon1 & 1 ^ 1);
}
uint64_t testPE_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t anon1 = llvm.ctpop.i32((uint32_t)arg1 - (uint32_t)arg2 & 0xff);
	return (__zext uint64_t)(anon1 & 1 ^ 1);
}
uint64_t testPO_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t anon1 = llvm.ctpop.i32((uint32_t)(arg1 - arg2) & 0xff);
	return (__zext uint64_t)(anon1 & 1);
}
uint64_t testPO_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t anon1 = llvm.ctpop.i32((uint32_t)arg1 - (uint32_t)arg2 & 0xff);
	return (__zext uint64_t)(anon1 & 1);
}
uint64_t testNGE_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)(arg1 < arg2);
}
uint64_t testNGE_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)((uint32_t)arg1 < (uint32_t)arg2);
}
uint64_t testNL_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)(arg1 >= arg2);
}
uint64_t testNL_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)((uint32_t)arg1 >= (uint32_t)arg2);
}
uint64_t testNG_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)(arg1 <= arg2);
}
uint64_t testNG_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)((uint32_t)arg1 <= (uint32_t)arg2);
}
uint64_t testNLE_64(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)(arg1 > arg2);
}
uint64_t testNLE_32(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	return (__zext uint64_t)((uint32_t)arg1 > (uint32_t)arg2);
}
