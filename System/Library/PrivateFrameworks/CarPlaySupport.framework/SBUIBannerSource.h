/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIBannerSource <NSObject>
@optional
-(void)bannerViewWillAppear:(id)arg1;
-(void)bannerViewDidAppear:(id)arg1;
-(void)bannerViewWillDismiss:(id)arg1 forReason:(int)arg2;
-(void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2;

@required
-(id)peekNextBannerItemForTarget:(id)arg1;
-(id)dequeueNextBannerItemForTarget:(id)arg1;
-(id)newBannerViewForContext:(id)arg1;

@end

