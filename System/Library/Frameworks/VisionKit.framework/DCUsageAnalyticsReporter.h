/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VisionKit/DCAnalyticsReporterBase.h>

@interface DCUsageAnalyticsReporter : DCAnalyticsReporterBase
+(id)sharedReporter;
+(void)clearSharedCollector;
-(void)incrementCountForKey:(id)arg1 withSignature:(id)arg2 ;
-(void)incrementCountForKey:(id)arg1 ;
-(void)logDocCamFilterUsageForFilterType:(short)arg1 ;
@end
