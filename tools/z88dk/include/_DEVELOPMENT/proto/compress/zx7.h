include(__link__.m4)

#ifndef __COMPRESS_ZX7_H__
#define __COMPRESS_ZX7_H__

//////////////////////////////////////////////////////////////
//                ZX7 FAMILY OF DECOMPRESSORS               //
//                 Copyleft (k) Einar Saukas                //
//////////////////////////////////////////////////////////////
//                                                          //
// Further information is available at:                     //
// http://www.worldofspectrum.org/infoseekid.cgi?id=0027996 //
// http://www.worldofspectrum.org/infoseekid.cgi?id=0028048 //
//                                                          //
//////////////////////////////////////////////////////////////
// crts use dzx7_standard() to decompress the data segment  //
//////////////////////////////////////////////////////////////

/*

   ZX7 Decompresses data that was previously compressed using
   a PC utility; it does not provide a z80 compressor.

   Decompression of compressed zx7 data:

   * dzx7_standard()

     The smallest version of the decompressor.
   
   * dzx7_turbo()
   
     The intermediate version of the decompressor, providing
     a balance between speed and size.
   
   * dzx7_mega()
   
     The fastest version of the decompressor.
   
   Decompression of rcs+zx7 data.  rcs is a separate utility
   that re-orders screen graphics to improve compression ratio.
   The mangling only makes sense on the zx spectrum target
   as the re-ordering is a function of the storage format on
   that machine.  The routines are kept available for all targets
   to allow all targets to decompress this sort of data.
   
   * dzx7_smart_rcs()
   
     The smallest version of the integrated zx7+rcs decompressor.
   
   * dzx7_agile_rcs()
   
     The fastest version of the integrated zx7+rcs decompressor.

*/

__DPROTO(,,unsigned char,*,dzx7_standard,void *src,void *dst)
__DPROTO(,,unsigned char,*,dzx7_standard_back,void *src,void *dst)
__DPROTO(,,unsigned char,*,dzx7_turbo,void *src,void *dst)
__DPROTO(,,unsigned char,*,dzx7_turbo_back,void *src,void *dst)
__DPROTO(,,unsigned char,*,dzx7_mega,void *src,void *dst)
__DPROTO(,,unsigned char,*,dzx7_mega_back,void *src,void *dst)

__DPROTO(,,unsigned char,*,dzx7_smart_rcs,void *src,void *dst)
__DPROTO(,,unsigned char,*,dzx7_smart_rcs_back,void *src,void *dst)
__DPROTO(,,unsigned char,*,dzx7_agile_rcs,void *src,void *dst)
__DPROTO(,,unsigned char,*,dzx7_agile_rcs_back,void *src,void *dst)

#ifdef __SMS
__DPROTO(,,unsigned int,,sms_dzx7_standard_vram,void *src,unsigned int dst)
__DPROTO(,,unsigned int,,sms_dzx7_standard_vram_unsafe,void *src,unsigned int dst)
#endif

#endif
