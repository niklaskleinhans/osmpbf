/*
    This file is part of the osmpbf library.

    Copyright(c) 2012-2014 Oliver Groß.

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 3 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, see
    <http://www.gnu.org/licenses/>.
 */

#ifndef OSMPBF_ABSTRACTNODEINPUTADAPTOR_H
#define OSMPBF_ABSTRACTNODEINPUTADAPTOR_H

#include <osmpbf/abstractprimitiveinputadaptor.h>

namespace osmpbf
{

class PrimitiveBlockInputAdaptor;

class AbstractNodeInputAdaptor : public AbstractPrimitiveInputAdaptor
{
public:
	AbstractNodeInputAdaptor()
		: AbstractPrimitiveInputAdaptor() {}
	AbstractNodeInputAdaptor(PrimitiveBlockInputAdaptor * controller)
		: AbstractPrimitiveInputAdaptor(controller) {}

	virtual osmpbf::PrimitiveType type() const override { return osmpbf::PrimitiveType::NodePrimitive; }

	virtual void print(std::ostream & out) const override;
	
	virtual int64_t lati() const = 0;
	virtual int64_t loni() const = 0;

	virtual double latd() const = 0;
	virtual double lond() const = 0;

	virtual int64_t rawLat() const = 0;
	virtual int64_t rawLon() const = 0;

	virtual NodeType nodeType() const = 0;
};

} // namespace osmpbf

#endif // OSMPBF_ABSTRACTNODEINPUTADAPTOR_H
