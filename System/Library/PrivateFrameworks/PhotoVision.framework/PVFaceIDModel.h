/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PVFaceIDModel : NSObject
+(id)defaultConfiguration;
+(id)modelFileName;
+(id)loadModelAtPath:(id)arg1 error:(id*)arg2 ;
+(id)classifyFaceObservation:(id)arg1 withModel:(id)arg2 error:(id*)arg3 ;
+(id)faceObservationFromFaceprintData:(id)arg1 ;
+(BOOL)addFaceObservations:(id)arg1 forPersonIdentifier:(id)arg2 toModel:(id)arg3 error:(id*)arg4 ;
+(id)newMutablePersonsModel;
+(BOOL)persistModel:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
@end
