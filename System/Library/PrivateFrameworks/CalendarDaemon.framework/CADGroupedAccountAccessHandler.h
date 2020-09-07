/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CADAccountAccessHandler.h>

@class NSMutableArray;

@interface CADGroupedAccountAccessHandler : NSObject <CADAccountAccessHandler> {

	NSMutableArray* _accessHandlers;

}

@property (nonatomic,readonly) NSMutableArray * accessHandlers;              //@synthesize accessHandlers=_accessHandlers - In the implementation block
-(id)init;
-(void)reset;
-(BOOL)isAccountManaged:(id)arg1 ;
-(BOOL)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2 ;
-(id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1 ;
-(NSMutableArray *)accessHandlers;
-(void)addAccountAccessHandler:(id)arg1 ;
@end
