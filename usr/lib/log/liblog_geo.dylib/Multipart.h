/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:06:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/log/liblog_geo.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <liblog_geo.dylib/liblog_geo.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface Multipart : NSObject <NSCopying> {

	unsigned long long identifier;
	unsigned char partIndex;
	unsigned char partCount;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyWithIndex:(unsigned char)arg1 ;
-(BOOL)isEqualToMultipart:(id)arg1 ;
@end
