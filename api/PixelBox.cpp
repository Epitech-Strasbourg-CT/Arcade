/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** PixelBox
*/
#include <cstddef>
#include <bits/valarray_before.h>
#include "Vect.hpp"
#include "Color.hpp"
#include "PixelBox.hpp"

Arcade::PixelBox::PixelBox(Arcade::Vect<size_t> size, Arcade::Vect<size_t> pos,
Arcade::Color col)
: _colorFrame(size.getX() * size.getY(), col), _size(size), _pos(pos)
{
	
}

size_t Arcade::PixelBox::getHeight() const
{
	return _size.getY();
}

size_t Arcade::PixelBox::getY() const
{
	return _pos.getY();
}

void Arcade::PixelBox::setHeight(size_t height)
{
	_size.setY(height);
}

void Arcade::PixelBox::setY(size_t y)
{
	_pos.setY(y);
}

size_t Arcade::PixelBox::getWidth() const
{
	return _size.getX();
}

size_t Arcade::PixelBox::getX() const
{
	return _pos.getX();
}

void Arcade::PixelBox::setWidth(size_t width)
{
	_size.setX(width);
}

void Arcade::PixelBox::setX(size_t x)
{
	_pos.setX(x);
}

Arcade::Vect<size_t> Arcade::PixelBox::getSize() const
{
	return _size;
}

void Arcade::PixelBox::setSize(Arcade::Vect<size_t> size)
{
	_size = size;
}

Arcade::Vect<size_t> Arcade::PixelBox::getPos() const
{
	return _pos;
}

void Arcade::PixelBox::setPos(Arcade::Vect<size_t> pos)
{
	_pos = pos;
}

void Arcade::PixelBox::putPixel(Arcade::Vect<size_t> pos, Arcade::Color col)
{
	_colorFrame[(pos.getY() * _size.getX()) + pos.getX()] = col;
}

Arcade::Color Arcade::PixelBox::getPixel(Arcade::Vect<size_t> pos) const
{
	return _colorFrame[(pos.getY() * _size.getX()) + pos.getX()];
}

void Arcade::PixelBox::putRect(Arcade::Vect<size_t> pos,
Arcade::Vect<size_t> size, Arcade::Color col)
{
}

std::vector<Arcade::Color> &Arcade::PixelBox::getPixelArray()
{
	return _colorFrame;
}
