/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsServicesInternal/NewsServicesInternal-Structs.h>
#import <libobjc.A.dylib/NSSExternalAnalyticsEvent.h>
@class NSDictionary;


@protocol NSSExternalAnalyticsEvent <NFCopying>
@property (nonatomic,copy,readonly) NSDictionary * requestQueryParameters; 
@required
-(NSDictionary *)requestQueryParameters;
-(id)requestMetadataWithExternalAnalyticsIdentifier:(id)arg1;

@end


@class NSDictionary, NTPBSession;

@interface NSSExternalAnalyticsEvent : NSObject <NSSExternalAnalyticsEvent> {

	NSDictionary* _requestQueryParameters;
	NTPBSession* _session;

}

@property (nonatomic,copy,readonly) NTPBSession * session;                              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * requestQueryParameters;              //@synthesize requestQueryParameters=_requestQueryParameters - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(NTPBSession *)session;
-(id)initWithSession:(id)arg1 requestQueryParameters:(id)arg2 ;
-(NSDictionary *)requestQueryParameters;
-(id)requestMetadataWithExternalAnalyticsIdentifier:(id)arg1 ;
@end
