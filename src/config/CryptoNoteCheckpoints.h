// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
	{1,         "947a498d0460f1ff51988ff47032637cf348c0b89a2e95b9b235e2e3e00d1ddf"},
    {10000,     "eaacccd0feede42997edb217857e8ad4e4a68cf6026b3ab519c1bf134d026d99"},
	{50000,     "ec9bd175afc890367a276eedcb3faa819612aaefd48d5517159c1c768dfc4d2b"},
	{100000,	"cd23474d9a99c5ab4f1b41e76f6e77380d78ca2707cf494a163ac81af44afecf"}
};
}
