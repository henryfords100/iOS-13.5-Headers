/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSSet;

@interface CRKASMCourseUpdateProperties : NSObject <NSCopying> {

	NSString* _name;
	NSNumber* _color;
	NSNumber* _mascot;
	NSSet* _usersToAdd;
	NSSet* _usersToRemove;

}

@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSNumber * color;                 //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSNumber * mascot;                //@synthesize mascot=_mascot - In the implementation block
@property (nonatomic,copy) NSSet * usersToAdd;                 //@synthesize usersToAdd=_usersToAdd - In the implementation block
@property (nonatomic,copy) NSSet * usersToRemove;              //@synthesize usersToRemove=_usersToRemove - In the implementation block
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)color;
-(void)setColor:(NSNumber *)arg1 ;
-(NSNumber *)mascot;
-(void)setMascot:(NSNumber *)arg1 ;
-(NSSet *)usersToAdd;
-(void)setUsersToAdd:(NSSet *)arg1 ;
-(NSSet *)usersToRemove;
-(void)setUsersToRemove:(NSSet *)arg1 ;
@end
