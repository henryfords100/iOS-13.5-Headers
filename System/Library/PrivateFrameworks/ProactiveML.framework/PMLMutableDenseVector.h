/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProactiveML/PMLDenseVector.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableData;

@interface PMLMutableDenseVector : PMLDenseVector <NSCopying, NSMutableCopying> {

	NSMutableData* _mutableData;

}

@property (nonatomic,readonly) float* mutablePtr; 
@property (nonatomic,readonly) NSMutableData * mutableData;              //@synthesize mutableData=_mutableData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithMutableData:(id)arg1 ;
-(NSMutableData *)mutableData;
-(void)append:(float)arg1 ;
-(float*)mutablePtr;
-(void)append:(const float*)arg1 count:(unsigned long long)arg2 ;
-(void)processValuesInPlaceWithBlock:(/*^block*/id)arg1 ;
-(void)scaleInPlaceWithInversedFactor:(float)arg1 ;
-(void)scaleInPlaceWithFactor:(float)arg1 ;
-(void)sumInPlaceWithVector:(id)arg1 ;
@end
