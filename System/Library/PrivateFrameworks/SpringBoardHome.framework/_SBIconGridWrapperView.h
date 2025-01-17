/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImageView.h>

@class _SBFolderPageElement, SBFolderIconImageView;

@interface _SBIconGridWrapperView : UIImageView {

	_SBFolderPageElement* _element;
	SBFolderIconImageView* _folderIconImageView;

}

@property (nonatomic,retain) _SBFolderPageElement * element;                                  //@synthesize element=_element - In the implementation block
@property (assign,nonatomic,__weak) SBFolderIconImageView * folderIconImageView;              //@synthesize folderIconImageView=_folderIconImageView - In the implementation block
-(_SBFolderPageElement *)element;
-(void)setElement:(_SBFolderPageElement *)arg1 ;
-(SBFolderIconImageView *)folderIconImageView;
-(void)reposition;
-(void)positionAtRow:(unsigned long long)arg1 ;
-(void)setFolderIconImageView:(SBFolderIconImageView *)arg1 ;
@end

