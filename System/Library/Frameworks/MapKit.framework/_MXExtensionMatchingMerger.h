/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface _MXExtensionMatchingMerger : NSObject {

	NSObject*<OS_dispatch_queue> _lock;
	NSArray* _mapExtensions;
	NSArray* _intentNonUIExtensions;
	NSArray* _intentUIExtensions;

}
-(id)init;
-(id)receiveExtensions:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(void)clearExtensions;
@end

