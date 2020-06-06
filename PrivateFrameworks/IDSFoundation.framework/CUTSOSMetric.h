/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CUTSOSMetric <CUTMetric>
@property (readonly) unsigned long long sosDomain; 
@property (readonly) unsigned long long sosType; 
@property (readonly) unsigned long long sosError; 
@property (readonly) NSString * operationID; 
@required
-(NSString *)operationID;
-(unsigned long long)sosDomain;
-(unsigned long long)sosType;
-(unsigned long long)sosError;

@end
