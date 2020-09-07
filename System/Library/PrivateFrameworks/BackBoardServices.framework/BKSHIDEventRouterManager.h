/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_BKSHIDEventRouterDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue, BSInvalidatable;
@class BKSHIDEventDeliveryManager, NSObject, NSMutableArray, NSArray, NSString;

@interface BKSHIDEventRouterManager : NSObject <_BKSHIDEventRouterDelegate, BSDescriptionProviding> {

	BKSHIDEventDeliveryManager* _deliveryManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_routers;
	BOOL _queue_needsFlush;
	id<BSInvalidatable> _queue_dispatchingRulesAssertion;

}

@property (nonatomic,retain) NSArray * eventRouters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_queue_routerDidChange:(id)arg1 ;
-(id)_initWithDeliveryManager:(id)arg1 ;
-(NSArray *)eventRouters;
-(void)setEventRouters:(NSArray *)arg1 ;
-(id)_targetForDestination:(long long)arg1 ;
-(void)_queue_flush;
-(id)_queue_succinctDescriptionBuilder;
@end
