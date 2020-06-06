/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDDiagnostic <NSObject>
@required
-(id)diagnosticDescription;
-(id)experiment;
-(id)analysis;
-(id)runWithParameters:(id)arg1 host:(id)arg2 error:(id*)arg3;

@end
