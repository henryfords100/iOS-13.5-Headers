/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionPredictionHeuristicsInternal/ATXHeuristicCacheExpirer.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_source;
@class NSObject, NSDate;

@interface ATXHeuristicCacheTimeExpirer : ATXHeuristicCacheExpirer <NSSecureCoding> {

	NSObject*<OS_dispatch_source> _source;
	NSDate* _fireDate;

}

@property (nonatomic,readonly) NSDate * fireDate;              //@synthesize fireDate=_fireDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)fireDate;
-(void)_start;
-(void)_stop;
-(id)initWithFireDate:(id)arg1 ;
@end
