#pragma once
#include "types.hpp"
#include <vector>

class Block;

class ROM {
public:
  ROM(const char *);
  ~ROM();

  u8 readByte(u24) const;
  u16 readWord(u24) const;
  u24 readAddress(u24) const;

  std::vector<Block> blocks() const;

private:
  u8 *data;

  u24 translateAddress(u24) const;
};