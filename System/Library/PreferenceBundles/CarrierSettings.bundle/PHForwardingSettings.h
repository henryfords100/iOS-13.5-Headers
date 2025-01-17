/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PreferenceBundles/CarrierSettings.bundle/CarrierSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PHForwardingSettings : NSObject {

	unsigned _callForwardingState;
	NSString* _callForwardingNumber;
	NSString* _defaultCallForwardingNumber;
	NSString* _defaultCallForwardingNumberPreferencesKey;

}

@property (assign) unsigned callForwardingState;                                                //@synthesize callForwardingState=_callForwardingState - In the implementation block
@property (nonatomic,retain) NSString * callForwardingNumber;                                   //@synthesize callForwardingNumber=_callForwardingNumber - In the implementation block
@property (nonatomic,retain) NSString * defaultCallForwardingNumber;                            //@synthesize defaultCallForwardingNumber=_defaultCallForwardingNumber - In the implementation block
@property (nonatomic,retain) NSString * defaultCallForwardingNumberPreferencesKey;              //@synthesize defaultCallForwardingNumberPreferencesKey=_defaultCallForwardingNumberPreferencesKey - In the implementation block
-(NSString *)callForwardingNumber;
-(void)setCallForwardingNumber:(NSString *)arg1 ;
-(unsigned)callForwardingState;
-(void)setCallForwardingState:(unsigned)arg1 ;
-(NSString *)defaultCallForwardingNumber;
-(void)setDefaultCallForwardingNumber:(NSString *)arg1 ;
-(NSString *)defaultCallForwardingNumberPreferencesKey;
-(void)setDefaultCallForwardingNumberPreferencesKey:(NSString *)arg1 ;
@end

