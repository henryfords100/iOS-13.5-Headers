/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMDisabledPreviewControllerDelegate;
@class NSMutableSet;

@interface CAMDisabledPreviewController : NSObject {

	id<CAMDisabledPreviewControllerDelegate> _delegate;
	NSMutableSet* __reasonsForDisablingPreview;

}

@property (nonatomic,readonly) NSMutableSet * _reasonsForDisablingPreview;                          //@synthesize _reasonsForDisablingPreview=__reasonsForDisablingPreview - In the implementation block
@property (assign,nonatomic,__weak) id<CAMDisabledPreviewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPreviewDisabled,nonatomic,readonly) BOOL previewDisabled; 
-(id)init;
-(id<CAMDisabledPreviewControllerDelegate>)delegate;
-(void)setDelegate:(id<CAMDisabledPreviewControllerDelegate>)arg1 ;
-(void)addDisabledPreviewReason:(long long)arg1 ;
-(void)removeDisabledPreviewReason:(long long)arg1 ;
-(BOOL)isPreviewDisabled;
-(id)_descriptionStringForReason:(long long)arg1 ;
-(id)_descriptionForReasons:(id)arg1 ;
-(NSMutableSet *)_reasonsForDisablingPreview;
@end
