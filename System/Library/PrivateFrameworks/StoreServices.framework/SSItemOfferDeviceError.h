/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface SSItemOfferDeviceError : NSObject {

	NSString* _localizedMessage;
	NSString* _localizedTitle;
	NSString* _localizedURLTitle;
	NSURL* _url;

}

@property (nonatomic,readonly) NSString * localizedMessage;               //@synthesize localizedMessage=_localizedMessage - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;                 //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) NSString * localizedURLTitle;              //@synthesize localizedURLTitle=_localizedURLTitle - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                               //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(NSURL *)URL;
-(NSString *)localizedTitle;
-(NSString *)localizedMessage;
-(id)_initWithMessage:(id)arg1 title:(id)arg2 URLTitle:(id)arg3 URL:(id)arg4 ;
-(NSString *)localizedURLTitle;
@end
