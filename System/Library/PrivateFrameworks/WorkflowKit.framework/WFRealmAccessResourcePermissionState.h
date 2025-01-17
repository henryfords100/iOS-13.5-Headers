/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/RLMObject.h>

@class NSString, NSData, RLMLinkingObjects;

@interface WFRealmAccessResourcePermissionState : RLMObject {

	NSString* _identifier;
	NSData* _data;
	RLMLinkingObjects* _trustedResources;

}

@property (copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSData * data;                                         //@synthesize data=_data - In the implementation block
@property (readonly) RLMLinkingObjects * trustedResources;              //@synthesize trustedResources=_trustedResources - In the implementation block
+(id)requiredProperties;
+(id)linkingObjectsProperties;
-(NSData *)data;
-(NSString *)identifier;
-(void)setData:(NSData *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(RLMLinkingObjects *)trustedResources;
@end

