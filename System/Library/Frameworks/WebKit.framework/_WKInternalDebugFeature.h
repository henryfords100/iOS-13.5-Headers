/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface _WKInternalDebugFeature : NSObject <WKObject> {

	ObjectStorage<API::InternalDebugFeature> _internalDebugFeature;

}

@property (nonatomic,copy,readonly) NSString * key; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * details; 
@property (nonatomic,readonly) BOOL defaultValue; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(NSString *)key;
-(BOOL)isHidden;
-(NSString *)details;
-(BOOL)defaultValue;
-(Object*)_apiObject;
@end
