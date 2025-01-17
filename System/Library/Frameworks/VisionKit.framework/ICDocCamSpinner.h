/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, UIActivityIndicatorView, UIViewPropertyAnimator;

@interface ICDocCamSpinner : NSObject {

	NSDate* _showDate;
	UIActivityIndicatorView* _activityIndicator;
	double _minimumDuration;
	UIViewPropertyAnimator* _animator;

}

@property (nonatomic,retain) NSDate * showDate;                                        //@synthesize showDate=_showDate - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) double minimumDuration;                                   //@synthesize minimumDuration=_minimumDuration - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * animator;                        //@synthesize animator=_animator - In the implementation block
-(void)show;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)animator;
-(void)hide;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(NSDate *)showDate;
-(void)setShowDate:(NSDate *)arg1 ;
-(double)minimumDuration;
-(id)initWithView:(id)arg1 minimumDuration:(double)arg2 ;
-(void)setMinimumDuration:(double)arg1 ;
@end

