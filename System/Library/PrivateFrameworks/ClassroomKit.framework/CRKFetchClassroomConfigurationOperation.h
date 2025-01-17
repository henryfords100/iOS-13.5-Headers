/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@protocol CRKRequestPerformingProtocol;
@class NSDictionary, CATRemoteTaskOperation;

@interface CRKFetchClassroomConfigurationOperation : CATOperation {

	id<CRKRequestPerformingProtocol> mStudentDaemonProxy;
	NSDictionary* mSourcesByType;
	CATRemoteTaskOperation* mFetchConfigurationOperation;

}
+(id)defaultSourcesByType;
-(id)init;
-(void)run;
-(void)cancel;
-(void)main;
-(BOOL)isAsynchronous;
-(id)initWithStudentDaemonProxy:(id)arg1 ;
-(id)initWithStudentDaemonProxy:(id)arg1 sourcesByType:(id)arg2 ;
-(void)fetchConfigurationiOS;
-(void)fetchConfigurationOperationDidFinish:(id)arg1 ;
-(void)fetchConfigurationMacOS;
@end

