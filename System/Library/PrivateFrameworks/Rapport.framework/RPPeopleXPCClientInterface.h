/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RPPeopleXPCClientInterface
@required
-(void)xpcPeopleStatusChanged:(unsigned)arg1;
-(void)xpcPersonFound:(id)arg1;
-(void)xpcPersonLost:(id)arg1;
-(void)xpcPersonChanged:(id)arg1 changes:(unsigned)arg2;
-(void)xpcPersonID:(id)arg1 deviceID:(id)arg2 updatedMeasurement:(id)arg3;

@end
