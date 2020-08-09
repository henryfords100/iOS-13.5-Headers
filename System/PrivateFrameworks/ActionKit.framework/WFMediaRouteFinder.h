/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFMediaRoutePickerObserver.h>

@class WFMediaRoutePicker, WFMediaRouteDescriptor, WFDispatchSourceTimer;

@interface WFMediaRouteFinder : NSObject <WFMediaRoutePickerObserver> {

	WFMediaRoutePicker* _picker;
	/*^block*/id _completionHandler;
	WFMediaRouteDescriptor* _routeDescriptor;
	double _timeout;
	WFDispatchSourceTimer* _timer;

}

@property (nonatomic,readonly) id completionHandler;                                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) WFMediaRouteDescriptor * routeDescriptor;              //@synthesize routeDescriptor=_routeDescriptor - In the implementation block
@property (nonatomic,readonly) double timeout;                                        //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) WFDispatchSourceTimer * timer;                         //@synthesize timer=_timer - In the implementation block
@property (nonatomic,__weak,readonly) WFMediaRoutePicker * picker;                    //@synthesize picker=_picker - In the implementation block
-(void)start;
-(WFDispatchSourceTimer *)timer;
-(double)timeout;
-(id)completionHandler;
-(WFMediaRoutePicker *)picker;
-(WFMediaRouteDescriptor *)routeDescriptor;
-(void)routePickerDidUpdateAvailableRoutes:(id)arg1 ;
-(id)initWithPicker:(id)arg1 routeDescriptor:(id)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
@end
