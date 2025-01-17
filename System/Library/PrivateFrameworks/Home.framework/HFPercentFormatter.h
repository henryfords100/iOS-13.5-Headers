/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Foundation/NSNumberFormatter.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface HFPercentFormatter : NSNumberFormatter <NSCopying> {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;

}

@property (nonatomic,copy) NSNumber * minimumValue;              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,copy) NSNumber * maximumValue;              //@synthesize maximumValue=_maximumValue - In the implementation block
+(id)_percentageFromValue:(id)arg1 forMinimumValue:(id)arg2 maximumValue:(id)arg3 ;
+(id)_valueFromPercentage:(id)arg1 forMinimumValue:(id)arg2 maximumValue:(id)arg3 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout NSRange*)arg3 error:(out id*)arg4 ;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(id)stringForRelativePercentValue:(id)arg1 ;
-(id)initWithMinimumValue:(id)arg1 maximumValue:(id)arg2 ;
@end

