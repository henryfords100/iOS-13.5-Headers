/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VSRecognitionResult : NSObject
+(void)initialize;
+(id)recognitionResultWithModelIdentifier:(id)arg1 classIdentifiers:(id)arg2 values:(id)arg3 ;
-(id)init;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)hash;
-(id)description;
-(id)modelIdentifier;
-(long long)elementCount;
-(BOOL)getElementClassIdentifier:(id*)arg1 value:(id*)arg2 atIndex:(long long)arg3 ;
-(id)recognitionResultByReplacingValueForClassIdentifier:(id)arg1 withValue:(id)arg2 ;
-(id)valueOfFirstElementWithClassIdentifier:(id)arg1 ;
-(id)createHandler;
-(void)setRecognitionAction:(id)arg1 ;
-(id)recognitionAction;
@end

