/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSArray;

@interface HKTimeScopeControl : UIControl {

	NSArray* _timeScopes;
	BOOL _shortTextStyle;
	long long _selectedTimeScope;

}

@property (assign,nonatomic) long long selectedTimeScope;              //@synthesize selectedTimeScope=_selectedTimeScope - In the implementation block
+(id)controlWithFrame:(CGRect)arg1 style:(long long)arg2 timeScopes:(id)arg3 shortTextStyle:(BOOL)arg4 ;
-(id)initWithFrame:(CGRect)arg1 timeScopes:(id)arg2 shortTextStyle:(BOOL)arg3 ;
-(long long)_timeScopeForIndex:(long long)arg1 ;
-(long long)_indexForTimeScope:(long long)arg1 ;
-(long long)selectedTimeScope;
-(void)setSelectedTimeScope:(long long)arg1 ;
@end

