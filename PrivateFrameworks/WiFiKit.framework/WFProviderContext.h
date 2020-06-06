/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFProviderContext <NSObject>
@property (nonatomic,readonly) id<WFNetworkListRecord> network; 
@property (nonatomic,readonly) long long requestedFields; 
@required
-(void)cancel;
-(id<WFNetworkListRecord>)network;
-(long long)requestedFields;

@end
