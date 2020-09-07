/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSUUID, NSString, NSDate, NSSet;

@interface AXSS_PunctuationGroup : NSManagedObject

@property (nonatomic,copy) NSUUID * basePunctuationUUID; 
@property (nonatomic,copy) NSString * ckChangeTag; 
@property (nonatomic,copy) NSDate * ckRecordProcessDate; 
@property (assign,nonatomic) BOOL inCloud; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSUUID * uuid; 
@property (assign,nonatomic) short version; 
@property (nonatomic,retain) NSSet * autoSwitchContexts; 
+(id)fetchRequest;
@end
