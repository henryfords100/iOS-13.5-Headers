/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@interface PKPeerPaymentPerformActionResponse : PKPeerPaymentWebServiceResponse {

	BOOL _success;
	long long _status;

}

@property (nonatomic,readonly) BOOL success;                  //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) long long status;              //@synthesize status=_status - In the implementation block
-(id)initWithData:(id)arg1 ;
-(long long)status;
-(BOOL)success;
@end

