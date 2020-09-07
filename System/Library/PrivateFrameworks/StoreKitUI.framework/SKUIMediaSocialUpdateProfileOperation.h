/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext, NSString, NSNumber, NSLock, NSMutableDictionary;

@interface SKUIMediaSocialUpdateProfileOperation : SSVComplexOperation {

	SKUIClientContext* _clientContext;
	NSString* _entityType;
	NSNumber* _identifier;
	NSLock* _lock;
	NSMutableDictionary* _parameters;
	/*^block*/id _outputBlock;

}

@property (copy) NSString * entityType; 
@property (copy) NSNumber * identifier; 
@property (copy) id outputBlock; 
-(NSNumber *)identifier;
-(void)main;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(NSString *)entityType;
-(void)setEntityType:(NSString *)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)initWithClientContext:(id)arg1 ;
-(void)setValue:(id)arg1 forProfileField:(id)arg2 ;
-(id)_imageDictionaryFromPhotoUpload:(id)arg1 ;
-(id)_requestWithError:(id*)arg1 ;
-(id)_requestBodyWithError:(id*)arg1 ;
@end
