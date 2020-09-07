/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface CAMReviewButton : UIButton {

	unsigned long long __numberOfCaptures;

}

@property (assign,setter=_setNumberOfCaptures:,nonatomic) unsigned long long _numberOfCaptures;              //@synthesize _numberOfCaptures=__numberOfCaptures - In the implementation block
+(id)_sharedNumberOfCapturesFormatter;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_localizedTitleForNumberOfCaptures;
-(void)_commonCAMReviewButtonInitialization;
-(unsigned long long)_numberOfCaptures;
-(void)_setNumberOfCaptures:(unsigned long long)arg1 ;
@end
