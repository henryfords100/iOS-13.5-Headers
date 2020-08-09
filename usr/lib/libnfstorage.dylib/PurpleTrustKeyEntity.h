/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:03:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libnfstorage.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSObject, NSString, PurpleTrustAppletEntity, PurpleTrustClientEntity;

@interface PurpleTrustKeyEntity : NSManagedObject

@property (nonatomic,retain) NSObject * blob; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * uniqueIdentifier; 
@property (assign,nonatomic) int version; 
@property (nonatomic,retain) PurpleTrustAppletEntity * applet; 
@property (nonatomic,retain) PurpleTrustClientEntity * client; 
+(id)fetchRequest;
@end
