/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PPContactDiskCache : NSObject {

	long long _lastCreatedAt;

}
+(id)sharedInstance;
-(id)init;
-(id)loadNameRecordCache;
-(BOOL)writeNameRecordCache:(id)arg1 fullLoadFromSource:(BOOL)arg2 ;
-(BOOL)deleteNameRecordCache;
@end
