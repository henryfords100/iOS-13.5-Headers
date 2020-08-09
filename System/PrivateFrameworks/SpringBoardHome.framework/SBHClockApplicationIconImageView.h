/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBLiveIconImageView.h>

@class CALayer, UIImage, NSString, SBHClockIconVisualConfiguration;

@interface SBHClockApplicationIconImageView : SBLiveIconImageView {

	CALayer* _seconds;
	CALayer* _minutes;
	CALayer* _hours;
	CALayer* _hourMinuteDot;
	CALayer* _secondDot;
	unsigned _jitterSkips;
	UIImage* _mappedContentsImage;
	UIImage* _squareMappedContentsImage;
	NSString* _currentNumberingSystem;
	SBHClockIconVisualConfiguration* _visualConfiguration;

}

@property (nonatomic,copy) NSString * currentNumberingSystem;                                  //@synthesize currentNumberingSystem=_currentNumberingSystem - In the implementation block
@property (nonatomic,copy) SBHClockIconVisualConfiguration * visualConfiguration;              //@synthesize visualConfiguration=_visualConfiguration - In the implementation block
+(void)initialize;
+(id)defaultConfiguration;
+(void)_timerFired:(id)arg1 ;
+(id)effectiveDate;
+(id)overrideDate;
+(id)systemNumberingSystem;
+(id)generateProcessedMappedIconImageWithName:(id)arg1 imageInfo:(SBIconImageInfo)arg2 includingMask:(BOOL)arg3 ;
+(void)setOverrideDate:(id)arg1 ;
+(void)_handleTimeChange:(id)arg1 ;
-(void)prepareForReuse;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)contentsImage;
-(id)backgroundImageName;
-(void)_setAnimating:(BOOL)arg1 ;
-(void)localeDidChange:(id)arg1 ;
-(void)applyConfiguration:(id)arg1 ;
-(void)updateUnanimated;
-(void)updateAnimatingState;
-(BOOL)isAnimationAllowed;
-(void)setJittering:(BOOL)arg1 ;
-(void)_timerFiredWithComponents:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)_updateUnanimatedWithComponents:(id)arg1 ;
-(void)setVisualConfiguration:(SBHClockIconVisualConfiguration *)arg1 ;
-(SBHClockIconVisualConfiguration *)visualConfiguration;
-(NSString *)currentNumberingSystem;
-(void)setCurrentNumberingSystem:(NSString *)arg1 ;
-(id)squareContentsImage;
@end
