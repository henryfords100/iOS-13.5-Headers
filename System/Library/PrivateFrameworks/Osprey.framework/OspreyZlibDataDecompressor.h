/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Osprey/Osprey-Structs.h>
@interface OspreyZlibDataDecompressor : NSObject {

	z_stream_s* _inflateStream;
	unsigned char _inflateBuffer[8192];

}
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(long long)arg1 ;
-(id)decompressedDataForData:(id)arg1 error:(id*)arg2 ;
@end
