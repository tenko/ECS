// XML document pretty printer
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

#ifndef ECS_XML_PRINTER_HEADER_INCLUDED
#define ECS_XML_PRINTER_HEADER_INCLUDED

#include <iosfwd>

namespace ECS::XML
{
	class Printer;

	struct Document;
}

class ECS::XML::Printer
{
public:
	void Print (const Document&, std::ostream&) const;

private:
	class Context;
};

#endif // ECS_XML_PRINTER_HEADER_INCLUDED
