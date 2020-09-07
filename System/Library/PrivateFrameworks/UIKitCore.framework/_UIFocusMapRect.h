/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusMapArea.h>

@protocol UICoordinateSpace;
@class NSString;

@interface _UIFocusMapRect : NSObject <_UIFocusMapArea> {

	id<UICoordinateSpace> _coordinateSpace;
	CGRect _frame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> coordinateSpace;              //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                              //@synthesize frame=_frame - In the implementation block
-(CGRect)frame;
-(id<UICoordinateSpace>)coordinateSpace;
-(BOOL)intersectsRect:(CGRect)arg1 ;
-(BOOL)intersectsRegion:(id)arg1 ;
-(id)intersectionWithRegion:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 coordinateSpace:(id)arg2 ;
@end
