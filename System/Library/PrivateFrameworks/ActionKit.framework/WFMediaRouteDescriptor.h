/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSDictionary;

@interface WFMediaRouteDescriptor : MTLModel <NSSecureCoding, MTLJSONSerializing> {

	BOOL _isLocalDevice;
	NSString* _routeName;
	NSString* _groupUID;
	NSString* _routeUID;

}

@property (nonatomic,copy,readonly) NSString * routeName;                        //@synthesize routeName=_routeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupUID;                         //@synthesize groupUID=_groupUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * routeUID;                         //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,readonly) BOOL isLocalDevice;                               //@synthesize isLocalDevice=_isLocalDevice - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(BOOL)routeUID:(id)arg1 isEqualToRouteUID:(id)arg2 ;
-(NSString *)displayName;
-(NSString *)routeName;
-(NSString *)routeUID;
-(NSString *)groupUID;
-(BOOL)isLocalDevice;
-(id)initWithRouteUID:(id)arg1 groupUID:(id)arg2 routeName:(id)arg3 isLocalDevice:(BOOL)arg4 ;
-(BOOL)isEqualInRouteUIDs:(id)arg1 ;
-(id)findMatchingRoute:(id)arg1 ;
@end
