/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface _DKEventData : NSObject {

	unsigned long long _version;
	NSData* _event;
	unsigned long long _uncompressedLength;

}

@property (nonatomic,readonly) unsigned long long version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSData * event;                                     //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) unsigned long long uncompressedLength;              //@synthesize uncompressedLength=_uncompressedLength - In the implementation block
+(id)fromPBCodable:(id)arg1 ;
+(id)createFromData:(id)arg1 ;
-(unsigned long long)version;
-(NSData *)event;
-(id)toPBCodable;
-(id)asData;
-(unsigned long long)uncompressedLength;
-(id)initWithCompressedData:(id)arg1 uncompressedLength:(unsigned long long)arg2 version:(unsigned long long)arg3 ;
-(id)initWithData:(id)arg1 version:(unsigned long long)arg2 ;
@end
