/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface HKPPTPluginManager : NSObject {

	NSMutableDictionary* _testClasses;
	NSMutableDictionary* _builtinTests;

}
+(id)sharedPluginManager;
-(id)init;
-(void)_loadPPTBundles;
-(void)registerDriverClass:(Class)arg1 ;
-(id)builtinTests;
-(Class)classForTestType:(id)arg1 ;
@end
