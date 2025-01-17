/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLPhotoLibraryOptions : NSObject {

	BOOL _automaticallyMergesContext;
	BOOL _preventsWaitingForRequiredState;
	int _libraryRole;
	long long _requiredState;

}

@property (assign,nonatomic) BOOL automaticallyMergesContext;                   //@synthesize automaticallyMergesContext=_automaticallyMergesContext - In the implementation block
@property (assign,nonatomic) long long requiredState;                           //@synthesize requiredState=_requiredState - In the implementation block
@property (assign,nonatomic) int libraryRole;                                   //@synthesize libraryRole=_libraryRole - In the implementation block
@property (assign,nonatomic) BOOL preventsWaitingForRequiredState;              //@synthesize preventsWaitingForRequiredState=_preventsWaitingForRequiredState - In the implementation block
-(BOOL)automaticallyMergesContext;
-(BOOL)preventsWaitingForRequiredState;
-(long long)requiredState;
-(void)setAutomaticallyMergesContext:(BOOL)arg1 ;
-(void)setRequiredState:(long long)arg1 ;
-(void)setLibraryRole:(int)arg1 ;
-(int)libraryRole;
-(void)setPreventsWaitingForRequiredState:(BOOL)arg1 ;
@end

