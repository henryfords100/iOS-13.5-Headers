/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKPaymentTransaction, NSString;

@interface PKDashboardTransactionMapItem : NSObject <PKDashboardItem> {

	PKPaymentTransaction* _transaction;

}

@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPaymentTransaction *)transaction;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
@end
