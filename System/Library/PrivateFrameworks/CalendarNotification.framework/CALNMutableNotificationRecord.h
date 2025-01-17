/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <CalendarNotification/CALNNotificationRecord.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CALNNotificationContent, NSDate;

@interface CALNMutableNotificationRecord : CALNNotificationRecord <NSCopying>

@property (nonatomic,copy) NSString * sourceIdentifier; 
@property (nonatomic,copy) NSString * sourceClientIdentifier; 
@property (nonatomic,copy) CALNNotificationContent * content; 
@property (nonatomic,copy) NSDate * date; 
@property (assign,nonatomic) BOOL shouldPresentAlert; 
@property (assign,nonatomic) BOOL shouldPlaySound; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setContent:(CALNNotificationContent *)arg1 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(void)setSourceClientIdentifier:(NSString *)arg1 ;
-(void)setShouldPresentAlert:(BOOL)arg1 ;
-(void)setShouldPlaySound:(BOOL)arg1 ;
@end

