/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ICAttachmentBrickAudioPlayerViewV2Delegate.h>

@class ICAttachment, ICSearchResult, UIView, NSRegularExpression, ICAttachmentBrickFrostedView, NSLayoutConstraint, NSString, ICAttachmentBrickTextViewV2, UIImage;

@interface ICAttachmentBrickViewV2 : UIView <ICAttachmentBrickAudioPlayerViewV2Delegate> {

	BOOL _forceDefaultBrickSize;
	BOOL _forManualRendering;
	BOOL _fullHeightText;
	BOOL _showAsFileIcon;
	BOOL _frostedViewActive;
	BOOL _highlightUpdateScheduled;
	BOOL _usingConstraintsForAXLargerTextSizes;
	BOOL _layerIsInvertedForAXInvertColors;
	BOOL _vibrant;
	BOOL _disableImageUpdates;
	BOOL _disableTextUpdates;
	BOOL _disableVibrancy;
	ICAttachment* _attachment;
	ICSearchResult* _searchResult;
	UIView* _accessoryView;
	NSRegularExpression* _highlightPatternRegex;
	unsigned long long _defaultBrickSize;
	unsigned long long _brickSize;
	UIView* _backgroundView;
	ICAttachmentBrickFrostedView* _frostedView;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _textViewTopConstraint;
	NSLayoutConstraint* _textViewTrailingConstraint;
	NSLayoutConstraint* _accessoryViewWidthConstraint;
	NSLayoutConstraint* _accessoryViewHeightConstraint;
	NSLayoutConstraint* _accessoryViewVerticalConstraint;
	NSLayoutConstraint* _accessoryViewTrailingConstraint;
	long long _fileSizeCache;
	NSString* _fileSizeStringCache;
	ICAttachmentBrickTextViewV2* _textView;
	unsigned long long _brickType;
	unsigned long long _accessoryType;
	unsigned long long _imageScaling;
	UIImage* _image;
	CGSize _imageSize;

}

@property (assign,nonatomic) unsigned long long brickSize;                                      //@synthesize brickSize=_brickSize - In the implementation block
@property (assign,getter=isFullHeightText,nonatomic) BOOL fullHeightText;                       //@synthesize fullHeightText=_fullHeightText - In the implementation block
@property (assign,nonatomic) BOOL showAsFileIcon;                                               //@synthesize showAsFileIcon=_showAsFileIcon - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) ICAttachmentBrickFrostedView * frostedView;                        //@synthesize frostedView=_frostedView - In the implementation block
@property (assign,getter=isFrostedViewActive,nonatomic) BOOL frostedViewActive;                 //@synthesize frostedViewActive=_frostedViewActive - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * widthConstraint;                              //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                             //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textViewTopConstraint;                        //@synthesize textViewTopConstraint=_textViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textViewTrailingConstraint;                   //@synthesize textViewTrailingConstraint=_textViewTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewWidthConstraint;                 //@synthesize accessoryViewWidthConstraint=_accessoryViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewHeightConstraint;                //@synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewVerticalConstraint;              //@synthesize accessoryViewVerticalConstraint=_accessoryViewVerticalConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewTrailingConstraint;              //@synthesize accessoryViewTrailingConstraint=_accessoryViewTrailingConstraint - In the implementation block
@property (assign,nonatomic) long long fileSizeCache;                                           //@synthesize fileSizeCache=_fileSizeCache - In the implementation block
@property (nonatomic,copy) NSString * fileSizeStringCache;                                      //@synthesize fileSizeStringCache=_fileSizeStringCache - In the implementation block
@property (assign,nonatomic) BOOL highlightUpdateScheduled;                                     //@synthesize highlightUpdateScheduled=_highlightUpdateScheduled - In the implementation block
@property (assign,nonatomic) BOOL usingConstraintsForAXLargerTextSizes;                         //@synthesize usingConstraintsForAXLargerTextSizes=_usingConstraintsForAXLargerTextSizes - In the implementation block
@property (assign,nonatomic) BOOL layerIsInvertedForAXInvertColors;                             //@synthesize layerIsInvertedForAXInvertColors=_layerIsInvertedForAXInvertColors - In the implementation block
@property (nonatomic,retain) ICAttachmentBrickTextViewV2 * textView;                            //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                                            //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,readonly) NSString * typeDescriptionForAccessibility; 
@property (assign,nonatomic) unsigned long long brickType;                                      //@synthesize brickType=_brickType - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryType;                                  //@synthesize accessoryType=_accessoryType - In the implementation block
@property (assign,nonatomic) unsigned long long imageScaling;                                   //@synthesize imageScaling=_imageScaling - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                   //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                                  //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,getter=isVibrant,nonatomic) BOOL vibrant;                                     //@synthesize vibrant=_vibrant - In the implementation block
@property (assign,nonatomic) BOOL disableImageUpdates;                                          //@synthesize disableImageUpdates=_disableImageUpdates - In the implementation block
@property (assign,nonatomic) BOOL disableTextUpdates;                                           //@synthesize disableTextUpdates=_disableTextUpdates - In the implementation block
@property (assign,nonatomic) BOOL disableVibrancy;                                              //@synthesize disableVibrancy=_disableVibrancy - In the implementation block
@property (assign,nonatomic,__weak) ICAttachment * attachment;                                  //@synthesize attachment=_attachment - In the implementation block
@property (assign,nonatomic,__weak) ICSearchResult * searchResult;                              //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,retain) NSRegularExpression * highlightPatternRegex;                       //@synthesize highlightPatternRegex=_highlightPatternRegex - In the implementation block
@property (assign,nonatomic) BOOL forceDefaultBrickSize;                                        //@synthesize forceDefaultBrickSize=_forceDefaultBrickSize - In the implementation block
@property (assign,nonatomic) unsigned long long defaultBrickSize;                               //@synthesize defaultBrickSize=_defaultBrickSize - In the implementation block
@property (assign,nonatomic) BOOL forManualRendering;                                           //@synthesize forManualRendering=_forManualRendering - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)audioAttachmentDetail1StringWithDuration:(double)arg1 attachment:(id)arg2 brick:(id)arg3 ;
+(unsigned long long)brickTypeForAttachment:(id)arg1 ;
+(unsigned long long)maximumBrickSizeForAttachment:(id)arg1 defaultSize:(unsigned long long)arg2 ;
+(id)brickInfoForAttachment:(id)arg1 brickSize:(unsigned long long)arg2 brick:(id)arg3 ;
+(double)clampAccessoryViewScale:(double)arg1 forHorizontalSizeClass:(long long)arg2 ;
+(CGSize)imageSizeForBrickSize:(unsigned long long)arg1 ;
+(CGSize)brickSizeWithSize:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)prepareForReuse;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(ICAttachmentBrickTextViewV2 *)textView;
-(ICAttachment *)attachment;
-(void)setTextView:(ICAttachmentBrickTextViewV2 *)arg1 ;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(BOOL)accessibilityIgnoresInvertColors;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(void)updateConstraints;
-(NSLayoutConstraint *)widthConstraint;
-(NSLayoutConstraint *)heightConstraint;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)didMoveToWindow;
-(void)setContentsScale:(double)arg1 ;
-(CGSize)imageSize;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(unsigned long long)accessoryType;
-(void)setAccessoryType:(unsigned long long)arg1 ;
-(void)updateText;
-(void)updateImage;
-(void)setImageSize:(CGSize)arg1 ;
-(NSLayoutConstraint *)accessoryViewHeightConstraint;
-(void)setAccessoryViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)scaleDidChange;
-(ICSearchResult *)searchResult;
-(void)setSearchResult:(ICSearchResult *)arg1 ;
-(void)setTextViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textViewTrailingConstraint;
-(id)thumbnailCache;
-(void)setVibrant:(BOOL)arg1 ;
-(BOOL)isVibrant;
-(void)contentSizeCategoryDidChange;
-(void)updateBackgroundImage;
-(NSLayoutConstraint *)accessoryViewWidthConstraint;
-(void)setAccessoryViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateStyle;
-(unsigned long long)imageScaling;
-(void)setImageScaling:(unsigned long long)arg1 ;
-(BOOL)showAsFileIcon;
-(void)setShowAsFileIcon:(BOOL)arg1 ;
-(NSString *)typeDescriptionForAccessibility;
-(BOOL)forManualRendering;
-(void)setForManualRendering:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 defaultBrickSize:(unsigned long long)arg2 ;
-(void)setFileSizeCache:(long long)arg1 ;
-(void)setDefaultBrickSize:(unsigned long long)arg1 ;
-(void)initializeBasicViews;
-(void)attachmentDidLoadNotification:(id)arg1 ;
-(void)attachmentPreviewImagesDidUpdateNotification:(id)arg1 ;
-(void)mediaDidLoadNotification:(id)arg1 ;
-(void)locationContextAuthorizationStatusDidChangeNotification:(id)arg1 ;
-(void)updateContentFromAttachment;
-(NSRegularExpression *)highlightPatternRegex;
-(void)setHighlightPatternRegex:(NSRegularExpression *)arg1 ;
-(void)updateSearchHighlighting;
-(BOOL)highlightUpdateScheduled;
-(void)setHighlightUpdateScheduled:(BOOL)arg1 ;
-(ICAttachmentBrickFrostedView *)frostedView;
-(CGSize)computedSize;
-(void)setDisableVibrancy:(BOOL)arg1 ;
-(void)updateVibrancyIfNecessary;
-(BOOL)disableVibrancy;
-(void)setFrostedViewActive:(BOOL)arg1 ;
-(void)setFrostedView:(ICAttachmentBrickFrostedView *)arg1 ;
-(NSLayoutConstraint *)textViewTopConstraint;
-(id)createTextViewTrailingConstraint;
-(id)backgroundColorForCurrentVibrancy;
-(BOOL)isFrostedViewActive;
-(void)setTextViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateAccessoryViewShadow;
-(BOOL)usingConstraintsForAXLargerTextSizes;
-(NSLayoutConstraint *)accessoryViewVerticalConstraint;
-(void)setUsingConstraintsForAXLargerTextSizes:(BOOL)arg1 ;
-(double)layoutScaling;
-(void)updateAccessoryView;
-(void)updateBrickType;
-(void)setBrickType:(unsigned long long)arg1 ;
-(unsigned long long)defaultBrickSize;
-(unsigned long long)brickType;
-(BOOL)forceDefaultBrickSize;
-(void)setBrickSize:(unsigned long long)arg1 ;
-(void)setFullHeightText:(BOOL)arg1 ;
-(unsigned long long)brickSize;
-(void)layoutBackgroundView;
-(void)updateSearchHighlightingIfNecessary;
-(BOOL)isFullHeightText;
-(void)layoutAccessoryTypeMapMarker;
-(void)updateForAppearanceChange;
-(BOOL)disableTextUpdates;
-(void)updateFileSizeCacheStringIfNeeded;
-(NSString *)fileSizeStringCache;
-(void)clearAccessoryView;
-(CGSize)computedAccessorySize;
-(double)accessoryViewTopMarginWithAccessorySize:(CGSize)arg1 ;
-(void)setAccessoryViewVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAccessoryViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)accessoryViewTrailingConstraint;
-(void)updateAccessoryViewForAccessibilityInvertColors;
-(BOOL)disableImageUpdates;
-(long long)fileSizeCache;
-(void)setFileSizeStringCache:(NSString *)arg1 ;
-(double)clampAccessoryViewScale:(double)arg1 ;
-(void)updateSearchHighlightingForAttachmentBrickLabel:(id)arg1 ;
-(void)audioPlayerView:(id)arg1 updateTime:(double)arg2 ;
-(void)audioPlayerViewStopped:(id)arg1 ;
-(void)setAttachment:(id)arg1 forSearchResult:(id)arg2 ;
-(void)prepareForPrinting;
-(id)quickLookTransitionView;
-(void)accentColorDidChange:(id)arg1 ;
-(void)setForceDefaultBrickSize:(BOOL)arg1 ;
-(BOOL)layerIsInvertedForAXInvertColors;
-(void)setLayerIsInvertedForAXInvertColors:(BOOL)arg1 ;
-(void)setDisableImageUpdates:(BOOL)arg1 ;
-(void)setDisableTextUpdates:(BOOL)arg1 ;
@end

