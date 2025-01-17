/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBPhoneAlertItem : SBAlertItem {

	NSString* _bodyText;
	NSString* _title;
	long long _slot;

}

@property (nonatomic,readonly) long long slot;              //@synthesize slot=_slot - In the implementation block
-(long long)slot;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(id)initWithTitle:(id)arg1 bodyText:(id)arg2 slot:(long long)arg3 ;
@end

