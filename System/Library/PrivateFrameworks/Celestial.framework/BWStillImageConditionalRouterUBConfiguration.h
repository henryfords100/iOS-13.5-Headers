/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWStillImageConditionalRouterConfiguration.h>

@class NSArray;

@interface BWStillImageConditionalRouterUBConfiguration : BWStillImageConditionalRouterConfiguration {

	NSArray* _portTypes;

}

@property (nonatomic,readonly) NSArray * portTypes;              //@synthesize portTypes=_portTypes - In the implementation block
+(id)configurationWithPortTypes:(id)arg1 ;
-(void)dealloc;
-(NSArray *)portTypes;
-(id)initWithPortTypes:(id)arg1 ;
-(unsigned long long)outputIndexForPortType:(id)arg1 ;
@end

