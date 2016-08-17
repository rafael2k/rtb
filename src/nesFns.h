/*
 * returnToBasic:
 *	A new implementation of BASIC
 *	Copyright (c) 2012 Gordon Henderson
 *********************************************************************************
 * nes.h:
 *	Functions to handle a Nintendo Entertainment System Joysitck on
 *	a Raspberry Pi
 *********************************************************************************
 * This file is part of RTB:
 *	Return To Basic
 *	http://projects.drogon.net/return-to-basic
 *
 *    RTB is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    RTB is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with RTB.  If not, see <http://www.gnu.org/licenses/>.
 *********************************************************************************
 */

extern int doNesOpen   (void *ptr) ;
extern int doNesClose  (void *ptr) ;
extern int doNesRead   (void *ptr) ;

extern int doNesUp     (void *ptr) ;
extern int doNesDown   (void *ptr) ;
extern int doNesLeft   (void *ptr) ;
extern int doNesRight  (void *ptr) ;
extern int doNesSelect (void *ptr) ;
extern int doNesStart  (void *ptr) ;
extern int doNesA      (void *ptr) ;
extern int doNesB      (void *ptr) ;
