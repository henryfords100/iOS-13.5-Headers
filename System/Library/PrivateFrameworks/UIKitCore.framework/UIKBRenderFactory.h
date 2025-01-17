/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIKBRenderingContext, NSMutableArray, NSArray, UIKBRenderConfig;

@interface UIKBRenderFactory : NSObject {

	UIKBRenderingContext* _renderingContext;
	NSMutableArray* _segmentTraits;
	BOOL _suppressSegmentTraits;
	double _rivenSizeFactor;
	BOOL _lightweightFactory;
	double _scale;
	CGSize _stretchFactor;
	BOOL _boldTextEnabled;
	BOOL _increasedContrastEnabled;
	BOOL _allowsPaddles;
	BOOL _preferStringKeycapOverImage;
	BOOL _drawsOneHandedAffordance;

}

@property (nonatomic,readonly) NSArray * segmentTraits;                                //@synthesize segmentTraits=_segmentTraits - In the implementation block
@property (assign,nonatomic) double rivenSizeFactor;                                   //@synthesize rivenSizeFactor=_rivenSizeFactor - In the implementation block
@property (assign,nonatomic) BOOL lightweightFactory;                                  //@synthesize lightweightFactory=_lightweightFactory - In the implementation block
@property (assign,nonatomic) BOOL increasedContrastEnabled;                            //@synthesize increasedContrastEnabled=_increasedContrastEnabled - In the implementation block
@property (assign,nonatomic) double scale;                                             //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGSize stretchFactor;                                     //@synthesize stretchFactor=_stretchFactor - In the implementation block
@property (nonatomic,retain) UIKBRenderingContext * renderingContext;                  //@synthesize renderingContext=_renderingContext - In the implementation block
@property (getter=renderConfig,readonly) UIKBRenderConfig * renderConfig; 
@property (assign,nonatomic) BOOL allowsPaddles;                                       //@synthesize allowsPaddles=_allowsPaddles - In the implementation block
@property (assign,nonatomic) BOOL preferStringKeycapOverImage;                         //@synthesize preferStringKeycapOverImage=_preferStringKeycapOverImage - In the implementation block
@property (nonatomic,readonly) BOOL boldTextEnabled;                                   //@synthesize boldTextEnabled=_boldTextEnabled - In the implementation block
@property (assign,nonatomic) BOOL drawsOneHandedAffordance;                            //@synthesize drawsOneHandedAffordance=_drawsOneHandedAffordance - In the implementation block
+(BOOL)_enabled;
+(long long)_graphicsQuality;
+(id)factoryForVisualStyle:(SCD_Struct_UI79)arg1 renderingContext:(id)arg2 ;
+(id)cacheKeyForString:(id)arg1 withRenderFlags:(long long)arg2 renderingContext:(id)arg3 ;
+(BOOL)couldUseGlyphSelectorForDisplayString:(id)arg1 ;
+(Class)factoryClassForVisualStyle:(SCD_Struct_UI79)arg1 ;
+(id)factoryForVisualStyle:(SCD_Struct_UI79)arg1 renderingContext:(id)arg2 skipLayoutSegments:(BOOL)arg3 ;
+(id)_characterSetForGlyphSelectors;
+(id)lightweightFactoryForVisualStyle:(SCD_Struct_UI79)arg1 renderingContext:(id)arg2 ;
+(id)segmentedControlColor:(BOOL)arg1 ;
-(void)dealloc;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(UIKBRenderConfig *)renderConfig;
-(id)traitsForKey:(id)arg1 onKeyplane:(id)arg2 ;
-(CGSize)stretchFactor;
-(void)setStretchFactor:(CGSize)arg1 ;
-(UIKBRenderingContext *)renderingContext;
-(BOOL)preferStringKeycapOverImage;
-(void)setRenderingContext:(UIKBRenderingContext *)arg1 ;
-(id)displayContentsForKey:(id)arg1 ;
-(id)defaultKeyBackgroundColorName;
-(CGPoint)dualStringKeyBottomTextOffset:(id)arg1 keyplane:(id)arg2 ;
-(CGPoint)dualStringKeyTopTextOffset:(id)arg1 keyplane:(id)arg2 ;
-(id)backgroundTraitsForKeyplane:(id)arg1 ;
-(BOOL)popupKeyUsesCustomKeyContentView:(id)arg1 ;
-(Class)contentViewClassForPopupKey:(id)arg1 ;
-(id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(BOOL)arg2 ;
-(void)setLightweightFactory:(BOOL)arg1 ;
-(double)keyCornerRadius;
-(double)emojiPopupDividerKeyOffset;
-(void)setupLayoutSegments;
-(double)RivenFactor:(double)arg1 ;
-(CGPoint)RivenPointFactor:(CGPoint)arg1 ;
-(void)scaleTraits:(id)arg1 ;
-(id)lowQualityLayeredBackgroundColorName;
-(void)lowQualityTraits:(id)arg1 ;
-(long long)enabledBlendForm;
-(id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2 ;
-(NSArray *)segmentTraits;
-(BOOL)lightweightFactory;
-(id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 withSymbolStyle:(id)arg3 controlOpacities:(BOOL)arg4 blurBlending:(BOOL)arg5 ;
-(id)hashStringElement;
-(BOOL)keyIsRightToLeftSensitive:(id)arg1 ;
-(BOOL)useBlueThemingForKey:(id)arg1 ;
-(id)deleteKeyImageName;
-(id)deleteOnKeyImageName;
-(id)shiftKeyImageName;
-(id)shiftLockImageName;
-(id)shiftOnKeyImageName;
-(double)skinnyKeyThreshold;
-(id)keyImageNameWithSkinnyVariation:(id)arg1 ;
-(id)handwritingMoreKeyImageName;
-(id)messagesWriteboardKeyImageName;
-(id)globalEmojiKeyImageName;
-(id)globalKeyImageName;
-(id)dismissKeyImageName;
-(id)dictationKeyImageName;
-(id)leftArrowKeyImageName;
-(id)rightArrowKeyImageName;
-(id)cutKeyImageName;
-(id)copyKeyImageName;
-(id)pasteKeyImageName;
-(id)undoKeyImageName;
-(id)boldKeyImageName;
-(id)biuKeyImageName;
-(id)multitapCompleteKeyImageName;
-(id)muttitapReverseKeyImageName;
-(id)ZWNJKeyImageName;
-(BOOL)shouldClearBaseDisplayStringForVariants:(id)arg1 ;
-(void)applyBoldTextForContent:(id)arg1 withKey:(id)arg2 ;
-(long long)lightHighQualityEnabledBlendForm;
-(id)_controlKeyBackgroundColorName;
-(id)defaultKeyShadowColorName;
-(void)setPreferStringKeycapOverImage:(BOOL)arg1 ;
-(void)modifyTraitsForDetachedInputSwitcher:(id)arg1 withKey:(id)arg2 ;
-(void)modifyTraitsForDividerVariant:(id)arg1 withKey:(id)arg2 ;
-(double)translucentGapWidth;
-(BOOL)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2 ;
-(id)spaceKeyGrabberHandlesImageName;
-(void)addLayoutSegment:(id)arg1 ;
-(void)suppressLayoutSegments;
-(id)controlKeyBackgroundColorName;
-(id)controlKeyForegroundColorName;
-(id)controlKeyShadowColorName;
-(id)lightKeycapsFontName;
-(id)thinKeycapsFontName;
-(id)lightPadKeycapsFontName;
-(id)lightTextFontName;
-(id)thinTextFontName;
-(void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4 ;
-(long long)glyphSelectorForDisplayString:(id)arg1 ;
-(double)rivenSizeFactor;
-(void)setRivenSizeFactor:(double)arg1 ;
-(BOOL)boldTextEnabled;
-(BOOL)increasedContrastEnabled;
-(void)setIncreasedContrastEnabled:(BOOL)arg1 ;
-(BOOL)allowsPaddles;
-(void)setAllowsPaddles:(BOOL)arg1 ;
-(BOOL)drawsOneHandedAffordance;
-(void)setDrawsOneHandedAffordance:(BOOL)arg1 ;
-(double)passcodeEdgeWeight;
-(id)passcodeKeyEdgeColorName;
-(id)passcodeActiveControlKeyTraits;
-(void)modifyKeyTraitsForPasscode:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3 ;
-(id)passcodeBackgroundTraitsForKeyplane:(id)arg1 ;
-(id)passcodeControlKeyTraits;
-(id)passcodeShiftedControlKeyTraits;
-(id)extraPasscodePaddleTraits;
@end

