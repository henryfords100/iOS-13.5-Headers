/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleBackdropCALayer : FigBaseCALayer {

	OpaqueFigSubtitleBackdropCALayerInternal* bdLayerInternal;

}
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setNeedsLayout;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setNeedsDisplay;
-(BOOL)shouldEnableBackdropLayer;
-(void)updateBackdropLayer;
-(void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(void)updateWindowOpacity:(double)arg1 ;
-(void)updateHDRContentState:(BOOL)arg1 ;
@end

