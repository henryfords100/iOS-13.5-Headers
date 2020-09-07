/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <MusicCarDisplayUI/MCDPlayModeButton.h>

@class UIImage;

@interface MCDRepeatButton : MCDPlayModeButton {

	UIImage* _repeatImage;
	UIImage* _repeatOneImage;

}

@property (nonatomic,retain) UIImage * repeatImage;                 //@synthesize repeatImage=_repeatImage - In the implementation block
@property (nonatomic,retain) UIImage * repeatOneImage;              //@synthesize repeatOneImage=_repeatOneImage - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setRepeatType:(long long)arg1 ;
-(UIImage *)repeatOneImage;
-(UIImage *)repeatImage;
-(void)setRepeatImage:(UIImage *)arg1 ;
-(void)setRepeatOneImage:(UIImage *)arg1 ;
@end
