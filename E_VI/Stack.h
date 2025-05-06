//
// Created on 06.05.2025.
//

#include <cinttypes>
#include <stdexcept>

#pragma once

namespace hs_a {

    template<class item_type>
    class Stack {
        struct node
        {
            explicit node(item_type e) : item(e) {}
            ~node() {
                delete next;
            }
            item_type item;
            node *next = nullptr;
        };
    private:
        node *first = nullptr;
        node *last = nullptr;
        size_t elemNumber = 0;
    public:
        Stack() = default;
        ~Stack() {
            delete first;
        }
        void push(item_type &r) {
            if(!last) {
                first = new node(r);
                last = first;
            } else {
                last = last->next = new node(r);
            }
            elemNumber++;
        }
        item_type pop() {
            if(!first)
                throw std::out_of_range("stack is empty");

            item_type elem = last->item;
            if(first == last) {
                delete first;
                first = nullptr;
                last = nullptr;
            } else {
                node *beforeLast = first;
                while (beforeLast->next != last) {
                    beforeLast = beforeLast->next;
                }
                delete beforeLast->next;
                beforeLast->next = nullptr;
                last = beforeLast;
            }
            elemNumber--;
            return elem;
        }
        item_type top() {
            if(last)
                return last->item;
            else throw std::out_of_range("stack is empty");
        }
        size_t size() {
            return elemNumber;
        }
        bool empty() {
            return elemNumber == 0;
        }
        void clear() {
            delete first;
            first = nullptr;
            last = nullptr;
            elemNumber = 0;
        }


    };

} // hs_a
