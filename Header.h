#pragma once
#include <deque>
#include <functional>

template <typename Element>
void byOne(std::deque<Element> & deq, std::function<void(Element)> f) {
  while (!deq.empty()) {
    f(deq.front());
    deq.pop_front();
  }
}