/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UINotificationFeedbackGenerator, UIImpactFeedbackGenerator, _UIDragSnappingFeedbackGenerator;

@interface MKHapticEngine : NSObject {

	UINotificationFeedbackGenerator* _notificationGenerator;
	UIImpactFeedbackGenerator* _feedbackGenerator;
	_UIDragSnappingFeedbackGenerator* _dragSnappingGenerator;
	BOOL _isDragging;

}
-(id)init;
-(void)prepare;
-(void)draggedObjectLifted;
-(void)draggedObjectLanded;
-(void)playFailure;
-(void)playSuccess;
@end

