/*
 * The internal unused definition
 *
 * Copyright (c) 2009-2014, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _PYLNK_INTERNAL_UNUSED_H )
#define _PYLNK_INTERNAL_UNUSED_H

#include <common.h>

#if !defined( PYLNK_ATTRIBUTE_UNUSED )
#if defined( __GNUC__ ) && __GNUC__ >= 3
#define PYLNK_ATTRIBUTE_UNUSED	__attribute__ ((__unused__))
#else
#define PYLNK_ATTRIBUTE_UNUSED
#endif
#endif

#if defined( _MSC_VER )
#define PYLNK_UNREFERENCED_PARAMETER( parameter ) \
	UNREFERENCED_PARAMETER( parameter );
#else
#define PYLNK_UNREFERENCED_PARAMETER( parameter ) \
	/* parameter */
#endif

#endif

