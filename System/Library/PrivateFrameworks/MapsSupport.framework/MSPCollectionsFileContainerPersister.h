/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPFileContainerPersister.h>

@interface MSPCollectionsFileContainerPersister : MSPFileContainerPersister
-(BOOL)getSnapshot:(out id*)arg1 data:(out id*)arg2 forNewContents:(id)arg3 edits:(id)arg4 appliedToOldContents:(id)arg5 error:(out id*)arg6 ;
-(BOOL)getSnapshot:(out id*)arg1 data:(out id*)arg2 mergingCurrentState:(id)arg3 withState:(id)arg4 mergeOptions:(id)arg5 error:(out id*)arg6 ;
-(id)stateSnapshotFromData:(id)arg1 ;
@end
