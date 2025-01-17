/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, PKPaymentSetupFieldFooter;

@interface PKPaymentSetupFieldsModel : NSObject {

	NSMutableArray* _paymentSetupFields;
	PKPaymentSetupFieldFooter* _footerField;

}
+(id)fakePaymentSetupProvisioningFields;
+(id)defaultPaymentSetupProvisioningFields;
-(id)paymentSetupFieldWithIdentifier:(id)arg1 ;
-(void)replaceAllPaymentSetupFields:(id)arg1 ;
-(void)resetAllPaymentSetupFieldValues;
-(void)prefillDefaultValues;
-(id)incompletePaymentSetupFields;
-(id)footerPaymentSetupField;
-(id)initWithPaymentSetupFields:(id)arg1 ;
-(void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)arg1 ;
-(void)updateWithPaymentSetupFields:(id)arg1 ;
-(id)paymentSetupFields;
-(id)paymentSetupFieldIdentifiers;
-(id)paymentSetupFieldAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPaymentSetupFields;
-(BOOL)hasIncompletePaymentSetupFields;
-(id)submissionValuesForDestination:(id)arg1 ;
-(BOOL)hasFooterPaymentSetupField;
-(id)secureSubmissionValuesForDestination:(id)arg1 ;
@end

