/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDSQLitePropertyPredicate : HDSQLitePredicate <NSCopying> {

	NSString* _property;

}

@property (nonatomic,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)property;
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
-(BOOL)isCompatibleWithPredicate:(id)arg1 ;
@end
