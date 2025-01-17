/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VisionKit/VisionKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSProgress, CAShapeLayer;

@interface DCCircularProgressView : UIView {

	double _progress;
	NSProgress* _observedProgress;
	CAShapeLayer* _circleLayer;

}

@property (nonatomic,retain) CAShapeLayer * circleLayer;                 //@synthesize circleLayer=_circleLayer - In the implementation block
@property (assign,nonatomic) double progress;                            //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSProgress * observedProgress;              //@synthesize observedProgress=_observedProgress - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(void)awakeFromNib;
-(NSProgress *)observedProgress;
-(void)setObservedProgress:(NSProgress *)arg1 ;
-(CAShapeLayer *)circleLayer;
-(CGPathRef)newPathForProgress:(double)arg1 ;
-(void)setCircleLayer:(CAShapeLayer *)arg1 ;
@end

