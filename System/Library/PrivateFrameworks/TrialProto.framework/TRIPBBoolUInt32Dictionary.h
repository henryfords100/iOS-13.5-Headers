/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TrialProto-Structs.h>
#import <libobjc.A.dylib/TRIPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TRIPBMessage;

@interface TRIPBBoolUInt32Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {

	TRIPBMessage* _autocreator;
	unsigned _values[2];
	BOOL _valueSet[2];

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)initWithDictionary:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)removeAll;
-(id)initWithUInt32s:(const unsigned*)arg1 forKeys:(const BOOL*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateKeysAndUInt32sUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)computeSerializedSizeAsField:(id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(BOOL)getUInt32:(unsigned*)arg1 forKey:(BOOL)arg2 ;
-(void)setUInt32:(unsigned)arg1 forKey:(BOOL)arg2 ;
-(void)removeUInt32ForKey:(BOOL)arg1 ;
-(void)setTRIPBGenericValue:(/*function pointer*/void**)arg1 forTRIPBGenericValueKey:(/*function pointer*/void**)arg2 ;
@end

