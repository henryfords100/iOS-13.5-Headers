/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@interface CoreDAVCopyTask : CoreDAVCopyOrMoveTask

@property (assign,nonatomic,__weak) id<CoreDAVCopyTaskDelegate> delegate; 
-(void)dealloc;
-(BOOL)validate:(id*)arg1 ;
-(id)httpMethod;
-(void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2 ;
@end

