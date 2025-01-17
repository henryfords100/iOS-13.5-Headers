/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface CalDAVCalendarUserAddress : NSObject {

	NSURL* _address;
	long long _preferred;

}

@property (nonatomic,retain) NSURL * address;              //@synthesize address=_address - In the implementation block
@property (assign) long long preferred;                    //@synthesize preferred=_preferred - In the implementation block
+(id)unpackCalDAVUserAdress:(id)arg1 ;
+(id)packCalDAVUserAdress:(id)arg1 ;
+(id)preferredAddress:(id)arg1 ;
+(long long)defaultPreferredAttribute;
+(id)_minPreferredAddress:(id)arg1 ;
+(id)_preferredAddressNoPreferred:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSURL *)address;
-(void)setAddress:(NSURL *)arg1 ;
-(long long)preferred;
-(void)setPreferred:(long long)arg1 ;
-(id)initWithAddress:(id)arg1 preferred:(long long)arg2 ;
@end

