/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIDragInteraction.h>

@protocol SBAppPlatterDragSourceViewProviding;
@class UIGestureRecognizer, NSString;

@interface SBWindowDragInteraction : UIDragInteraction {

	UIGestureRecognizer* _gestureRecognizer;
	id<SBAppPlatterDragSourceViewProviding> _sourceViewProvider;
	NSString* _sceneIdentifier;
	NSString* _bundleIdentifier;

}

@property (nonatomic,__weak,readonly) UIGestureRecognizer * gestureRecognizer;                               //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<SBAppPlatterDragSourceViewProviding> sourceViewProvider;              //@synthesize sourceViewProvider=_sourceViewProvider - In the implementation block
@property (nonatomic,retain) NSString * sceneIdentifier;                                                     //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(UIGestureRecognizer *)gestureRecognizer;
-(CGPoint)_locationInView:(id)arg1 ;
-(NSString *)sceneIdentifier;
-(void)setSceneIdentifier:(NSString *)arg1 ;
-(id)initWithDelegate:(id)arg1 gestureRecognizer:(id)arg2 ;
-(void)setSourceViewProvider:(id<SBAppPlatterDragSourceViewProviding>)arg1 ;
-(id<SBAppPlatterDragSourceViewProviding>)sourceViewProvider;
@end

