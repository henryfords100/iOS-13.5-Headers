/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/HFCharacteristicReadPolicy.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, NSString;

@interface HFAggregatedCharacteristicReadPolicy : NSObject <HFCharacteristicReadPolicy, NSCopying, NSMutableCopying> {

	NSArray* _policies;

}

@property (nonatomic,readonly) NSArray * policies;                  //@synthesize policies=_policies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)policies;
-(id)initWithPolicies:(id)arg1 ;
-(unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id*)arg2 ;
@end

