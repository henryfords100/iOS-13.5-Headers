/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTPromise.h>

@class CUTResult;

@interface _CUTStaticPromise : CUTPromise {

	CUTResult* _result;

}

@property (nonatomic,retain) CUTResult * result;              //@synthesize result=_result - In the implementation block
-(CUTResult *)result;
-(void)setResult:(CUTResult *)arg1 ;
-(id)initWithResult:(id)arg1 ;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
@end
