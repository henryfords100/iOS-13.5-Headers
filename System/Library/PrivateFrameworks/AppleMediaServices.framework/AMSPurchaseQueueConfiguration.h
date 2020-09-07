/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSBagProtocol, AMSPurchaseResponseProtocol;
@interface AMSPurchaseQueueConfiguration : NSObject {

	id<AMSBagProtocol> _bag;
	id<AMSPurchaseResponseProtocol> _delegate;

}

@property (nonatomic,readonly) id<AMSBagProtocol> bag;                              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) id<AMSPurchaseResponseProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AMSPurchaseResponseProtocol>)delegate;
-(void)setDelegate:(id<AMSPurchaseResponseProtocol>)arg1 ;
-(id)initWithBag:(id)arg1 ;
-(id<AMSBagProtocol>)bag;
@end
