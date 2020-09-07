/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface AKAppleIDServerUIDataHarvester : NSObject {

	NSMutableDictionary* _harvestedData;

}

@property (nonatomic,copy,readonly) NSDictionary * harvestedData; 
-(id)init;
-(void)harvestDataFromServerHTTPResponse:(id)arg1 ;
-(NSDictionary *)harvestedData;
-(void)harvestDataFromServerUIObjectModel:(id)arg1 ;
-(void)_harvestDataFromClientInfo:(id)arg1 withExtractor:(id)arg2 ;
-(void)harvestIDMSRecoveryInfoFromClientInfo:(id)arg1 ;
-(void)_harvestIDMSRecoveryHeadersInfo:(id)arg1 ;
-(void)harvestIDMSRecoveryInfoFromHeaders:(id)arg1 ;
-(void)harvestDataFromCompanionResponse:(id)arg1 ;
@end
