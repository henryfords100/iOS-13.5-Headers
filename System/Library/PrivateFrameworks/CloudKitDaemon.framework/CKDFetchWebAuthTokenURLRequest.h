/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString;

@interface CKDFetchWebAuthTokenURLRequest : CKDURLRequest {

	NSString* _APIToken;
	/*^block*/id _tokenFetchedBlock;

}

@property (nonatomic,copy) NSString * APIToken;               //@synthesize APIToken=_APIToken - In the implementation block
@property (nonatomic,copy) id tokenFetchedBlock;              //@synthesize tokenFetchedBlock=_tokenFetchedBlock - In the implementation block
-(int)operationType;
-(NSString *)APIToken;
-(void)setAPIToken:(NSString *)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setTokenFetchedBlock:(id)arg1 ;
-(id)tokenFetchedBlock;
@end
