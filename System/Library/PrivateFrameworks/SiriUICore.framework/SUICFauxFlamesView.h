/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKitCore/UIView.h>

@interface SUICFauxFlamesView : UIView {

	long long _style;
	double _width;
	SCD_Struct_SU3 _sequenceAttributes;

}
+(id)_frameImagesForSequence:(SCD_Struct_SU3)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)prewarm;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)isAnimating;
-(void)didMoveToSuperview;
-(void)start:(BOOL)arg1 ;
-(void)stop:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 screenSize:(long long)arg2 ;
-(void)_cleanupView;
@end
