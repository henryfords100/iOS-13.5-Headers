/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RBConcreteTarget.h>

@class RBProcess;

@interface RBBasicProcessConcreteTarget : RBConcreteTarget {

	RBProcess* _process;

}
-(id)description;
-(id)identity;
-(id)process;
-(BOOL)isSystem;
-(id)createRBSTarget;
-(id)_initWithProcess:(id)arg1 ;
@end

