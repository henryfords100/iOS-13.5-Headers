/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem {

	NSMutableSet* _supportedReports;

}

@property (nonatomic,retain) NSMutableSet * supportedReports;              //@synthesize supportedReports=_supportedReports - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(BOOL)supportsReportWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(NSMutableSet *)supportedReports;
-(void)addSupportedReport:(id)arg1 ;
-(void)setSupportedReports:(NSMutableSet *)arg1 ;
@end
