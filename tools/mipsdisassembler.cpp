// MIPS disassembler
// Copyright (C) Florian Negele

// This file is part of the Eigen Compiler Suite.

// The ECS is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// The ECS is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with the ECS.  If not, see <https://www.gnu.org/licenses/>.

#include "mips.hpp"
#include "mipsdisassembler.hpp"
#include "utilities.hpp"

using namespace ECS;
using namespace MIPS;

Disassembler::Disassembler (Charset& c, const Architecture a, const Endianness e) :
	Assembly::Disassembler {c, 4, 4}, architecture {a}, endianness {e}
{
}

Disassembler::Size Disassembler::ListInstruction (const Span<const Byte> bytes, std::ostream& stream, State&) const
{
	const Instruction instruction {bytes, endianness};
	const Size size = IsValid (instruction, architecture) ? 4 : 0;
	if (size) Write (stream, {bytes.begin (), size}) << instruction;
	return size;
}
