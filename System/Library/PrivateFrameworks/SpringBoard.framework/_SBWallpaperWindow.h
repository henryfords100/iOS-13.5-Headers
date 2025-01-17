/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSecureWindow.h>

@protocol SBWallpaperWindowDelegate;
@class SBWallpaperDefaults;

@interface _SBWallpaperWindow : SBSecureWindow {

	SBWallpaperDefaults* _wallpaperDefaults;
	id<SBWallpaperWindowDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBWallpaperWindowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBWallpaperWindowDelegate>)delegate;
-(void)setDelegate:(id<SBWallpaperWindowDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)activeInterfaceOrientation;
-(id)initWithScreen:(id)arg1 debugName:(id)arg2 ;
-(void)_observeDefaults;
@end

