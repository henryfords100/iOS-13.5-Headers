/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsCore/IntentsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INAppInfo, NSString, NSURL, LSApplicationProxy;

@interface INCExecutionInfo : NSObject <NSCopying> {

	INAppInfo* _appInfo;
	NSString* _launchableAppBundleId;
	NSString* _displayableAppBundleId;
	NSURL* _containingAppBundleURL;

}

@property (nonatomic,readonly) LSApplicationProxy * _applicationProxy; 
@property (nonatomic,readonly) INAppInfo * _appInfo;                                //@synthesize appInfo=_appInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchableAppBundleId;               //@synthesize launchableAppBundleId=_launchableAppBundleId - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayableAppBundleId;              //@synthesize displayableAppBundleId=_displayableAppBundleId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * containingAppBundleURL;                 //@synthesize containingAppBundleURL=_containingAppBundleURL - In the implementation block
@property (nonatomic,readonly) BOOL canRunOnLocalDevice; 
+(void)initialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(INAppInfo *)_appInfo;
-(LSApplicationProxy *)_applicationProxy;
-(NSString *)displayableAppBundleId;
-(NSString *)launchableAppBundleId;
-(BOOL)canRunOnLocalDevice;
-(id)_initWithLaunchableAppBundleId:(id)arg1 displayableAppBundleId:(id)arg2 containingAppBundleURL:(id)arg3 ;
-(NSURL *)containingAppBundleURL;
@end
