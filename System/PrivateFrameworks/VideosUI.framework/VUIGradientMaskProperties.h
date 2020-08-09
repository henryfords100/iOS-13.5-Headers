/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideosUI/VideosUI-Structs.h>
@interface VUIGradientMaskProperties : NSObject {

	CGSize _minLengths;
	UIEdgeInsets _minPadding;

}

@property (assign,nonatomic) UIEdgeInsets minPadding;              //@synthesize minPadding=_minPadding - In the implementation block
@property (assign,nonatomic) CGSize minLengths;                    //@synthesize minLengths=_minLengths - In the implementation block
+(id)defaultGradientMaskProperties;
-(UIEdgeInsets)minPadding;
-(void)setMinPadding:(UIEdgeInsets)arg1 ;
-(CGSize)minLengths;
-(void)setMinLengths:(CGSize)arg1 ;
@end
