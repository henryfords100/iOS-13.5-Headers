/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPQuery.h>

@class _MSPQueryState, MSPContainer, NSString;

@interface MSPEditableQuery : MSPQuery {

	_MSPQueryState* _editedState;
	MSPContainer* _container;
	NSString* _context;

}
-(id)_initWithSource:(id)arg1 ;
-(void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3 ;
-(id)_visibleState;
-(void)_performEditWithStateTransformation:(/*^block*/id)arg1 containerEdit:(/*^block*/id)arg2 ;
-(void)deleteContentsObjectAtIndexes:(id)arg1 ;
-(void)deleteContentsObjectAtIndex:(unsigned long long)arg1 ;
-(void)moveContentsObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
@end
