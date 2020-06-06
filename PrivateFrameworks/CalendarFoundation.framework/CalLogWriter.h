/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalLogWriter.h>

@protocol CalLogWriter <NSObject>
@property (nonatomic,retain) id<CalLogFormatter> formatter; 
@required
-(id<CalLogFormatter>)formatter;
-(void)setFormatter:(id)arg1;
-(id)initWithParameters:(id)arg1;
-(BOOL)flush;
-(void)write:(id)arg1;

@end


@protocol CalLogFormatter;
@class NSString;

@interface CalLogWriter : NSObject <CalLogWriter> {

	id<CalLogFormatter> _formatter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<CalLogFormatter> formatter;              //@synthesize formatter=_formatter - In the implementation block
-(id)init;
-(NSString *)description;
-(id<CalLogFormatter>)formatter;
-(void)setFormatter:(id<CalLogFormatter>)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(BOOL)flush;
-(void)write:(id)arg1 ;
@end
