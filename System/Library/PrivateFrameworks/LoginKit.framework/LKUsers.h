/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LKStudentProviding.h>

@class NSArray, NSString;

@interface LKUsers : NSObject <LKStudentProviding> {

	NSArray* _students;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * students;                      //@synthesize students=_students - In the implementation block
-(id)initWithUsers:(id)arg1 ;
-(NSArray *)students;
-(void)setStudents:(NSArray *)arg1 ;
@end

