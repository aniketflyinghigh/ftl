/*
 * Copyright (c) 2013 Björn Aili
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 * claim that you wrote the original software. If you use this software
 * in a product, an acknowledgment in the product documentation would be
 * appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 * misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source
 * distribution.
 */
#ifndef FTL_CONCEPTS_COMMON_H
#define FTL_CONCEPTS_COMMON_H

namespace ftl {
	
	/**
	 * Derived concept implementation tag for any mutable container type.
	 *
	 * This tag can be used with some _deriving_ constructs to generate an
	 * automatic/default implementation of certain concept methods.
	 *
	 * \tparam M must be \ref fwditerable and Insertable.
	 *
	 * \ingroup concept_common
	 */
	template<typename M>
	struct back_insertable_container {};

	/**
	 * Tag used to derive a \ref bidiriterable specific concept instance/method.
	 *
	 * Some _deriving_ are specialised for this tag to provide a semi-automatic
	 * implementation of a concept.
	 *
	 * \tparam It must be BidirectionalIterable.
	 *
	 * \ingroup concept_common
	 */
	template<typename It>
	struct bidirectional_iterable {};

}

#endif

