/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoInteractionObserverFactory.h>

@protocol SVVideoEventTrackerProviding;
@class NSString;

@interface SVMoreFromInteractionObserverFactory : NSObject <SVVideoInteractionObserverFactory> {

	id<SVVideoEventTrackerProviding> _eventTrackerProvider;

}

@property (nonatomic,readonly) id<SVVideoEventTrackerProviding> eventTrackerProvider;              //@synthesize eventTrackerProvider=_eventTrackerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoEventTrackerProviding>)eventTrackerProvider;
-(id)createInteractionObserverForVideo:(id)arg1 ;
-(id)initWithVideoEventTrackerProvider:(id)arg1 ;
@end

