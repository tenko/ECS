// RISC machine code generator
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

#ifndef ECS_RISC_GENERATOR_HEADER_INCLUDED
#define ECS_RISC_GENERATOR_HEADER_INCLUDED

#include "asmgenerator.hpp"
#include "riscassembler.hpp"

namespace ECS::RISC
{
	class Generator;
}

class ECS::RISC::Generator : public Assembly::Generator
{
public:
	Generator (Diagnostics&, StringPool&, Charset&);

private:
	class Context;

	Assembler assembler;

	void Process (const Code::Sections&, Object::Binaries&, Debugging::Information&, std::ostream&) const override;
};

#endif // ECS_RISC_GENERATOR_HEADER_INCLUDED
