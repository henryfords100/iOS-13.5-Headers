/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSClue.h>

@interface CLSInputClue : CLSClue {

	BOOL _needsPreparation;

}

@property (assign) BOOL needsPreparation;              //@synthesize needsPreparation=_needsPreparation - In the implementation block
-(id)init;
-(void)prepareIfNeeded;
-(BOOL)needsPreparation;
-(void)setNeedsPreparation:(BOOL)arg1 ;
-(void)_prepareWithProgressBlock:(/*^block*/id)arg1 ;
@end
