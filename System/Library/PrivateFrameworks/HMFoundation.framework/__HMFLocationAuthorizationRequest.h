/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/__HMFLocationManagerOperation.h>
#import <HMFoundation/HMFLogging.h>

@class NSString;

@interface __HMFLocationAuthorizationRequest : __HMFLocationManagerOperation <HMFLogging> {

	BOOL _requested;
	long long _type;

}

@property (readonly) long long type;                                //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(long long)type;
-(void)main;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithType:(long long)arg1 ;
-(id)initWithTimeout:(double)arg1 ;
-(id)initWithType:(long long)arg1 authorization:(id)arg2 ;
-(id)initWithAuthorization:(id)arg1 ;
@end

