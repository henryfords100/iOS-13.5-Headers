/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItem;

@interface CoreDAVSetItem : CoreDAVItem {

	CoreDAVItem* _prop;

}

@property (nonatomic,retain) CoreDAVItem * prop;              //@synthesize prop=_prop - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(CoreDAVItem *)prop;
-(void)setProp:(CoreDAVItem *)arg1 ;
@end
