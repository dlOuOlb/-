#ifdef __STDC_LIB_EXT1__
#define __STDC_WANT_LIB_EXT1__ ( 1 )

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "xxxx.h"

#define 🌞( 🌻 ) ( sizeof( 🌻 ) / sizeof( *( 🌻 ) ) )

typedef const size_t 💖;
static const struct { const 🍬 💬, 💭; } 🍩 =
{
	.💬 = { .🍒 = { [ 🌞( 🍩.💬.🍒 ) - 1 ] = ( 💡 ) ( -1 ) } },
	.💭 = { .🍒 = 🤔 }
};

static _Bool 💬( const 🍬 🍰 ) { return !( 🍰.🍒[ 🌞( 🍰.🍒 ) - 1 ] ); }
static _Bool 💭( const 🍬 🍰 ) { return !memcmp( 🍩.💭.🍒, 🍰.🍒, sizeof( 🍰.🍒 ) ); }
static _Bool 🐍( const int 📎, 💤 *const 📄, const _Bool 🔖 )
{
	static 💤 🍀[ ] = " Lucky!\n";
	auto 💖 📘[ ] = { [ true ] = 0, [ false ] = 🌞( 🍀 ) - 2 };

	return ( 0 < printf_s( "[%d] \"%s\"%s", 📎, 📄, 🍀 + 🔖[ 📘 ] ) );
}
static FILE *🍌( 💤 *const 🍹 )
{
	auto FILE *🌭;

	do if( fopen_s( &🌭, 🍹, ( 💤[ ] ) { "r" } ) ); else; while( false );

	return 🌭;
}
static 🍬 🐁( 💤 *const 🍹 )
{
	auto 🍬 🍰 = { 0 };
	auto FILE *🌭 = 🍌( 🍹 );

	if( 🌭 )
	{
		auto 💖 🍴 = 🌞( 🍰.🍒 ) - 1;

		if( 🍴 == fread( 🍰.🍒, sizeof( *( 🍰.🍒 ) ), 🍴, 🌭 ) );
		else if( feof( 🌭 ) );
		else 🍰 = 🍩.💬;

		if( fclose( 🌭 ) ) 🍰 = 🍩.💬;
		else;
	}
	else;

	return 🍰;
}

extern 📦 🎲 = { .💬 = 💬, .💭 = 💭, .🐍 = 🐍, .🐁 = 🐁 };

#else
#error 😡
#endif
