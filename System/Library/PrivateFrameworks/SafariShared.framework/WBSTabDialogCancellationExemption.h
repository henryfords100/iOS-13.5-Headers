/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WBSTabDialogCancellationExemption : NSObject {

	/*^block*/id _cancellationExemptionHandler;

}
+(id)sameOriginNavigationExemption:(id)arg1 ;
+(id)provisionalNavigationExemption;
+(id)committedNavigationExemption;
-(id)init;
-(id)initWithCancellationHandler:(/*^block*/id)arg1 ;
-(BOOL)isExemptFromCancellationInContext:(id)arg1 ;
@end
