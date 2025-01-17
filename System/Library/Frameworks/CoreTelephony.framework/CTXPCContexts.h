/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSUUID;

@interface CTXPCContexts : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _subscriptions;
	NSUUID* _dataPreferred;
	NSUUID* _voicePreferred;

}

@property (nonatomic,retain) NSArray * subscriptions;              //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSUUID * dataPreferred;               //@synthesize dataPreferred=_dataPreferred - In the implementation block
@property (nonatomic,retain) NSUUID * voicePreferred;              //@synthesize voicePreferred=_voicePreferred - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)subscriptions;
-(void)setSubscriptions:(NSArray *)arg1 ;
-(NSUUID *)voicePreferred;
-(void)setVoicePreferred:(NSUUID *)arg1 ;
-(id)findForUuid:(id)arg1 ;
-(id)findForAccount:(id)arg1 ;
-(NSUUID *)dataPreferred;
-(void)setDataPreferred:(NSUUID *)arg1 ;
-(id)findForSlot:(long long)arg1 ;
@end

