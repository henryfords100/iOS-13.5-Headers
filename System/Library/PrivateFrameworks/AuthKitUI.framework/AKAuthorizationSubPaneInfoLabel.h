/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AKAuthorizationSubPane.h>

@class UILabel, NSString;

@interface AKAuthorizationSubPaneInfoLabel : AKAuthorizationSubPane {

	double _marginInset;
	UILabel* _infoLabel;
	unsigned long long _internalInfoLabelType;

}

@property (nonatomic,readonly) UILabel * infoLabel;                                 //@synthesize infoLabel=_infoLabel - In the implementation block
@property (assign,nonatomic) unsigned long long internalInfoLabelType;              //@synthesize internalInfoLabelType=_internalInfoLabelType - In the implementation block
@property (nonatomic,copy) NSString * string; 
@property (assign,nonatomic) double marginInset;                                    //@synthesize marginInset=_marginInset - In the implementation block
@property (assign,nonatomic) unsigned long long infoLabelType; 
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)titleFont;
-(UILabel *)infoLabel;
-(void)setMarginInset:(double)arg1 ;
-(void)addToStackView:(id)arg1 context:(id)arg2 ;
-(void)addToConstraints:(id)arg1 context:(id)arg2 ;
-(void)setInfoLabelType:(unsigned long long)arg1 ;
-(id)infoLabelWithString:(id)arg1 ;
-(double)marginInset;
-(id)messageFont;
-(unsigned long long)internalInfoLabelType;
-(void)setInternalInfoLabelType:(unsigned long long)arg1 ;
-(void)setLabel:(id)arg1 toInfoLabelType:(unsigned long long)arg2 ;
-(unsigned long long)infoLabelType;
@end
