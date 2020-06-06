/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOServerFormatTokenTimeStampValue.h>

@class NSTimeZone, NSString;

@interface _TempTokenTimestampValue : NSObject <GEOServerFormatTokenTimeStampValue> {

	double _timeStamp;
	NSTimeZone* _timeZone;
	NSString* _formatPattern;

}

@property (assign,nonatomic) double timeStamp;                      //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                 //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSString * formatPattern;              //@synthesize formatPattern=_formatPattern - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(double)timeStamp;
-(void)setTimeStamp:(double)arg1 ;
-(NSString *)formatPattern;
-(void)setFormatPattern:(NSString *)arg1 ;
@end
