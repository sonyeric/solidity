/*
	This file is part of solidity.

	solidity is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	solidity is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with solidity.  If not, see <http://www.gnu.org/licenses/>.
*/
/**
 * @author Christian <c@ethdev.com>
 * @date 2016
 * Unit tests for source verification.
 */

#include <string>
#include <memory>
#include <libsolidity/interface/CompilerStack.h>
#include "../TestHelper.h"

using namespace std;

namespace dev
{
namespace solidity
{
namespace test
{

BOOST_AUTO_TEST_SUITE(SoliditySourceVerification)

BOOST_AUTO_TEST_CASE(smoke_test)
{
	CompilerStack c;
	string input = R"({
		"sources": {"a.sol": "contract c { function f(){}}"}
	})";
	c.compileStandardJSON(input);
}

BOOST_AUTO_TEST_SUITE_END()

}
}
} // end namespaces