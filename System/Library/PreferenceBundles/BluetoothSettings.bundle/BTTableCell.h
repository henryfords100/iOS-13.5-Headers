/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface BTTableCell : PSTableCell {

	BOOL _hasLimitedConnectivity;
	int _state;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) int state;                                      //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasLimitedConnectivity;                    //@synthesize hasLimitedConnectivity=_hasLimitedConnectivity - In the implementation block
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)layoutSubviews;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setDeviceState:(int)arg1 ;
-(void)setDeviceStatePaired:(BOOL)arg1 andConnected:(BOOL)arg2 ;
-(BOOL)hasLimitedConnectivity;
-(void)setHasLimitedConnectivity:(BOOL)arg1 ;
@end

