/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface STDowntime : NSManagedObject

@property (nonatomic,copy) NSString * calendarIdentifier; 
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL canAskForMoreTime; 
@property (nonatomic,copy) NSSet * schedule; 
-(void)setStartHour:(long long)arg1 startMinute:(long long)arg2 endHour:(long long)arg3 endMinute:(long long)arg4 ;
@end
