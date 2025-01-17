/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VUIJSAccountChannelsInterface.h>

@class VSAccountStore;

@interface VUIJSAccountChannels : IKJSObject <VUIJSAccountChannelsInterface> {

	VSAccountStore* _accountStore;

}

@property (nonatomic,retain) VSAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
-(void)dealloc;
-(void)setAccountStore:(VSAccountStore *)arg1 ;
-(VSAccountStore *)accountStore;
-(id)initWithAppContext:(id)arg1 ;
-(void)fetchMSOProviderStatus:(id)arg1 ;
-(void)_sendVideoSubscriberChangedNotificationToTheJavaScript;
@end

