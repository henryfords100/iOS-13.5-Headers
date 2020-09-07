/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSString;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask {

	NSString* _previousETag;

}

@property (assign,nonatomic,__weak) id<CoreDAVTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousETag;                              //@synthesize previousETag=_previousETag - In the implementation block
-(id)description;
-(id)httpMethod;
-(id)requestBody;
-(id)additionalHeaderValues;
-(void)setPreviousETag:(NSString *)arg1 ;
-(NSString *)previousETag;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
@end
