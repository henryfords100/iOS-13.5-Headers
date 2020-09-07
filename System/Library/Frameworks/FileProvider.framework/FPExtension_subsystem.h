/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKModularService.h>

@class NSDictionary, NSString;

@interface FPExtension_subsystem : NSObject <PKModularService> {

	BOOL _initialized;
	NSDictionary* _infoDictionary;

}

@property (nonatomic,copy) NSDictionary * infoDictionary;              //@synthesize infoDictionary=_infoDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)initForPlugInKit;
-(NSDictionary *)infoDictionary;
-(void)endUsing:(id)arg1 ;
-(void)setInfoDictionary:(NSDictionary *)arg1 ;
-(void)beginUsing:(id)arg1 withBundle:(id)arg2 ;
@end
