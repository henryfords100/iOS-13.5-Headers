/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVKit/AVKit-Structs.h>
@class UIFont, UITraitCollection;

@interface AVStyleSheet : NSObject {

	BOOL _shouldUseCompactFullScreenSize;
	UIFont* _scrubberTimeLabelFont;
	UIFont* _scrubberInfoLabelFont;
	UIFont* _infoLabelFont;
	double _standardPadding;
	double _standardInteritemPadding;
	double _additionalInlinePaddingForDodgingSafeArea;
	double _volumeSliderInlineWidth;
	double _volumeSliderCompactFullScreenWidth;
	double _volumeSliderRegularFullScreenWidth;
	double _volumeSliderPadding;
	double _minimumProminentPlayButtonDimension;
	double _maximumProminentPlayButtonDimension;
	double _maximumTransportControlsWidth;
	double _maximumMultiRowTransportControlsWidth;
	double _minimumTransportControlsWidth;
	double _minimumScrubberWidth;
	double _playButtonCenterToBottomDistance;
	double _scrubberCenterToScrubInstructionsDistance;
	double _elapsedTimeLabelBaselineToControlsBottomDistance;
	double _elapsedTimeLabelTopToScrubberCenterYDistance;
	double _scrubberCenterYToControlsTopMinimumDistance;
	double _liveBroadcastLabelTopToBackdropTopDistance;
	double _scrubberInstructionsTopToBackdropTopDistance;
	double _scrubberInstructionsMinimumRequiredWidth;
	UITraitCollection* _traitCollection;
	CGSize _defaultItemInlineSize;
	CGSize _defaultItemFullScreenSize;
	CGSize _routePickerButtonInlineSize;
	CGSize _routePickerButtonFullScreenSize;

}

@property (assign,nonatomic) BOOL shouldUseCompactFullScreenSize;                                    //@synthesize shouldUseCompactFullScreenSize=_shouldUseCompactFullScreenSize - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                                    //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) CGSize defaultItemInlineSize;                                         //@synthesize defaultItemInlineSize=_defaultItemInlineSize - In the implementation block
@property (nonatomic,readonly) CGSize defaultItemFullScreenSize;                                     //@synthesize defaultItemFullScreenSize=_defaultItemFullScreenSize - In the implementation block
@property (nonatomic,readonly) double standardPadding;                                               //@synthesize standardPadding=_standardPadding - In the implementation block
@property (nonatomic,readonly) double standardInteritemPadding;                                      //@synthesize standardInteritemPadding=_standardInteritemPadding - In the implementation block
@property (nonatomic,readonly) double additionalInlinePaddingForDodgingSafeArea;                     //@synthesize additionalInlinePaddingForDodgingSafeArea=_additionalInlinePaddingForDodgingSafeArea - In the implementation block
@property (nonatomic,readonly) CGSize routePickerButtonInlineSize;                                   //@synthesize routePickerButtonInlineSize=_routePickerButtonInlineSize - In the implementation block
@property (nonatomic,readonly) CGSize routePickerButtonFullScreenSize;                               //@synthesize routePickerButtonFullScreenSize=_routePickerButtonFullScreenSize - In the implementation block
@property (nonatomic,readonly) double volumeSliderInlineWidth;                                       //@synthesize volumeSliderInlineWidth=_volumeSliderInlineWidth - In the implementation block
@property (nonatomic,readonly) double volumeSliderCompactFullScreenWidth;                            //@synthesize volumeSliderCompactFullScreenWidth=_volumeSliderCompactFullScreenWidth - In the implementation block
@property (nonatomic,readonly) double volumeSliderRegularFullScreenWidth;                            //@synthesize volumeSliderRegularFullScreenWidth=_volumeSliderRegularFullScreenWidth - In the implementation block
@property (nonatomic,readonly) double volumeSliderPadding;                                           //@synthesize volumeSliderPadding=_volumeSliderPadding - In the implementation block
@property (nonatomic,readonly) double minimumProminentPlayButtonDimension;                           //@synthesize minimumProminentPlayButtonDimension=_minimumProminentPlayButtonDimension - In the implementation block
@property (nonatomic,readonly) double maximumProminentPlayButtonDimension;                           //@synthesize maximumProminentPlayButtonDimension=_maximumProminentPlayButtonDimension - In the implementation block
@property (nonatomic,readonly) double maximumTransportControlsWidth;                                 //@synthesize maximumTransportControlsWidth=_maximumTransportControlsWidth - In the implementation block
@property (nonatomic,readonly) double maximumMultiRowTransportControlsWidth;                         //@synthesize maximumMultiRowTransportControlsWidth=_maximumMultiRowTransportControlsWidth - In the implementation block
@property (nonatomic,readonly) double minimumTransportControlsWidth;                                 //@synthesize minimumTransportControlsWidth=_minimumTransportControlsWidth - In the implementation block
@property (nonatomic,readonly) double minimumScrubberWidth;                                          //@synthesize minimumScrubberWidth=_minimumScrubberWidth - In the implementation block
@property (nonatomic,readonly) double playButtonCenterToBottomDistance;                              //@synthesize playButtonCenterToBottomDistance=_playButtonCenterToBottomDistance - In the implementation block
@property (nonatomic,readonly) double scrubberCenterToScrubInstructionsDistance;                     //@synthesize scrubberCenterToScrubInstructionsDistance=_scrubberCenterToScrubInstructionsDistance - In the implementation block
@property (nonatomic,readonly) double elapsedTimeLabelBaselineToControlsBottomDistance;              //@synthesize elapsedTimeLabelBaselineToControlsBottomDistance=_elapsedTimeLabelBaselineToControlsBottomDistance - In the implementation block
@property (nonatomic,readonly) double elapsedTimeLabelTopToScrubberCenterYDistance;                  //@synthesize elapsedTimeLabelTopToScrubberCenterYDistance=_elapsedTimeLabelTopToScrubberCenterYDistance - In the implementation block
@property (nonatomic,readonly) double scrubberCenterYToControlsTopMinimumDistance;                   //@synthesize scrubberCenterYToControlsTopMinimumDistance=_scrubberCenterYToControlsTopMinimumDistance - In the implementation block
@property (nonatomic,readonly) double liveBroadcastLabelTopToBackdropTopDistance;                    //@synthesize liveBroadcastLabelTopToBackdropTopDistance=_liveBroadcastLabelTopToBackdropTopDistance - In the implementation block
@property (nonatomic,readonly) double scrubberInstructionsTopToBackdropTopDistance;                  //@synthesize scrubberInstructionsTopToBackdropTopDistance=_scrubberInstructionsTopToBackdropTopDistance - In the implementation block
@property (nonatomic,readonly) double scrubberInstructionsMinimumRequiredWidth;                      //@synthesize scrubberInstructionsMinimumRequiredWidth=_scrubberInstructionsMinimumRequiredWidth - In the implementation block
@property (nonatomic,readonly) UIFont * infoLabelFont;                                               //@synthesize infoLabelFont=_infoLabelFont - In the implementation block
@property (nonatomic,readonly) UIFont * scrubberTimeLabelFont;                                       //@synthesize scrubberTimeLabelFont=_scrubberTimeLabelFont - In the implementation block
@property (nonatomic,readonly) UIFont * scrubberInfoLabelFont;                                       //@synthesize scrubberInfoLabelFont=_scrubberInfoLabelFont - In the implementation block
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(double)standardPadding;
-(id)initWithTraitCollection:(id)arg1 shouldUseCompactFullScreenSize:(BOOL)arg2 ;
-(UIEdgeInsets)playbackControlsViewLayoutMarginsForView:(id)arg1 keyboardHeight:(double)arg2 isFullScreen:(BOOL)arg3 ;
-(UIFont *)scrubberInfoLabelFont;
-(UIFont *)scrubberTimeLabelFont;
-(UIFont *)infoLabelFont;
-(void)_loadFontsIfNeeded;
-(CGSize)defaultItemInlineSize;
-(CGSize)defaultItemFullScreenSize;
-(double)standardInteritemPadding;
-(double)additionalInlinePaddingForDodgingSafeArea;
-(CGSize)routePickerButtonInlineSize;
-(CGSize)routePickerButtonFullScreenSize;
-(double)volumeSliderInlineWidth;
-(double)volumeSliderCompactFullScreenWidth;
-(double)volumeSliderRegularFullScreenWidth;
-(double)volumeSliderPadding;
-(double)minimumProminentPlayButtonDimension;
-(double)maximumProminentPlayButtonDimension;
-(double)maximumTransportControlsWidth;
-(double)maximumMultiRowTransportControlsWidth;
-(double)minimumTransportControlsWidth;
-(double)minimumScrubberWidth;
-(double)playButtonCenterToBottomDistance;
-(double)scrubberCenterToScrubInstructionsDistance;
-(double)elapsedTimeLabelBaselineToControlsBottomDistance;
-(double)elapsedTimeLabelTopToScrubberCenterYDistance;
-(double)scrubberCenterYToControlsTopMinimumDistance;
-(double)liveBroadcastLabelTopToBackdropTopDistance;
-(double)scrubberInstructionsTopToBackdropTopDistance;
-(double)scrubberInstructionsMinimumRequiredWidth;
-(BOOL)shouldUseCompactFullScreenSize;
-(void)setShouldUseCompactFullScreenSize:(BOOL)arg1 ;
@end
